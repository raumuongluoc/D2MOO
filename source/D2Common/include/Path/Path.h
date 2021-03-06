#pragma once

#include "CommonDefinitions.h"


//D2Common.0x6FDA8220
void __fastcall sub_6FDA8220(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA82A0 (#10141)
void __stdcall D2Common_10141(D2UnitStrc* pUnit, int* pX, int* pY);
//D2Common.0x6FDA8320 (#10222)
void __stdcall D2Common_10222(D2UnitStrc* pUnit);
//D2Common.0x6FDA8450 (#10223)
BOOL __stdcall D2Common_10223(D2UnitStrc* pUnit, int a2);
//D2Common.0x6FDA8600
int __stdcall D2Common_10142(D2DynamicPathStrc* pDynamicPath, D2UnitStrc* pUnit, int a3);
//D2Common.0x6FDA8E30
int __fastcall sub_6FDA8E30(D2DynamicPathStrc* pDynamicPath, D2UnitStrc* pUnit);
//D2Common.0x6FDA8FE0
void __fastcall sub_6FDA8FE0(D2PathInfoStrc* pPathInfo);
//D2Common.0x6FDA90C0
BYTE __fastcall sub_6FDA90C0(D2PathInfoStrc* pPathInfo);
//D2Common.0x6FDA9190 (#10156)
void __stdcall PATH_FreeDynamicPath(void* pMemPool, D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA91B0 (#11282)
int __stdcall D2Common_11282_Unused(int nMonsterId);
//D2Common.0x6FDA9250 (#11281)
int __stdcall D2Common_11281_Unused(D2UnitStrc* pUnit, int nSize);
//D2Common.0x6FDA92F0 (#10214)
void __stdcall D2Common_10214(D2UnitStrc* pUnit);
//D2Common.0x6FDA9480 (#10152)
void __stdcall PATH_AllocDynamicPath(void* pMemPool, D2RoomStrc* pRoom, int nX, int nY, D2UnitStrc* pUnit, BOOL bSetFlag);
//D2Common.0x6FDA9720
void __fastcall sub_6FDA9720(D2DynamicPathStrc* pDynamicPath, BYTE nDirection);
//D2Common.0x6FDA9770 (#10193)
void __stdcall D2COMMON_10193_PATH_AdjustDirection(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA97C0 (#10216)
void __stdcall D2Common_10216(D2DynamicPathStrc* pDynamicPath, int nX, int nY, int a4);
//D2Common.0x6FDA9850 (#10228)
void __stdcall D2Common_10228(D2UnitStrc* pUnit);
//D2Common.0x6FDA9870 (#10143)
void __stdcall D2Common_10143(D2UnitStrc* pUnit, int a2);
//D2Common.0x6FDA98F0 (#10144)
void __stdcall D2Common_10144(D2UnitStrc* pUnit, BOOL bDoNothing);
//D2Common.0x6FDA9A70 (#10146)
void __stdcall PATH_SetVelocity(D2DynamicPathStrc* pDynamicPath, int nVelocity, char* szFile, int nLine);
//D2Common.0x6FDA9AB0 (#10147)
int __stdcall PATH_GetVelocity(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9AC0 (#10148)
void __stdcall D2Common_10148(D2DynamicPathStrc* pDynamicPath, int a2);
//D2Common.0x6FDA9AE0 (#10149)
int __stdcall D2Common_10149(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9AF0 (#10150)
void __stdcall D2Common_10150(D2DynamicPathStrc* pDynamicPath, int a2);
//D2Common.0x6FDA9B10 (#10151)
int __stdcall D2Common_10151(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9B20 (#10153)
void __stdcall D2Common_10153(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9B40 (#10208)
void __stdcall D2COMMON_10208_PathSetPathingFlag(D2DynamicPathStrc* pDynamicPath, BOOL bSet);
//D2Common.0x6FDA9B70 (#10209)
BOOL __stdcall D2COMMON_10209_PathCheckPathingFlag(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9B80 (#10154)
int __stdcall D2Common_10154(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9B90 (#11291)
void __stdcall D2Common_11291(D2DynamicPathStrc* pDynamicPath, int a2);
//D2Common.0x6FDA9BC0 (#10155)
int __stdcall D2Common_10155(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9BD0 (#10157)
int __stdcall PATH_GetPathPoints(D2DynamicPathStrc* pDynamicPath, D2PathPointStrc** ppPathPoints);
//D2Common.0x6FDA9BF0 (#10158)
BYTE __stdcall PATH_GetDirection(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9C10 (#10159)
BYTE __stdcall PATH_GetNewDirection(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9C20 (#10160)
void __stdcall D2COMMON_10160_PathUpdateDirection(D2DynamicPathStrc* pDynamicPath, BYTE nDirection);
//D2Common.0x6FDA9C90 (#10161)
void __stdcall PATH_SetDirection(D2DynamicPathStrc* pDynamicPath, BYTE nDirection);
//D2Common.0x6FDA9CB0 (#10162)
int __stdcall PATH_GetXPosition(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9CF0 (#10163)
int __stdcall PATH_GetYPosition(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9D30 (#10194)
int __stdcall PATH_GetPrecisionX(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9D60 (#10195)
int __stdcall PATH_GetPrecisionY(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9D90 (#10196)
void __stdcall PATH_SetPrecisionX(D2DynamicPathStrc* pDynamicPath, int nPrecisionX);
//D2Common.0x6FDA9DA0 (#10197)
void __stdcall PATH_SetPrecisionY(D2DynamicPathStrc* pDynamicPath, int nPrecisionY);
//D2Common.0x6FDA9DB0 (#10164)
int __stdcall PATH_GetTargetX(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDC3CE0 (#10165)
int __stdcall PATH_GetTargetY(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9DC0
void __fastcall PATH_SetTargetX(D2DynamicPathStrc* pDynamicPath, int nTargetX);
//D2Common.0x6FDA9DD0
void __fastcall PATH_SetTargetY(D2DynamicPathStrc* pDynamicPath, int nTargetY);
//D2Common.0x6FDA9DE0 (#10175)
int __stdcall D2COMMON_10175_PathGetFirstPointX(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9DF0 (#10176)
int __stdcall D2COMMON_10176_PathGetFirstPointY(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9E00 (#10224)
int __stdcall D2Common_10224(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9E10 (#10225)
int __stdcall D2Common_10225(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9E20 (#10177)
int __stdcall D2COMMON_10177_PATH_GetLastPointX(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9E40 (#10178)
int __stdcall D2COMMON_10178_PATH_GetLastPointY(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDB9C10 (#10166)
D2RoomStrc* __stdcall PATH_GetRoom(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9E60 (#10167)
void __stdcall PATH_SetRoom(D2DynamicPathStrc* pDynamicPath, D2RoomStrc* pRoom);
//D2Common.0x6FDA9E70 (#10168)
D2RoomStrc* __stdcall PATH_GetNextRoom(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9E80 (#10169)
void __stdcall PATH_ClearNextRoom(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9E90 (#10170)
void __stdcall D2COMMON_10170_PathSetTargetPos(D2DynamicPathStrc* pDynamicPath, int nX, int nY);
//D2Common.0x6FDA9EC0 (#10172)
BOOL __stdcall D2Common_10172(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9ED0 (#10173)
void __stdcall D2Common_10173(D2DynamicPathStrc* pDynamicPath, BOOL bSet);
//D2Common.0x6FDA9F00 (#10145)
void __stdcall D2Common_10145(D2DynamicPathStrc* pDynamicPath, BOOL bSet);
//D2Common.0x6FDA9F30 (#10174)
BOOL __stdcall D2Common_10174(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9F40 (#10179)
void __stdcall PATH_SetTargetUnit(D2DynamicPathStrc* pDynamicPath, D2UnitStrc* pUnit);
//D2Common.0x6FDA9F60 (#10171)
void __stdcall PATH_GetTargetTypeAndGUID(D2DynamicPathStrc* pDynamicPath, int* pTargetType, int* pTargetGUID);
//D2Common.0x6FDA9FA0 (#10180)
D2UnitStrc* __stdcall PATH_GetTargetUnit(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9FC0 (#10181)
int __stdcall PATH_GetCollisionType(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDA9FE0 (#10182)
void __stdcall PATH_SetCollisionType(D2DynamicPathStrc* pDynamicPath, int nCollisionType);
//D2Common.0x6FDAA0C0 (#10183)
int __stdcall D2Common_10183(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA0D0 (#10184)
void __stdcall D2Common_10184(D2DynamicPathStrc* pDynamicPath, int a2);
//D2Common.0x6FDAA0E0 (#10185)
void __stdcall PATH_SetType(D2DynamicPathStrc* pDynamicPath, int nPathType);
//D2Common.0x6FDAA1E0 (#10186)
void __stdcall PATH_ResetToPreviousType(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA240 (#10187)
int __stdcall PATH_GetType(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA250 (#10190)
void __stdcall _10190_PATH_SetDistance(D2DynamicPathStrc* pDynamicPath, BYTE nDistance);
//D2Common.0x6FDAA270 (#10191)
BYTE __stdcall _10191_PATH_GetDistance(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA280 (#10188)
void __stdcall PATH_SetNewDistance(D2DynamicPathStrc* pDynamicPath, BYTE nNewDistance);
//D2Common.0x6FDAA2B0 (#10189)
BYTE __stdcall PATH_GetMaxDistance(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA2C0 (#10201)
WORD __stdcall D2Common_10201(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA300 (#10202)
WORD __stdcall D2Common_10202(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA310 (#10192)
void __stdcall D2COMMON_10192_PathSetIDAMax(D2DynamicPathStrc* pDynamicPath, int a2);
//D2Common.0x6FDAA350 (#10198)
int __stdcall D2COMMON_10198_PathGetSaveStep(D2DynamicPathStrc* pDynamicPath, D2PathPointStrc** ppPathPoints);
//D2Common.0x6FDAA390 (#10199)
int __stdcall D2COMMON_10199_PathGetSaveX(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA3E0 (#10200)
int __stdcall D2COMMON_10200_PathGetSaveY(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA430 (#10203)
void __stdcall D2COMMON_10203_PATH_SetRotateFlag(D2DynamicPathStrc* pDynamicPath, BOOL bReset);
//D2Common.0x6FDAA460 (#10204)
void __stdcall D2COMMON_10204_PATH_ClearPoint2(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA480 (#10205)
void __stdcall PATH_SetStepNum(D2DynamicPathStrc* pDynamicPath, BYTE nSteps);
//D2Common.0x6FDAA4B0 (#10206)
int __stdcall PATH_GetStepNum(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA4C0 (#10207)
void __stdcall D2Common_10207(D2DynamicPathStrc* pDynamicPath, char a2, char a3);
//D2Common.0x6FDAA4E0 (#10217)
void __stdcall PATH_SetDistance(D2DynamicPathStrc* pDynamicPath, int nDist);
//D2Common.0x6FDAA520 (#10218)
int __stdcall PATH_GetDistance(D2DynamicPathStrc* pDynamicPath);
//D2Common.0x6FDAA530 (#10219)
void __stdcall PATH_AddToDistance(D2DynamicPathStrc* pDynamicPath, int nAddition);
//D2Common.0x6FDAA570 (#10210)
int __stdcall PATH_GetUnitCollisionPattern(D2UnitStrc* pUnit);
//D2Common.0x6FDAA580 (#10211)
void __stdcall PATH_SetUnitCollisionPattern(D2UnitStrc* pUnit, int nCollisionPattern);
//D2Common.0x6FDAA5A0 (#10212)
void __stdcall D2COMMON_10212_PATH_SetMoveFlags(D2UnitStrc* pUnit, BOOL bSet);
//D2Common.0x6FDAA600 (#10213)
void __stdcall D2Common_10213(D2UnitStrc* pUnit);
//D2Common.0x6FDAA6A0 (#10220)
int __stdcall D2Common_10220(int a1, int a2, int a3, int a4);
//D2Common.0x6FDAA6D0 (#10221)
void __stdcall D2Common_10221(D2UnitStrc* pUnit);
//D2Common.0x6FDAA6F0 (#10237)
BOOL __stdcall D2Common_10237(D2UnitStrc* pUnit);
