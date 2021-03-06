#pragma once

#include "CommonDefinitions.h"

//D2Common.0x6FD74120 (#10014)
D2DrlgStrc* __fastcall DRLG_AllocDrlg(D2DrlgActStrc* pAct, BYTE nActNo, void* a3, DWORD nInitSeed, int nLevelId, DWORD nFlags, D2GameStrc* pGame, BYTE nDifficulty, AUTOMAPFN pfAutoMap, TOWNAUTOMAPFN pfTownAutoMap);
//D2Common.0x6FD743B0 (#10012)
void __fastcall DRLG_FreeDrlg(D2DrlgStrc* pDrlg);
//D2Common.0x6FD74440
void __fastcall DRLG_FreeLevel(void* pMemPool, D2DrlgLevelStrc* pLevel, BOOL a3);
//D2Common.0x6FD745C0
void __fastcall sub_6FD745C0(D2RoomExStrc* pRoomEx1, D2RoomExStrc* pRoomEx2);
//D2Common.0x6FD74700
void __fastcall sub_6FD74700(D2DrlgStrc* pDrlg);
//D2Common.0x6FD748D0 (#10013)
D2DrlgLevelStrc* __fastcall DRLG_AllocLevel(D2DrlgStrc* pDrlg, int nLevelId);
//D2Common.0x6FD749A0 (#10005)
D2DrlgLevelStrc* __stdcall DRLG_GetLevel(D2DrlgStrc* pDrlg, int nLevelId);
//D2Common.0x6FD749D0
int __fastcall DRLG_GetHoradricStaffTombLevelId(D2DrlgStrc* pDrlg);
//D2Common.0x6FD749E0
int __fastcall DRLG_GetDirectionFromCoordinates(D2DrlgCoordStrc* pDrlgCoord1, D2DrlgCoordStrc* pDrlgCoord2);
//D2Common.0x6FD74A40
void __fastcall DRLG_CreateRoomForRoomEx(D2DrlgStrc* pDrlg, D2RoomExStrc* pRoomEx);
//D2Common.0x6FD74B30
int* __fastcall DRLG_GetRoomCenterX_RoomWarpXFromRoom(D2RoomExStrc* pRoomEx);
//D2Common.0x6FD74B40
void __fastcall DRLG_ComputeLevelWarpInfo(D2DrlgLevelStrc* pLevel);
//D2Common.0x6FD74C10 (#10006)
void __stdcall DRLG_InitLevel(D2DrlgLevelStrc* pLevel);
//D2Common.0x6FD74D50
int __fastcall DRLG_GetNumberOfPopulatedRoomsInLevel(D2DrlgStrc* pDrlg, int nLevelId);
//D2Common.0x6FD74D90
void __fastcall DRLG_GetMinAndMaxCoordinatesFromLevel(D2DrlgLevelStrc* pLevel, int* pTileMinX, int* pTileMinY, int* pTileMaxX, int* pTileMaxY);
//D2Common.0x6FD74E10
void __fastcall DRLG_UpdateRoomExCoordinates(D2DrlgLevelStrc* pLevel);
//D2Common.0x6FD74EF0
D2RoomExStrc* __fastcall DRLG_GetRoomExFromLevelAndCoordinates(D2DrlgLevelStrc* pLevel, int nX, int nY);
//D2Common.0x6FD74F70
D2RoomExStrc* __fastcall DRLG_GetRoomExFromCoordinates(int nX, int nY, D2DrlgStrc* pDrlg, D2RoomExStrc* pRoomEx, D2DrlgLevelStrc* pLevel);
//D2Common.0x6FD751C0
BOOL __fastcall DRLG_IsTownLevel(int nLevelId);
//D2Common.0x6FD75260 (#10000)
int __stdcall DRLG_GetLevelTypeFromLevelId(int nLevelId);
//D2Common.0x6FD75270
void __fastcall DRLG_SetLevelPositionAndSize(D2DrlgStrc* pDrlg, D2DrlgLevelStrc* pLevel);
//D2Common.0x6FD75300 (#10001)
BYTE __stdcall DRLG_GetActNoFromLevelId(int nLevelId);
//D2Common.0x6FD75330 (#10004)
int __stdcall DRLG_GetSaveMonstersFromLevelId(int nLevelId);
//D2Common.0x6FD75350 (#10002)
int __stdcall DRLG_GetLOSDrawFromLevelId(int nLevelId);
//D2Common.0x6FD75370
D2DrlgWarpStrc* __fastcall DRLG_GetDrlgWarpFromLevelId(D2DrlgStrc* pDrlg, int nLevelId);
//D2Common.0x6FD753F0
void __fastcall DRLG_SetWarpId(D2DrlgWarpStrc* pDrlgWarp, int nVis, int nWarp, int nId);
//D2Common.0x6FD75450
int __fastcall DRLG_IsOnClient(D2DrlgStrc* pDrlg);
