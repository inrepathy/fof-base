#include <cstdint>

namespace GameClient {
    namespace CBaseAnimating {
        struct DT_BaseAnimating {
            uint32_t m_Collision = 0x1a4;
            uint32_t AnimTimeMustBeFirst = 0x0;
            uint32_t m_flSimulationTime = 0x9c;
            uint32_t m_ubInterpolationFrame = 0xa8;
            uint32_t m_nModelIndex = 0xb4;
            uint32_t m_iTeamNum = 0xb8;
            uint32_t m_bSimulatedEveryTick = 0x4d1;
            uint32_t m_iTextureFrameIndex = 0x4d4;
            uint32_t m_fEffects = 0xac;
            uint32_t m_nRenderMode = 0xb0;
            uint32_t m_nRenderFX = 0x88;
            uint32_t m_CollisionGroup = 0x35c;
            uint32_t m_flElasticity = 0x250;
            uint32_t m_vecOrigin = 0x340;
            uint32_t m_flShadowCastDistance = 0x254;
            uint32_t m_hEffectEntity = 0x4e4;
            uint32_t m_hOwnerEntity = 0x4e0;
            uint32_t m_iParentAttachment = 0x182;
            uint32_t moveparent = 0x198;
            uint32_t m_bAnimatedEveryTick = 0x4d2;
            uint32_t m_clrRender = 0x8c;
            uint32_t m_bAlternateSorting = 0x4d3;
            uint32_t movetype = 0x0;
            uint32_t movecollide = 0x0;
            uint32_t predictable_id = 0x0;
            uint32_t m_angRotation = 0x34c;
            uint32_t m_flPoseParameter = 0x62c;
            uint32_t m_flPlaybackRate = 0x550;
            uint32_t m_flEncodedController = 0x748;
            uint32_t m_bClientSideFrameReset = 0x598;
            uint32_t m_bClientSideAnimation = 0x798;
            uint32_t m_nNewSequenceParity = 0x79c;
            uint32_t m_nResetEventsParity = 0x7a0;
            uint32_t m_hLightingOrigin = 0x84c;
            uint32_t m_hLightingOriginRelative = 0x850;
            uint32_t serveranimdata = 0x0;
            uint32_t m_flCycle = 0x7d0;
            uint32_t m_fadeMinDist = 0x5d0;
            uint32_t m_fadeMaxDist = 0x5d4;
            uint32_t m_nBody = 0x544;
            uint32_t m_flFadeScale = 0x5d8;
            uint32_t m_nHitboxSet = 0x528;
            uint32_t m_nSequence = 0x7c8;
            uint32_t m_nForceBone = 0x568;
            uint32_t m_vecForce = 0x55c;
            uint32_t m_nSkin = 0x524;
            uint32_t m_flModelScale = 0x628;
            uint32_t m_nMuzzleFlashParity = 0x854;
            uint32_t m_flModelWidthScale = 0x628;
        };
    }

    namespace CBaseAnimatingOverlay {
        struct DT_BaseAnimatingOverlay {
            uint32_t m_flPoseParameter = 0x62c;
            uint32_t m_flPlaybackRate = 0x550;
            uint32_t m_flEncodedController = 0x748;
            uint32_t m_bClientSideFrameReset = 0x598;
            uint32_t m_bClientSideAnimation = 0x798;
            uint32_t m_nNewSequenceParity = 0x79c;
            uint32_t m_nResetEventsParity = 0x7a0;
            uint32_t m_hLightingOrigin = 0x84c;
            uint32_t m_hLightingOriginRelative = 0x850;
            uint32_t serveranimdata = 0x0;
            uint32_t m_fadeMinDist = 0x5d0;
            uint32_t m_fadeMaxDist = 0x5d4;
            uint32_t m_nBody = 0x544;
            uint32_t m_flFadeScale = 0x5d8;
            uint32_t m_nHitboxSet = 0x528;
            uint32_t m_nSequence = 0x7c8;
            uint32_t m_nForceBone = 0x568;
            uint32_t m_vecForce = 0x55c;
            uint32_t m_nSkin = 0x524;
            uint32_t m_flModelScale = 0x628;
            uint32_t m_nMuzzleFlashParity = 0x854;
            uint32_t m_flModelWidthScale = 0x628;
            uint32_t overlay_vars = 0x0;
            uint32_t m_AnimOverlay = 0x0;
        };
    }

