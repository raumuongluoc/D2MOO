#pragma once

#include "CommonDefinitions.h"


//TODO: Redo Header defs when .cpp is done


//D2Common.0x6FDBD520 (#10457)
BYTE __stdcall UNITS_GetDirection(D2UnitStrc* pUnit);
//D2Common.0x6FDBD570 (#10320)
D2SkillStrc* __stdcall UNITS_GetStartSkill(D2UnitStrc* pUnit);
//D2Common.0x6FDBD5B0 (#10321)
D2SkillStrc* __stdcall UNITS_GetGetLeftSkill(D2UnitStrc* pUnit);
//D2Common.0x6FDBD5F0 (#10322)
D2SkillStrc* __stdcall UNITS_GetRightSkill(D2UnitStrc* pUnit);
//D2Common.0x6FDBD630 (#10324)
void __stdcall UNITS_SetUsedSkill(D2UnitStrc* pUnit, D2SkillStrc* pUsedSkill);
//D2Common.0x6FDBD670 (#10323)
D2SkillStrc* __stdcall UNITS_GetUsedSkill(D2UnitStrc* pUnit);
//D2Common.0x6FDBD6B0 (#11259)
D2UnitStrc* __stdcall UNITS_AllocUnit(void* pMemPool, int nUnitType);
//D2Common.0x6FDBD720 (#11260)
void __stdcall UNITS_FreeUnit(D2UnitStrc* pUnit);
//D2Common.0x6FDBD780 (#10327)
int __stdcall UNITS_GetPrecisionX(D2UnitStrc* pUnit);
//D2Common.0x6FDBD7D0 (#10330)
int __stdcall UNITS_GetPrecisionY(D2UnitStrc* pUnit);
//D2Common.0x6FDBD820 (#10328)
void __stdcall UNITS_SetXForStaticUnit(D2UnitStrc* pUnit, int nX);
//D2Common.0x6FDBD890 (#10331)
void __stdcall UNITS_SetYForStaticUnit(D2UnitStrc* pUnit, int nY);
//D2Common.0x6FDBD900 (#10336)
int __stdcall UNITS_GetUnitSizeX(D2UnitStrc* pUnit);
//D2Common.0x6FDBDA00 (#10337)
int __stdcall UNITS_GetUnitSizeY(D2UnitStrc* pUnit);
//D2Common.0x6FDBDB10 (#10333)
int __stdcall UNITS_GetTargetX(D2UnitStrc* pUnit);
//D2Common.0x6FDBDB60 (#10334)
int __stdcall UNITS_GetTargetY(D2UnitStrc* pUnit);
//D2Common.0x6FDBDBB0 (#10411)
int __stdcall UNITS_GetAbsoluteXDistance(D2UnitStrc* pUnit1, D2UnitStrc* pUnit2);
//D2Common.0x6FDBDC20 (#10412)
int __stdcall UNITS_GetAbsoluteYDistance(D2UnitStrc* pUnit1, D2UnitStrc* pUnit2);
//D2Common.0x6FDBDC90 (#10340)
void __stdcall UNITS_SetTargetX(D2UnitStrc* pUnit, int nTargetX);
//D2Common.0x6FDBDCD0 (#10341)
void __stdcall UNITS_SetTargetY(D2UnitStrc* pUnit, int nTargetY);
//D2Common.0x6FDBDD10 (#10332)
void __stdcall UNITS_GetCoords(D2UnitStrc* pUnit, D2CoordStrc* pCoord);
//D2Common.0x6FDBDDA0 (#10335)
void __stdcall UNITS_GetTargetCoords(D2UnitStrc* pUnit, D2CoordStrc* pTargetCoords);
//D2Common.0x6FDBDE10 (#10338)
int __fastcall UNITS_GetCollisionType(D2UnitStrc* pUnit);
//D2Common.0x6FDBDEC0 (#10352)
void __stdcall UNITS_FreeCollisionPath(D2UnitStrc* pUnit);
//D2Common.0x6FDBE060 (#10351)
void __stdcall UNITS_BlockCollisionPath(D2UnitStrc* pUnit, D2RoomStrc* pRoom, int nX, int nY);
//D2Common.0x6FDBE1A0 (#10350)
void __stdcall UNITS_InitializeStaticPath(D2UnitStrc* pUnit, D2RoomStrc* pRoom, int nX, int nY);
//D2Common.0x6FDBE210 (#10343)
void __stdcall UNITS_ResetRoom(D2UnitStrc* pUnit);
//D2Common.0x6FDBE270 (#10342)
D2RoomStrc* __stdcall UNITS_GetRoom(D2UnitStrc* pUnit);
//D2Common.0x6FDBE2D0 (#10344)
void __stdcall UNITS_SetTargetUnitForDynamicUnit(D2UnitStrc* pUnit, D2UnitStrc* pTargetUnit);
//D2Common.0x6FDBE330 (#10345)
int __stdcall UNITS_GetTargetTypeFromDynamicUnit(D2UnitStrc* pUnit);
//D2Common.0x6FDBE3A0 (#10346)
int __stdcall UNITS_GetTargetGUIDFromDynamicUnit(D2UnitStrc* pUnit);
//D2Common.0x6FDBE410 (#10347)
void __stdcall UNITS_SetTargetUnitForPlayerOrMonster(D2UnitStrc* pUnit, D2UnitStrc* pTargetUnit);
//D2Common.0x6FDBE470 (#10354)
void __stdcall UNITS_GetRunAndWalkSpeedForPlayer(int nUnused, int nCharId, int* pWalkSpeed, int* pRunSpeed);
//D2Common.0x6FDBE4C0 (#10325)
void __stdcall UNITS_SetAnimData(D2UnitStrc* pUnit, int nUnitType, int nClassId, int nMode);
//D2Common.0x6FDBE510
void __stdcall UNITS_SetAnimStartFrame(D2UnitStrc* pUnit);
//D2Common.0x6FDBEA60 (#10348)
BOOL __stdcall UNITS_ChangeAnimMode(D2UnitStrc* pUnit, int nMode);
//D2Common.0x6FDBEAD0 (#10355)
int __stdcall D2Common_10355(D2UnitStrc* pUnit);
//D2Common.0x6FDBEB20 (#10356)
void __stdcall D2Common_10356(D2UnitStrc* pUnit, int a2);
//D2Common.0x6FDBEB80 (#10357)
void __stdcall UNITS_RefreshInventory(D2UnitStrc* pUnit, BOOL bSetFlag);
//D2Common.0x6FDBEBE0 (#10409)
int __stdcall UNITS_GetInventoryRecordId(D2UnitStrc* pUnit, int nInvPage, BOOL bLoD);
//D2Common.0x6FDBECD0 (#10383)
D2GfxLightStrc* __stdcall UNITS_GetLightMap(D2UnitStrc* pUnit);
//D2Common.0x6FDBED10 (#10369)
int __stdcall UNITS_GetAnimOrSeqMode(D2UnitStrc* pUnit);
//D2Common.0x6FDBED40 (#10370)
void __stdcall UNITS_SetAnimOrSeqMode(D2UnitStrc* pUnit, int nAnimMode);
//D2Common.0x6FDBED90 (#10371)
void __stdcall UNITS_InitializeSequence(D2UnitStrc* pUnit);
//D2Common.0x6FDBEE20 (#10372)
void __stdcall UNITS_SetAnimationFrame(D2UnitStrc* pUnit, int nFrame);
//D2Common.0x6FDBEE60 (#10373)
void __stdcall UNITS_StopSequence(D2UnitStrc* pUnit);
//D2Common.0x6FDBEFF0 (#10374)
void __stdcall UNITS_UpdateFrame(D2UnitStrc* pUnit);
//D2Common.0x6FDBF020 (#10375)
void __stdcall D2COMMON_10375_UNITS_SetFrameNonRate(D2UnitStrc* pUnit, int nRate, int nFailRate);
//D2Common.0x6FDBF050
void __stdcall D2COMMON_10376_UpdateAnimRateAndVelocity(D2UnitStrc* pUnit, char* szFile, int nLine);
//D2Common.0x6FDBF8D0 (#10377)
void __stdcall UNITS_SetAnimationSpeed(D2UnitStrc* pUnit, int nSpeed);
//D2Common.0x6FDBF910 (#10378)
int __stdcall UNITS_IsAtEndOfFrameCycle(D2UnitStrc* pUnit);
//D2Common.0x6FDBF970 (#10379)
void __stdcall UNITS_GetShiftedFrameMetrics(D2UnitStrc* pUnit, int* pFrameNo, int* pFrameCount);
//D2Common.0x6FDBF9E0 (#10380)
void __stdcall UNITS_GetFrameMetrics(D2UnitStrc* pUnit, int* pFrame, int* pFrameCount);
//D2Common.0x6FDBFA40 (#10381)
void __stdcall UNITS_SetAnimActionFrame(D2UnitStrc* pUnit, int nFrame);
//D2Common.0x6FDBFA90 (#10382)
int __stdcall UNITS_GetEventFrameInfo(D2UnitStrc* pUnit, int nFrame);
//D2Common.0x6FDBFB40 (#10410)
BOOL __stdcall UNITS_HasCollision(D2UnitStrc* pUnit);
//D2Common.0x6FDBFB70 (#10358)
D2SkillStrc* __stdcall UNITS_GetSkillFromSkillId(D2UnitStrc* pUnit, int nSkillId);
//D2Common.0x6FDBFC10 (#10392)
BOOL __stdcall UNITS_IsDoor(D2UnitStrc* pUnit);
//D2Common.0x6FDBFC50
bool __fastcall UNITS_CheckIfObjectOrientationIs1(D2UnitStrc* pUnit);
//D2Common.0x6FDBFC90 (#10393)
BOOL __stdcall UNITS_IsShrine(D2UnitStrc* pUnit);
//D2Common.0x6FDBFCB0 (#10394)
D2ObjectsTxt* __stdcall UNITS_GetObjectTxtRecordFromObject(D2UnitStrc* pUnit);
//D2Common.0x6FDBFD00 (#10395)
D2ShrinesTxt* __stdcall UNITS_GetShrineTxtRecordFromObject(D2UnitStrc* pUnit);
//D2Common.0x6FDBFD50 (#10396)
void __stdcall UNITS_SetShrineTxtRecordInObjectData(D2UnitStrc* pUnit, D2ShrinesTxt* pTxt);
//D2Common.0x6FDBFDB0 (#10413)
void __stdcall UNITS_UpdateDirectionAndSpeed(D2UnitStrc* pUnit, int nX, int nY);
//D2Common.0x6FDBFDD0 (#10414)
int __stdcall UNITS_GetNewDirection(D2UnitStrc* pUnit);
//D2Common.0x6FDBFF20 (#10416)
void __stdcall UNITS_StoreOwnerTypeAndGUID(D2UnitStrc* pUnit, int nOwnerType, int nOwnerId);
//D2Common.0x6FDBFF40
void __fastcall UNITS_StoreOwnerInfo(D2UnitStrc* pUnit, int nOwnerType, int nOwnerId);
//D2Common.0x6FDBFFE0 (#10415)
void __stdcall UNITS_StoreOwner(D2UnitStrc* pUnit, D2UnitStrc* pOwner);
//D2Common.0x6FDC0060 (#10417)
void __stdcall UNITS_StoreLastAttacker(D2UnitStrc* pUnit, D2UnitStrc* pKiller);
//D2Common.0x6FDC00E0 (#10418)
int __stdcall UNITS_GetDirectionToCoords(D2UnitStrc* pUnit, int nNewX, int nNewY);
//D2Common.0x6FDC0160 (#10437)
void __stdcall UNITS_SetOverlay(D2UnitStrc* pUnit, int nOverlay, int a3);
//D2Common.0x6FDC01F0 (#10367)
int __stdcall UNITS_GetBeltType(D2UnitStrc* pUnit);
//D2Common.0x6FDC0260 (#10368)
int __stdcall UNITS_GetCurrentLifePercentage(D2UnitStrc* pUnit);
//D2Common.0x6FDC02A0 (#10359)
BOOL __stdcall UNITS_IsSoftMonster(D2UnitStrc* pUnit);
//D2Common.0x6FDC0320 (#10420)
void __stdcall UNITS_AllocPlayerData(D2UnitStrc* pUnit);
//D2Common.0x6FDC03F0 (#10421)
void __stdcall UNITS_FreePlayerData(void* pMemPool, D2UnitStrc* pPlayer);
//D2Common.0x6FDC04A0 (#10422)
void __stdcall UNITS_SetNameInPlayerData(D2UnitStrc* pUnit, char* szName);
//D2Common.0x6FDC0530 (#10423)
char* __stdcall UNITS_GetPlayerName(D2UnitStrc* pUnit);
//D2Common.0x6FDC05B0 (#10424)
D2PlayerDataStrc* __stdcall UNITS_GetPlayerData(D2UnitStrc* pUnit);
//D2Common.0x6FDC0600 (#10425)
void __stdcall UNITS_SetPlayerPortalFlags(D2UnitStrc* pUnit, int a2);
//D2Common.0x6FDC0660 (#10426)
int __stdcall UNITS_GetPlayerPortalFlags(D2UnitStrc* pUnit);
//D2Common.0x6FDC06C0 (#10353)
DWORD __stdcall UNITS_GetNameOffsetFromObject(D2UnitStrc* pUnit);
//D2Common.0x6FDC0700 (#10427)
BYTE __stdcall UNITS_GetObjectPortalFlags(D2UnitStrc* pUnit);
//D2Common.0x6FDC0760 (#10428)
void __stdcall UNITS_SetObjectPortalFlags(D2UnitStrc* pUnit, BYTE nPortalFlag);
//D2Common.0x6FDC07C0 (#10429)
BOOL __stdcall UNITS_CheckObjectPortalFlag(D2UnitStrc* pUnit, BYTE nFlag);
//D2Common.0x6FDC0820 (#10430)
int __stdcall UNITS_GetOverlayHeight(D2UnitStrc* pUnit);
//D2Common.0x6FDC08B0 (#10431)
int __stdcall UNITS_GetDefense(D2UnitStrc* pUnit);
//D2Common.0x6FDC0AC0 (#10432)
int __stdcall UNITS_GetAttackRate(D2UnitStrc* pUnit);
//D2Common.0x6FDC0B60 (#10433)
int __stdcall UNITS_GetBlockRate(D2UnitStrc* pUnit, BOOL bExpansion);
//D2Common.0x6FDC0DA0 (#10434)
D2UnitStrc* __stdcall D2Common_10434(D2UnitStrc* pUnit, BOOL a2);
//D2Common.0x6FDC0F70 (#10435)
D2UnitStrc* __stdcall UNITS_GetEquippedWeaponFromMonster(D2UnitStrc* pUnit);
//D2Common.0x6FDC0FC0 (#10436)
int __stdcall UNITS_GetFrameBonus(D2UnitStrc* pUnit);
//D2Common.0x6FDC1120 (#10360)
int __stdcall UNITS_GetMeleeRange(D2UnitStrc* pUnit);
//D2Common.0x6FDC1230 (#10364)
BOOL __stdcall UNITS_TestCollisionByCoordinates(D2UnitStrc* pUnit, int nX, int nY, int nFlags);
//D2Common.0x6FDC13D0
BOOL __fastcall UNITS_TestCollision(int nX1, int nY1, int nSize1, int nX2, int nY2, int nSize2, D2RoomStrc* pRoom, int nCollisionType);
//D2Common.0x6FDC14C0 (#10362)
BOOL __stdcall UNITS_TestCollisionWithUnit(D2UnitStrc* pUnit1, D2UnitStrc* pUnit2, int nCollisionType);
//D2Common.0x6FDC1760
void __fastcall UNITS_ToggleUnitFlag(D2UnitStrc* pUnit, int nFlag, BOOL bSet);
//D2Common.0x6FDC1790 (#10363)
BOOL __stdcall UNITS_TestCollisionBetweenInteractingUnits(D2UnitStrc* pUnit1, D2UnitStrc* pUnit2, int nCollisionType);
//D2Common.0x6FDC1A70 (#10361)
BOOL __stdcall UNITS_IsInMeleeRange(D2UnitStrc* pUnit1, D2UnitStrc* pUnit2, int a3);
//D2Common.0x6FDC1B40 (#10318)
BOOL __stdcall UNITS_IsInMovingMode(D2UnitStrc* pUnit);
//D2Common.0x6FDC1C30 (#10319)
BOOL __stdcall UNITS_IsInMovingModeEx(D2UnitStrc* pUnit);
//D2Common.0x6FDC1C50 (#10365)
int __fastcall UNITS_GetHitClass(D2UnitStrc* pUnit);
//D2Common.0x6FDC1CE0 (#10366)
int __fastcall UNITS_GetWeaponClass(D2UnitStrc* pUnit);
//D2Common.0x6FDC1D00 (#10438)
unsigned int __stdcall UNITS_GetHealingCost(D2UnitStrc* pUnit);
//D2Common.0x6FDC1D90 (#10439)
unsigned int __stdcall UNITS_GetInventoryGoldLimit(D2UnitStrc* pUnit);
//D2Common.0x6FDC1DB0 (#10440)
void __stdcall UNITS_MergeDualWieldWeaponStatLists(D2UnitStrc* pUnit, int a2);
//D2Common.0x6FDC1EE0
D2MonStats2Txt* __fastcall UNITS_GetMonStats2TxtRecord(int nRecordId);
//D2Common.0x6FDC1F10 (#10442)
BYTE __stdcall UNITS_GetItemComponentId(D2UnitStrc* pUnit, D2UnitStrc* pItem);
//D2Common.0x6FDC1FE0
D2MonStats2Txt* __fastcall UNITS_GetMonStats2TxtRecordFromMonsterId(int nMonsterId);
//D2Common.0x6FDC2030 (#10443)
void __stdcall UNITS_InitRightSkill(D2UnitStrc* pUnit);
//D2Common.0x6FDC20A0 (#10444)
void __stdcall UNITS_InitLeftSkill(D2UnitStrc* pUnit);
//D2Common.0x6FDC2110 (#10445)
void __stdcall UNITS_InitSwitchRightSkill(D2UnitStrc* pUnit);
//D2Common.0x6FDC2180 (#10446)
void __stdcall UNITS_InitSwitchLeftSkill(D2UnitStrc* pUnit);
//D2Common.0x6FDC21F0 (#10447)
void __stdcall UNITS_GetRightSkillData(D2UnitStrc* pUnit, int* pRightSkillId, int* pRightSkillFlags);
//D2Common.0x6FDC2250 (#10448)
void __stdcall UNITS_GetLeftSkillData(D2UnitStrc* pUnit, int* pLeftSkillId, int* pLeftSkillFlags);
//D2Common.0x6FDC22B0 (#10449)
void __stdcall UNITS_GetSwitchRightSkillDataResetRightSkill(D2UnitStrc* pUnit, int* pSwitchRightSkillId, int* pSwitchRightSkillFlags);
//D2Common.0x6FDC2330 (#10450)
void __stdcall UNITS_GetSwitchLeftSkillDataResetLeftSkill(D2UnitStrc* pUnit, int* pSwitchLeftSkillId, int* pSwitchLeftSkillFlags);
//D2Common.0x6FDC23B0 (#10451)
void __stdcall UNITS_GetSwitchLeftSkillData(D2UnitStrc* pUnit, int* pSwitchLeftSkillId, int* pSwitchLeftSkillFlags);
//D2Common.0x6FDC2420 (#10452)
void __stdcall UNITS_GetSwitchRightSkillData(D2UnitStrc* pUnit, int* pSwitchRightSkillId, int* pSwitchRightSkillFlags);
//D2Common.0x6FDC2490 (#10453)
void __stdcall UNITS_SetSwitchLeftSkill(D2UnitStrc* pUnit, int nSwitchLeftSkillId, int nSwitchLeftSkillFlags);
//D2Common.0x6FDC24E0 (#10454)
void __stdcall UNITS_SetSwitchRightSkill(D2UnitStrc* pUnit, int nSwitchRightSkillId, int nSwitchRightSkillFlags);
//D2Common.0x6FDC2530 (#10455)
void __stdcall UNITS_SetWeaponGUID(D2UnitStrc* pUnit, D2UnitStrc* pWeapon);
//D2Common.0x6FDC25B0 (#10456)
int __stdcall UNITS_GetWeaponGUID(D2UnitStrc* pUnit);
//D2Common.0x6FDC2630 (#10339)
unsigned int __stdcall UNITS_GetStashGoldLimit(D2UnitStrc* pUnit);
//D2Common.0x6FDC2680 (#10317)
BOOL __fastcall UNITS_CanSwitchAI(int nMonsterId);
//D2Common.0x6FDC2720 (#10458)
void __fastcall UNITS_SetTimerArg(D2UnitStrc* pUnit, D2TimerArgStrc* pTimerArg);
//D2Common.0x6FDC2750 (#10459)
D2TimerArgStrc* __fastcall UNITS_GetTimerArg(D2UnitStrc* pUnit);
//D2Common.0x6FDC2780 (#10460)
void __stdcall UNITS_AllocStaticPath(D2UnitStrc* pUnit);
//D2Common.0x6FDC27C0 (#10461)
void __stdcall UNITS_FreeStaticPath(D2UnitStrc* pUnit);
//D2Common.0x6FDC27F0 (#10462)
BOOL __stdcall UNITS_CanDualWield(D2UnitStrc* pUnit);
//D2Common.0x6FDC2860 (#11238)
BOOL __stdcall UNITS_IsCorpseUseable(D2UnitStrc* pUnit);
//D2Common.0x6FDC2910
BOOL __stdcall UNITS_IsObjectInInteractRange(D2UnitStrc* pUnit, D2UnitStrc* pObject);
//D2Common.0x6FDC2C80
D2CharStatsTxt* __fastcall UNITS_GetCharStatsTxtRecord(int nRecordId);
//D2Common.0x6FDC2CB0 (#10399)
int __stdcall D2Common_10399(D2UnitStrc* pUnit1, D2UnitStrc* pUnit2);
//D2Common.0x6FDC2E40 (#10397)
int __stdcall UNITS_GetDistanceToOtherUnit(D2UnitStrc* pUnit1, D2UnitStrc* pUnit2);
//D2Common.0x6FDC2F50 (#10398)
int __stdcall UNITS_GetDistanceToCoordinates(D2UnitStrc* pUnit, int nX, int nY);
//D2Common.0x6FDC2FF0 (#10400)
BOOL __stdcall UNITS_IsInRange(D2UnitStrc* pUnit, D2CoordStrc* pCoord, int nDistance);
//D2Common.0x6FDC3090 (#10406)
D2UnitStrc* __stdcall D2Common_10406(D2UnitStrc* pUnit, int(__fastcall* pCallback)(D2UnitStrc*, D2UnitStrc*), D2UnitStrc* a3);
//D2Common.0x6FDC33C0 (#10407)
D2UnitStrc* __stdcall D2Common_10407(D2RoomStrc* pRoom, int nX, int nY, int(__fastcall* pCallback)(D2UnitStrc*, D2UnitStrc*), D2UnitStrc* a5, int a6);
//D2Common.0x6FDC3680 (#10419)
void __fastcall UNITS_SetInteractData(D2UnitStrc* pUnit, int nSkillId, int nUnitType, int nUnitGUID);
