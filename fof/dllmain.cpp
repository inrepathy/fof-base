#include "Windows.h"
#include "interfaces.hpp"
#include "CUserCmd.hpp"
#include "vmthook.hpp"
#include <cstdio>      


void InitConsole() {
	AllocConsole();
	freopen_s(reinterpret_cast<FILE**>(stdout), "CONOUT$", "w", stdout);
	SetConsoleTitle(L" ");
	printf("initalized\n");
}

void __stdcall hkdCreateMove(int sequence_number, float input_sample_frametime, bool active, CUserCmd* pCmd)
{
	bool** basePointer;
	__asm mov basePointer, ebp;
	auto pbSendPacket = *basePointer - 1;
	static bool bJumpState = false;

	/*if (pCmd->buttons & IN_JUMP) // either im bad at coding or this doesnt work.. both!
	{
		if (!bJumpState)
			pCmd->buttons &= ~IN_JUMP;

		else if (bJumpState)
			bJumpState = false;
	}

	else if (!bJumpState)
	{
		bJumpState = true;
	}*/
}

using CreateMoveFn = void(__thiscall*)(PVOID, int, float, bool);
CreateMoveFn oCreateMove = nullptr;
VMTHook* g_pClientHook = nullptr;

DWORD __stdcall SetupThread()
{
	InitConsole();
	g_pClientHook = new VMTHook(reinterpret_cast<void*>(GameClient::ClientInterface::VClient017)); // $$$
	printf("g_pClientHook vmthooked\n");
	oCreateMove = g_pClientHook->hook<CreateMoveFn>(&hkdCreateMove, 21);
	printf("oCreateMove ready!\n");

	MessageBeep(MB_OK);
	printf("CreateMove hooked\n");
	return 0;
}

BOOL WINAPI DllMain(HMODULE hDll, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)SetupThread, NULL, NULL, NULL);

	return 1;
}