    namespace CBaseCombatCharacter {
        struct DT_BaseCombatCharacter {
            uint32_t m_flexWeight = 0x918;
            uint32_t m_blinktoggle = 0xac8;
            uint32_t m_viewtarget = 0x8dc;
            uint32_t m_vecViewOffset[3] = { 0x24, 0x28, 0x2c }; // haha
            uint32_t m_vecLean = 0xc34;
            uint32_t m_vecShift = 0xc70;
            uint32_t m_bGlowEnabled = 0xdfd;
            uint32_t m_hActiveWeapon2 = 0xe04;
            uint32_t bcc_localdata = 0x0;
            uint32_t m_flNextAttack = 0xcb0;
            uint32_t m_hActiveWeapon = 0xdf8;
            uint32_t m_hMyWeapons = 0xd38;
        };
    }

    namespace ClientInterface {
        constexpr uintptr_t VClient017 = 0x270ee8c4;
        constexpr const char* Interface = "VClient017";
    }

    namespace CBaseEntity {
        struct DT_BaseEntity {
            uint32_t m_Collision = 0x1a4;
            uint32_t m_vecMinsPreScaled = 0x8;
            uint32_t m_vecMaxsPreScaled = 0x14;
            uint32_t m_vecMins = 0x20;
            uint32_t m_vecMaxs = 0x2c;
            uint32_t m_nSolidType = 0x41;
            uint32_t m_usSolidFlags = 0x3c;
            uint32_t m_nSurroundType = 0x40;
            uint32_t m_triggerBloat = 0x42;
            uint32_t m_vecSpecifiedSurroundingMinsPreScaled = 0x44;
            uint32_t m_vecSpecifiedSurroundingMaxsPreScaled = 0x50;
            uint32_t m_vecSpecifiedSurroundingMins = 0x5c;
            uint32_t m_vecSpecifiedSurroundingMaxs = 0x68;
            uint32_t AnimTimeMustBeFirst = 0x0;
            uint32_t m_flAnimTime = 0x94;
            uint32_t m_flSimulationTime = 0x9c;
            uint32_t m_ubInterpolationFrame = 0xa8;
            uint32_t m_nModelIndex = 0xb4;
            uint32_t m_iTeamNum = 0xb8;
            uint32_t m_bSimulatedEveryTick = 0x4d1;
            uint32_t m_iTextureFrameIndex = 0x4d4;
            uint32_t m_fEffects = 0xac;
            uint32_t m_nRenderMode = 0xb0;
            uint32_t m_nRenderFX = 0x88;
            uint32_t m_CollisionGroup = 0x35c;
            uint32_t m_flElasticity = 0x250;
            uint32_t m_vecOrigin = 0x340;
            uint32_t m_flShadowCastDistance = 0x254;
            uint32_t m_hEffectEntity = 0x4e4;
            uint32_t m_hOwnerEntity = 0x4e0;
            uint32_t m_iParentAttachment = 0x182;
            uint32_t moveparent = 0x198;
            uint32_t m_bAnimatedEveryTick = 0x4d2;
            uint32_t m_clrRender = 0x8c;
            uint32_t m_bAlternateSorting = 0x4d3;
            uint32_t movetype = 0x0;
            uint32_t movecollide = 0x0;
            uint32_t predictable_id = 0x0;
            uint32_t m_bIsPlayerSimulated = 0x4d0;
            uint32_t m_PredictableID = 0xbc;
            uint32_t m_angRotation = 0x34c;
        };
    }
}
