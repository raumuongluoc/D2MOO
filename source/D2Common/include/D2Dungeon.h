#pragma once

#include "CommonDefinitions.h"

//D2Common.0x6FD8B8A0 (#10038)
D2DrlgActStrc* __stdcall DUNGEON_AllocAct(BYTE nActNo, DWORD nInitSeed, BOOL bClient, D2GameStrc* pGame, BYTE nDifficulty, void* pMemPool, int nTownLevelId, AUTOMAPFN pfAutoMap, TOWNAUTOMAPFN pfTownAutoMap);
//D2Common.0x6FD8B950 (#10039)
void __stdcall DUNGEON_FreeAct(D2DrlgActStrc* pAct);
//D2Common.0x6FD8B9D0
void* __fastcall DUNGEON_GetMemPoolFromAct(D2DrlgActStrc* pAct);
//D2Common.0x6FD8B9E0 (#10026)
void __stdcall DUNGEON_ToggleRoomTilesEnableFlag(D2RoomStrc* pRoom, BOOL bEnabled);
//D2Common.0x6FD8BA20 (#10027)
D2UnitStrc* __stdcall DUNGEON_GetWarpTileFromRoomAndSourceLevelId(D2RoomStrc* pRoom, int nSourceLevel, D2LvlWarpTxt** ppLvlWarpTxtRecord);
//D2Common.0x6FD8BAB0 (#10028)
D2LvlWarpTxt* __stdcall DUNGEON_GetLvlWarpTxtRecordFromRoomAndUnit(D2RoomStrc* pRoom, D2UnitStrc* pUnit);
//D2Common.0x6FD8BAF0 (#10030)
D2DrlgTileDataStrc* __stdcall DUNGEON_GetFloorTilesFromRoom(D2RoomStrc* pRoom, int* pFloorCount);
//D2Common.0x6FD8BB20 (#10031)
D2DrlgTileDataStrc* __stdcall DUNGEON_GetWallTilesFromRoom(D2RoomStrc* pRoom, int* pWallCount);
//D2Common.0x6FD8BB60 (#10032)
D2DrlgTileDataStrc* __stdcall DUNGEON_GetRoofTilesFromRoom(D2RoomStrc* pRoom, int* pRoofCount);
//D2Common.0x6FD8BBA0 (#10033)
D2DrlgTileDataStrc* __stdcall DUNGEON_GetTileDataFromAct(D2DrlgActStrc* pAct);
//D2Common.0x6FD8BBB0 (#10034)
void __stdcall DUNGEON_GetRoomCoordinates(D2RoomStrc* pRoom, D2DrlgCoordsStrc* pCoords);
//D2Common.0x6FD8BC10 (#10035)
void __stdcall DUNGEON_GetAdjacentRoomsListFromRoom(D2RoomStrc* pRoom, D2RoomStrc*** pppRoomList, int* pNumRooms);
//D2Common.0x6FD8BC50
D2RoomStrc* __fastcall DUNGEON_AllocRoom(D2DrlgActStrc* pAct, D2RoomExStrc* pRoomEx, D2DrlgCoordsStrc* pDrlgCoords, D2DrlgRoomTilesStrc* pRoomTiles, int nLowSeed, DWORD dwFlags);
//D2Common.0x6FD8BD90 (#10040)
BOOL __stdcall DUNGEON_DoRoomsTouchOrOverlap(D2RoomStrc* pRoom1, D2RoomStrc* pRoom2);
//D2Common.0x6FD8BE30 (#10043)
BOOL __stdcall DUNGEON_AreTileCoordinatesInsideRoom(D2RoomStrc* pRoom, int nX, int nY);
//D2Common.0x6FD8BE90 (#10048)
int __stdcall D2Common_10048(D2RoomStrc* pRoom, int nUnused);
//D2Commmon.0x6FD8BF00 (#10051)
D2RoomStrc* __stdcall DUNGEON_FindRoomByTileCoordinates(D2DrlgActStrc* pAct, int nX, int nY);
//D2Common.0x6FD8BF50 (#10050)
D2RoomStrc* __stdcall DUNGEON_GetAdjacentRoomByCoordinates(D2RoomStrc* pRoom, int nX, int nY);
//D2Common.0x6FD8BFF0 (#10049)
void __stdcall DUNGEON_CallRoomCallback(D2RoomStrc* pRoom, ROOMCALLBACKFN pfnRoomCallback, void* pArgs);
//D2Common.0x6FD8C080 (#10052)
void __stdcall D2Common_10052(D2RoomStrc* pRoom, RECT* pRect);
//D2Common.0x6FD8C170 (#10053)
void __stdcall DUNGEON_GetSubtileRect(D2RoomStrc* pRoom, RECT* pRect);
//D2Common.0x6FD8C210 (#10054)
void __stdcall DUNGEON_GetRGB_IntensityFromRoom(D2RoomStrc* pRoom, BYTE* pIntensity, BYTE* pRed, BYTE* pGreen, BYTE* pBlue);
//D2Common.0x6FD8C240 (#10041)
D2RoomStrc* __stdcall DUNGEON_FindRoomBySubtileCoordinates(D2DrlgActStrc* pAct, int nX, int nY);
//D2Common.0x6FD8C290
BOOL __fastcall DUNGEON_AreSubtileCoordinatesInsideRoom(D2DrlgCoordsStrc* pDrlgCoords, int nX, int nY);
//D2Common.0x6FD8C2F0 (#10046)
D2RoomStrc* __stdcall DUNGEON_FindActSpawnLocation(D2DrlgActStrc* pAct, int nLevelId, int a3, int* pX, int* pY);
//D2Common.0x6FD8C340 (#10045)
D2RoomStrc* __stdcall DUNGEON_FindActSpawnLocationEx(D2DrlgActStrc* pAct, int nLevelId, int a3, int* pX, int* pY, int nUnitSize);
//D2Common.0x6FD8C4A0 (#10029)
D2UnitStrc* __stdcall DUNGEON_GetFirstUnitInRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C4E0 (#10100)
void __stdcall DUNGEON_IncreaseAlliedCountOfRoom(D2RoomStrc* pRoom);
//D2Comon.0x6FD8C4F0 (#10036)
int __stdcall DUNGEON_GetAlliedCountFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C510 (#10101)
void __stdcall DUNGEON_DecreaseAlliedCountOfRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C550
D2UnitStrc** __fastcall DUNGEON_GetUnitListFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C580
D2UnitStrc** __fastcall DUNGEON_GetUnitUpdateListFromRoom(D2RoomStrc* pRoom, BOOL bUpdate);
//D2Common.0x6FD8C5C0 (#10055)
D2PresetUnitStrc* __stdcall DUNGEON_GetPresetUnitsFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C600
D2RoomCollisionGridStrc* __fastcall DUNGEON_GetCollisionGridFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C630
void __fastcall DUNGEON_SetCollisionGridInRoom(D2RoomStrc* pRoom, D2RoomCollisionGridStrc* pCollisionGrid);
//D2Common.0x6FD8C660 (#10063)
void __stdcall D2COMMON_10063_AddRoomData(D2DrlgActStrc* pAct, int nLevelId, int nX, int nY, D2RoomStrc* pRoom);
//D2Common.0x6FD8C6B0 (#10064)
void __stdcall D2COMMON_10064_RemoveRoomData(D2DrlgActStrc* pAct, int nLevelId, int nX, int nY, D2RoomStrc* pRoom);
//D2Common.0x6FD8C700 (#10062)
void __stdcall D2Common_10062(D2RoomStrc* pRoom1, D2RoomStrc* pRoom2);
//D2Common.0x6FD8C730 (#10065)
D2RoomStrc* __stdcall D2COMMON_10065_GetRoomFromActAndCoord(D2DrlgActStrc* pAct, int nX, int nY);
//D2Common.0x6FD8C770 (#10056)
D2RoomStrc* __stdcall DUNGEON_GetRoomFromAct(D2DrlgActStrc* pAct);
//D2Common.0x6FD8C7A0 (#10057)
int __stdcall DUNGEON_GetLevelIdFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C7C0 (#10058)
int __stdcall DUNGEON_GetWarpDestinationLevel(D2RoomStrc* pRoom, int nSourceLevel);
//D2Common.0x6FD8C7E0 (#10059)
int __stdcall DUNGEON_GetLevelIdFromPopulatedRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C800 (#10060)
BOOL __stdcall DUNGEON_HasWaypoint(D2RoomStrc* pRoom);
//D2Common.0x6FD8C840 (#10061)
char* __stdcall DUNGEON_GetPickedLevelPrestFilePathFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C860 (#10066)
void __stdcall DUNGEON_AllocDrlgDelete(D2RoomStrc* pRoom, int nUnitType, int nUnitId);
//D2Common.0x6FD8C8B0 (#10067)
void __stdcall DUNGEON_FreeDrlgDelete(D2RoomStrc* pRoom);
//D2Common.0x6FD8C910 (#10068)
D2DrlgDeleteStrc* __stdcall DUNGEON_GetDrlgDeleteFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8C940 (#10069)
D2RoomStrc* __stdcall D2Common_10069(D2DrlgActStrc* pAct);
//D2Common.0x6FD8C980 (#10070)
D2RoomStrc* __stdcall D2Common_10070(D2DrlgActStrc* pAct, D2RoomStrc* pRoom);
//D2Common.0x6FD8C9E0 (#10071)
BOOL __stdcall DUNGEON_TestRoomCanUnTile(D2DrlgActStrc* pAct, D2RoomStrc* pRoom);
//D2Common.0x6FD8CA60 (#10072)
bool __stdcall D2Common_10072(D2RoomStrc* pRoom);
//D2Common.0x6FD8CA80 (#10073)
BOOL __stdcall D2Common_10073(D2RoomStrc* pRoom);
//D2Common.0x6FD8CAE0 (#10074)
BOOL __stdcall D2Common_10074(D2RoomStrc* pRoom);
//D2Common.0x6FD8CB10 (#10075)
void __stdcall D2Common_10075(D2RoomStrc* pRoom, BOOL bSet);
//D2Common.0x6FD8CB60 (#10079)
void __stdcall DUNGEON_AddClientToRoom(D2RoomStrc* pRoom, D2ClientStrc* pClient);
//D2Common.0x6FD8CC50
void __fastcall DUNGEON_UpdateClientListOfRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8CD10 (#10080)
void __stdcall DUNGEON_RemoveClientFromRoom(D2RoomStrc* pRoom, D2ClientStrc* pClient);
//D2Common.0x6FD8CDF0 (#10081)
int __stdcall D2Common_10081_GetTileCountFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8CE40
void __fastcall DUNGEON_FreeRoom(void* pMemPool, D2RoomStrc* pRoom);
//D2Common.0x6FD8CF10 (#10076)
void __stdcall DUNGEON_RemoveRoomFromAct(D2DrlgActStrc* pAct, D2RoomStrc* pRoom);
//D2Common.0x6FD8D000 (#10077)
void __stdcall D2Common_10077(D2RoomStrc* pRoom1, D2RoomStrc* pRoom2);
//D2Common.0x6FD8D030 (#10078)
void __stdcall D2Common_10078(D2DrlgActStrc* pAct);
//D2Common.0x6FD8D040 (#10044)
int __stdcall DUNGEON_CheckLOSDraw(D2RoomStrc* pRoom);
//D2Common.0x6FD8D060
D2DrlgEnvironmentStrc* __fastcall DUNGEON_GetEnvironmentFromAct(D2DrlgActStrc* pAct);
//D2Common.0x6FD8D090 (#10088)
D2DrlgStrc* __stdcall DUNGEON_GetDrlgFromAct(D2DrlgActStrc* pAct);
//D2Common.0x6FD912D0 (#10089)
int __stdcall DUNGEON_GetInitSeedFromAct(D2DrlgActStrc* pAct);
//D2Common.0x6FD8D0C0 (#10007)
D2RoomExStrc* __fastcall DUNGEON_GetRoomExFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8D0D0 (#10086)
BOOL __stdcall DUNGEON_IsTownLevelId(int nLevelId);
//D2Common.0x6FD8D0E0 (#10082)
BOOL __stdcall DUNGEON_IsRoomInTown(D2RoomStrc* pRoom);
//D2Common.0x6FD8D100 (#10083)
int __stdcall D2COMMON_10083_Return0(D2RoomStrc* pRoom);
//D2Common.0x6FD8D130 (#10084)
int __stdcall D2Common_10084(D2RoomStrc* pRoom);
//D2Common.0x6FD8D140 (#10085)
int __stdcall DUNGEON_GetTownLevelIdFromActNo(BYTE nAct);
//D2Common.0x6FD8D180 (#10087)
int __stdcall D2Common_10087(D2RoomStrc* pRoom);
//D2Common.0x6FD8D1C0 (#10090)
int __stdcall DUNGEON_GetNumberOfPopulatedRoomsInLevel(D2DrlgActStrc* pAct, int nLevelId);
//D2Common.0x6FD8D1E0 (#10025)
int* __stdcall DUNGEON_GetWarpCoordinatesFromRoom(D2RoomStrc* pRoom);
//D2Common.0x6FD8D220 (#10091)
void __stdcall DUNGEON_UpdateWarpRoomSelect(D2RoomStrc* pRoom, int nLevelId);
//D2Common.0x6FD8D260 (#10092)
void __stdcall DUNGEON_UpdateWarpRoomDeselect(D2RoomStrc* pRoom, int nLevelId);
//D2Common.0x6FD8D2A0 (#10093)
void __stdcall DUNGEON_UpdatePops(D2RoomStrc* pRoom, int nX, int nY, BOOL bOtherRoom);
//D2Common.0x6FD8D2E0 (#10094)
void __stdcall DUNGEON_GetTombStoneTileCoords(D2RoomStrc* pRoom, D2CoordStrc** ppTombStoneTiles, int* pnTombStoneTiles);
//D2Common.0x6FD8D300 (#10095)
int __stdcall D2Common_10095(D2RoomStrc* pRoom, int nX, int nY);
//D2Common.0x6FD8D3A0 (#10096)
D2RoomCoordListStrc* __stdcall D2Common_10096(D2RoomStrc* pRoom, int nX, int nY);
//D2Common.0x6FD8D3C0 (#10097)
D2RoomCoordListStrc* __stdcall DUNGEON_GetRoomCoordList(D2RoomStrc* pRoom);
//D2Common.0x6FD8D3D0 (#10098)
void __stdcall DUNGEON_GetPortalLevelArrayFromPortalFlags(void* pMemPool, int nFlags, int** ppLevels, int* pnLevels);
//D2Common.0x6FD8D4B0 (#10099)
int __stdcall DUNGEON_GetPortalFlagFromLevelId(int nPortalLevelId);
//D2Common.0x6FD8D4F0 (#10037)
int __stdcall DUNGEON_GetTownLevelIdFromAct(D2DrlgActStrc* pAct);
//D2Common.0x6FD8D520 (#10047)
int __stdcall DUNGEON_GetHoradricStaffTombLevelId(D2DrlgActStrc* pAct);
//D2Common.0x6FD8D540 (#10102)
void __stdcall DUNGEON_ToggleHasPortalFlag(D2RoomStrc* pRoom, BOOL bReset);
//D2Common.0x6FD8D560 (#10104)
void __stdcall DUNGEON_AnimateTiles(D2RoomStrc* pRoom);
//D2Common.0x6FD8D580 (#10105)
void __stdcall DUNGEON_InitRoomTileAnimation(D2DrlgActStrc* pAct, D2RoomStrc* pRoom1, D2RoomStrc* pRoom2);
//D2Common.0x6FD8D5C0 (#10103)
void __stdcall DUNGEON_SetActCallbackFunc(D2DrlgActStrc* pAct, ACTCALLBACKFN pFunc);
//D2Common.0x6FD8D600 (#10106)
void __stdcall DUNGEON_SaveKilledUnitGUID(D2RoomStrc* pRoom, int nUnitGUID);
//D2Common.0x6FD8D630 (#10111)
void __stdcall DUNGEON_WorldToScreenCoords(int* pX, int* pY);
//D2Common.0x6FD8D660 (#10112)
void __stdcall DUNGEON_FlattenCoords_IsoToCartesian(int* pX, int* pY);
//D2Common.0x6FD8D690 (#10107)
void __stdcall D2Common_10107(int* pX, int* pY);
//D2Common.0x6FD8D6E0 (#10110)
void __stdcall DUNGEON_ExpandTileCoords(int* pX, int* pY);
//D2Common.0x6FD8D710 (#10114)
void __stdcall D2Common_10114(int nX, int nY, int* pX, int* pY);
//D2Common.0x6FD8D790 (#10115)
void __stdcall D2Common_10115(int nX, int nY, int* pX, int* pY);
//D2Common.0x6FD8D7D0 (#10116)
void __stdcall D2Common_10116(int nX, int nY, int* pX, int* pY);
//D2Common.0x6FD8D830 (#10117)
void __stdcall D2Common_10117(int nX, int nY, int* pX, int* pY);
//D2Common.0x6FD8D870 (#10108)
void __stdcall DUNGEON_ScreenToWorldCoords(int* pX, int* pY);
//D2Common.0x6FD8D8A0 (#10109)
void __stdcall D2Common_10109(int* pX, int* pY);
//D2Common.0x6FD8D8C0 (#10113)
void __stdcall DUNGEON_ExpandCoords(int* pX, int* pY);
