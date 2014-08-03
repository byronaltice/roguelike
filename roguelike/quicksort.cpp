
#include "stdafx.h"
#include "quicksort.h"
#include <time.h>
#include <cstdlib>

QuickSort::QuickSort() { }
QuickSort::~QuickSort() { }

//Receive an array of ints and quicksort it
void
QuickSort::Sort(int iArray[], int iNdxL = 0, int iNdxR = 0)
{
	int iArraySize;
	if ((iNdxR | iNdxL) == 0) iArraySize = sizeof(iArray)/sizeof(iArray[0]);
	else iArraySize = iNdxR - iNdxL + 1;
	
	if (iArraySize <= 1)
		return;
	if(iArraySize == 2 && iArray[iNdxL] < iArray[iNdxR])
		return;
	else if (iArraySize == 2)
		return Swap(iArray[iNdxL], iArray[iNdxR]);
	srand(time(NULL));
	int iPivotIndex = (rand() % iArraySize) + iNdxL;
	for(int i = iNdxL; i <= iNdxR; i++)
	{
		if(i == iPivotIndex) continue;
		if(iArray[i] > iArray[iPivotIndex] && i < iPivotIndex)
		{
			Swap(iArray[i], iArray[iPivotIndex]);
			Swap(iArray[i], iArray[iPivotIndex - 1]);
			iPivotIndex = i;
		}
		else if(iArray[i] < iArray[iPivotIndex] && i > iPivotIndex)
		{
			Swap(iArray[i], iArray[iPivotIndex]);
			if (iPivotIndex + 1 < iArraySize) Swap(iArray[i], iArray[iPivotIndex + 1]);
			iPivotIndex++;
		}
	}
	Sort(iArray, iNdxL, iPivotIndex);
	Sort(iArray, iPivotIndex+1, iNdxR);
	
}
void
QuickSort::Swap(int& iLeft, int& iRight)
{
	int t = iLeft;
	iLeft = iRight;
	iRight = t;
}

