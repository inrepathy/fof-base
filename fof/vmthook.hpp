#include "Windows.h"
#include <cstring>

class VMTHook
{
public:
    bool IsValidPointer(void* ptr)
    {
        if (ptr == nullptr) return false;

        MEMORY_BASIC_INFORMATION mbi;
        VirtualQuery(ptr, &mbi, sizeof(mbi));
        return (mbi.State == MEM_COMMIT && mbi.Protect != PAGE_NOACCESS);
    }

    VMTHook(void* ppdwClassBase)
    {
        if (ppdwClassBase == nullptr) {
            return;
        }

        m_ppdwClassBase = (PDWORD*)ppdwClassBase;

        if (!IsValidPointer(m_ppdwClassBase)) {
            return;
        }

        m_pdwOldVMT = *m_ppdwClassBase;

        if (m_pdwOldVMT == nullptr) {
            return;
        }

        m_iVMTCount = get_vmt_count(m_pdwOldVMT);
        m_pdwNewVMT = new DWORD[m_iVMTCount];

        memcpy(m_pdwNewVMT, m_pdwOldVMT, 0x4 * m_iVMTCount);
        *m_ppdwClassBase = m_pdwNewVMT;
    }


    ~VMTHook()
    {
        delete[] m_pdwNewVMT;
    }

    template<typename T>
    T hook(void* newFunc, int index)
    {
        if (index >= m_iVMTCount)
            return nullptr;

        T ret = reinterpret_cast<T>(m_pdwOldVMT[index]);
        m_pdwNewVMT[index] = reinterpret_cast<DWORD>(newFunc);
        return ret;
    }

private:
    int get_vmt_count(PDWORD pVMT)
    {
        if (!pVMT)
            return 0;

        DWORD dwIndex = 0;
        for (; pVMT[dwIndex]; dwIndex++)
        {
            if (IsBadReadPtr((void*)&pVMT[dwIndex], sizeof(PDWORD)))
                break;
        }
        return dwIndex;
    }

    int m_iVMTCount;
    PDWORD* m_ppdwClassBase;
    PDWORD m_pdwOldVMT;
    PDWORD m_pdwNewVMT;
};
