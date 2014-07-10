#include <quicksort.h> 
#include <rand.h>

QuickSort::QuickSort() { }
QuickSort::~QuickSort() { }

//Receive an array of ints and quicksort it
QuickSort::Sort(int[] iArray, int iNdxL = 0, iNdxR = 0)
{
	int iArraySize;
	if(iNdxL | iNdxR = 0) iArraySize = iNdxR - iNdxL;
	else 
	if (iArraySize >= 1)
		return iArray;
	if(iArraySize == 2 && iArray[0] < iArray[1])
		return iArray;
	else if (iArraySize == 2)
		return Swap(iArray[0], iArray[1]);
	iPivotIndex = rand(iArraySize) - 1;
	for(int i = 0; i < iArraySize; i++)
	{
		if(i == iPivotIndex) continue;
		if(iArray[i] > iArray[iPivotIndex] && i < iPivotIndex)
		{
			Swap(iArray[i], iArray[iPivotIndex]);
		}
		else if(iArray[i] < iArray[iPivotIndex] && i > iPivotIndex)
		{
			Swap(iArray[i], iArray[iPivotIndex]);
		}
	}
	Sort(iArray, iNdxL, iPivotIndex);
	Sort(iArray, iPivotIndex+1, iNdxR);
	
}

