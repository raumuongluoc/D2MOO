#include "D2Seed.h"

#include <ctime>


//D2Common.0x6FDA5260 (#10916)
void __stdcall SEED_Return()
{
	REMOVE_LATER_WriteToLogFile("SEED_Return: Useless");
}

//D2Common.0x6FDAEA80 (#10920)
int __fastcall SEED_GetRandomValue(int nValue)
{
	return (0x2F490A95 * (time(NULL) + nValue + GetTickCount()) - 0x2E330917) & 0x7FFFFFFF;
}

//D2Common.0x6FDAEAB0 (#10912)
void __fastcall SEED_InitSeed(D2SeedStrc* pSeed)
{
	pSeed->nLowSeed = 1;
	pSeed->nHighSeed = 666;
}

//D2Common.0x6FDAEAC0 (#10913)
void __fastcall SEED_InitLowSeed(D2SeedStrc* pSeed, int nLowSeed)
{
	pSeed->nLowSeed = nLowSeed;
	pSeed->nHighSeed = 666;
}

//D2Common.0x6FDAEAD0 (#10914)
int __fastcall SEED_GetLowSeed(D2SeedStrc* pSeed)
{
	return pSeed->nLowSeed;
}

//D2Common.0x6FDAEAE0 (#10921)
void __fastcall SEED_SetSeeds(D2SeedStrc* pSeed, int nLowSeed, int nHighSeed)
{
	pSeed->nLowSeed = nLowSeed;
	pSeed->nHighSeed = nHighSeed;
}

//D2Common.0x6FDAEAF0 (#10922)
void __fastcall SEED_GetSeeds(D2SeedStrc* pSeed, int* pLowSeed, int* pHighSeed)
{
	*pLowSeed = pSeed->nLowSeed;
	*pHighSeed = pSeed->nHighSeed;
}

//D2Common.0x6FDAEB00 (#10915)
int __fastcall SEED_GetHighSeed(D2SeedStrc* pSeed)
{
	return pSeed->nHighSeed;
}

//D2Common.0x6FD78E30 + Inlined at many places
unsigned long long int __fastcall SEED_RollRandomNumber(D2SeedStrc* pSeed)
{
	unsigned long long int lSeed = pSeed->nHighSeed + 0x6AC690C5i64 * pSeed->nLowSeed;

	pSeed->lSeed = lSeed;

	return lSeed;
}

//D2Common.0x6FD7D3E0
unsigned int __fastcall SEED_RollLimitedRandomNumber(D2SeedStrc* pSeed, int nMax)
{
	if (nMax > 0)
	{
		if ((nMax - 1) & nMax)
		{
			return (unsigned int)SEED_RollRandomNumber(pSeed) % nMax;
		}
		else
		{
			return SEED_RollRandomNumber(pSeed) & (nMax - 1);
		}
	}

	return 0;
}
