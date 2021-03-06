#pragma once

#include "CommonDefinitions.h"

// TODO: Reimport from .cpp

//D2Common.0x6FD41000
void __fastcall D2Common_COLLISION_FirstFn_6FD41000(D2RoomStrc* pRoom, D2DrlgTileDataStrc* pTileData, D2TileLibraryEntryStrc* pTileLibraryEntry);
//D2Common.0x6FD411F0
void __fastcall sub_6FD411F0(D2RoomCollisionGridStrc* pCollisionGrid, D2TileLibraryEntryStrc* pTileLibraryEntry, int nX, int nY);
//D2Common.0x6FD412B0 (#10018)
int __stdcall D2COMMON_10018_Return0();
//D2Common.0x6FD412C0
void __fastcall COLLISION_AllocRoomCollisionGrid(void* pMemPool, D2RoomStrc* pRoom);
//D2Common.0x6FD413E0
void __fastcall sub_6FD413E0(D2RoomCollisionGridStrc* pCollisionGrid, D2RoomCollisionGridStrc* pAdjacentCollisionGrid, D2DrlgTileDataStrc* pTiles, int nTiles, BOOL bRemoveOldFlags);
//D2Common.0x6FD41610
void __fastcall COLLISION_FreeRoomCollisionGrid(void* pMemPool, D2RoomStrc* pRoom);
//D2Common.0x6FD41650 (#10118)
WORD __stdcall COLLISION_CheckMask(D2RoomStrc* pRoom, int nX, int nY, WORD nMask);
//D2Common.0x6FD41720 (#10127)
void __stdcall COLLISION_SetMask(D2RoomStrc* pRoom, int nX, int nY, WORD nMask);
//D2Common.0x6FD417F0 (#10123)
void __stdcall COLLISION_ResetMask(D2RoomStrc* pRoom, int nX, int nY, WORD nMask);
//D2Common.0x6FD418C0 (#10120)
int __stdcall COLLISION_CheckMaskWithSizeXY(D2RoomStrc* pRoom, int nX, int nY, unsigned int nSizeX, unsigned int nSizeY, WORD nMask);
//D2Common.0x6FD41B40
WORD __fastcall COLLISION_CheckCollisionMaskForBoundingBox(D2RoomCollisionGridStrc* pCollisionGrid, D2BoundingBoxStrc* pBoundingBox, WORD nMask);
//D2Common.0x6FD41BE0
int __fastcall COLLISION_AdaptBoundingBoxToGrid(D2RoomStrc* pRoom, D2BoundingBoxStrc* pBoundingBox, D2BoundingBoxStrc* pBoundingBoxes);
//D2Common.0x6FD41CA0
WORD __fastcall COLLISION_CheckCollisionMaskForBoundingBoxRecursively(D2RoomStrc* pRoom, D2BoundingBoxStrc* pBoundingBox, WORD nCollisionType);
//D2Common.0x6FD41DE0 (#10121)
WORD __stdcall COLLISION_CheckMaskWithPattern1(D2RoomStrc* pRoom, int nX, int nY, int nCollisionPattern, WORD nMask);
//D2Common.0x6FD42000
WORD __fastcall COLLISION_CheckCollisionMaskWithAdjacentCells(D2RoomStrc* pRoom, int nX, int nY, WORD nMask);
//D2Common.0x6FD42670
WORD __fastcall COLLISION_CheckCollisionMask(D2RoomStrc* pRoom, int nX, int nY, WORD nMask);
//D2Common.0x6FD42740 (#10122)
int __stdcall COLLISION_CheckMaskWithPattern2(D2RoomStrc* pRoom, int nX, int nY, int nCollisionPattern, WORD nMask);
//D2Common.0x6FD428D0
int __fastcall sub_6FD428D0(D2RoomStrc* pRoom, D2BoundingBoxStrc* pBoundingBox, WORD nMask);
//D2Common.0x6FD42A30
int __fastcall sub_6FD42A30(D2RoomStrc* pRoom, int nX, int nY, WORD nMask);
//D2Common.0x6FD43080 (#10119)
WORD __stdcall COLLISION_CheckMaskWithSize(D2RoomStrc* pRoom, int nX, int nY, int nUnitSize, WORD nMask);
//D2Common.0x6FD432A0 (#10128)
void __stdcall COLLISION_SetMaskWithSize(D2RoomStrc* pRoom, int nX, int nY, int nUnitSize, WORD nMask);
//D2Common.0x6FD434B0
void __fastcall COLLISION_SetCollisionMask(D2RoomStrc* pRoom, int nX, int nY, WORD nMask);
//D2Common.0x6FD43580
void __fastcall COLLISION_SetCollisionMaskForBoundingBoxRecursively(D2RoomStrc* pRoom, D2BoundingBoxStrc* pBoundingBox, WORD nMask);
//D2Common.0x6FD436F0 (#10130)
void __stdcall COLLISION_SetMaskWithPattern(D2RoomStrc* pRoom, int nX, int nY, int nCollisionPattern, WORD nMask);
//D2Common.0x6FD439D0 (#10124)
void __stdcall COLLISION_ResetMaskWithSize(D2RoomStrc* pRoom, int nX, int nY, int nUnitSize, WORD nMask);
//D2Common.0x6FD43C10
void __fastcall COLLISION_ResetCollisionMask(D2RoomStrc* pRoom, int nX, int nY, WORD nMask);
//D2Common.0x6FD43CE0
void __fastcall COLLISION_ResetCollisionMaskForBoundingBoxRecursively(D2RoomStrc* pRoom, D2BoundingBoxStrc* pBoundingBox, WORD nMask);
//D2Common.0x6FD43E60 (#10126)
void __stdcall COLLISION_ResetMaskWithPattern(D2RoomStrc* pRoom, int nX, int nY, int nCollisionPattern, WORD nMask);
//D2Common.0x6FD44140 (#10125)
void __stdcall COLLISION_ResetMaskWithSizeXY(D2RoomStrc* pRoom, int nX, int nY, unsigned int nSizeX, unsigned int nSizeY, WORD nMask);
//D2Common.0x6FD44370
void __fastcall COLLISION_ResetCollisionMaskForBoundingBox(D2RoomCollisionGridStrc* pCollisionGrid, D2BoundingBoxStrc* pBoundingBox, WORD nMask);
//D2Common.0x6FD443E0 (#10129)
void __stdcall COLLISION_SetMaskWithSizeXY(D2RoomStrc* pRoom, int nX, int nY, unsigned int nSizeX, unsigned int nSizeY, WORD nMask);
//D2Common.0x6FD44600
void __fastcall COLLISION_SetCollisionMaskForBoundingBox(D2RoomCollisionGridStrc* pCollisionGrid, D2BoundingBoxStrc* pBoundingBox, WORD nMask);
//D2Common.0x6FD44660 (#10131)
WORD __fastcall D2Common_10131(D2RoomStrc* pRoom, int nX1, int nY1, int nX2, int nY2, int nCollisionPattern, int nCollisionType, WORD nMask);
//D2Common.0x6FD44910
void __fastcall COLLISION_CreateBoundingBox(D2BoundingBoxStrc* pBoundingBox, int nCenterX, int nCenterY, unsigned int nSizeX, unsigned int nSizeY);
//D2Common.0x6FD44950 (#10132)
WORD __fastcall D2Common_10132(D2RoomStrc* pRoom, int nX1, int nY1, int nX2, int nY2, int nCollisionPattern, int nCollisionType, WORD nMask);
//D2Common.0x6FD44BB0
WORD __fastcall sub_6FD44BB0(D2RoomStrc* pRoom1, int nX1, int nY1, D2RoomStrc* pRoom2, int nX2, int nY2, int nCollisionPattern, WORD nMask1, WORD nMask2);
//D2Common.0x6FD44E00
WORD __fastcall sub_6FD44E00(D2RoomStrc* pRoom1, int nX1, int nY1, D2RoomStrc* pRoom2, int nX2, int nY2, int nCollisionPattern, WORD nMask);
//D2Common.0x6FD44FF0
int __fastcall sub_6FD44FF0(D2RoomStrc* pRoom1, int nX1, int nY1, D2RoomStrc* pRoom2, int nX2, int nY2, int nCollisionPattern, int nCollisionType, WORD nMask);
//D2Common.0x6FD451D0 (#10133)
void __fastcall D2Common_10133(D2RoomStrc* pRoom1, int nX1, int nY1, D2RoomStrc* pRoom2, int nX2, int nY2, int nCollisionPattern, int nCollisionType);
//D2Common.0x6FD45210 (#11263)
int __stdcall D2Common_11263(D2RoomStrc* pRoom, D2CoordStrc* a2, D2CoordStrc* a3, WORD nMask);
//D2Common.0x6FD459D0 (#10135)
D2RoomStrc* __stdcall COLLISION_GetFreeCoordinatesWithMaxDistance(D2RoomStrc* pRoom, D2CoordStrc* pSpawnPoint, int nUnitSize, unsigned int nMask, BOOL bAllowNeighboorRooms, int nMaxDistance);
//D2Common.0x6FD45A00
D2RoomStrc* __fastcall COLLISION_GetFreeCoordinatesImpl(D2RoomStrc* pRoom, D2CoordStrc* pSpawnPoint, D2CoordStrc* pFieldCoord, int nUnitSize, unsigned int nMask, unsigned int nFieldMask, BOOL bAllowNeighboorRooms, int nMaxDistance, int nPosIncrementValue);
//D2Common.0x6FD46280 (#10134)
D2RoomStrc* __stdcall COLLISION_GetFreeCoordinates(D2RoomStrc* pRoom, D2CoordStrc* pSpawnPoint, int nUnitSize, unsigned int nMask, BOOL bAllowNeighboorRooms);
//D2Common.0x6FD462B0 (#10137)
D2RoomStrc* __stdcall COLLISION_GetFreeCoordinatesEx(D2RoomStrc* pRoom, D2CoordStrc* pSpawnPoint, int nUnitSize, unsigned int nMask, int nPosIncrementValue);
//D2Common.0x6FD462E0 (#10138)
D2RoomStrc* __stdcall COLLISION_GetFreeCoordinatesWithField(D2RoomStrc* pRoom, D2CoordStrc* pSpawnPoint, D2CoordStrc* pFieldCoord, int nUnitSize, unsigned int nMask, unsigned int nFieldMask, BOOL bAllowNeighboorRooms);
//D2Common.0x6FD46310 (#10136)
void __fastcall D2Common_10136(D2RoomStrc* pRoom, D2CoordStrc* pCoord, int a3, int nCollisionType, D2RoomStrc** ppRoom);
//D2Common.0x6FD46620
D2RoomStrc* __fastcall COLLISION_GetRoomBySubTileCoordinates(D2RoomStrc* pRoom, int nX, int nY);
