#pragma once

#include "CommonDefinitions.h"

//D2Common.0x6FD782A0
D2DrlgVertexStrc* __fastcall DRLGVER_AllocVertex(void* pMemPool, BYTE nDirection);
//D2Common.0x6FD782D0
void __fastcall DRLGVER_CreateVertices(void* pMemPool, D2DrlgVertexStrc** ppVertices, D2DrlgCoordStrc* pDrlgCoord, BYTE nDirection, D2DrlgOrthStrc* pDrlgRoomData);
//D2Common.0x6FD786C0
void __fastcall DRLGVER_FreeVertices(void* pMemPool, D2DrlgVertexStrc** ppVertices);
//D2Common.0x6FD78730
void __fastcall DRLGVER_GetCoordDiff(D2DrlgVertexStrc* pDrlgVertex, int* pDiffX, int* pDiffY);
