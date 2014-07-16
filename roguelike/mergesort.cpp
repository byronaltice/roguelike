#include <mergesort.h>

using namespace std;

void
MergeSort::Sort(deque<int> & dInt)
{
	Merge(dInt);
}
deque<int> & 
MergeSort::Merge(deque<int> & dIntLeft, deque<int> & dIntRight ())
{
	if (dIntLeft.size() > 1)
	{
		deque<int> dTempLeft();
		deque<int> dTempRight();
		deque::iterator<int> it = dTempLeft.begin();
		for (int i = 0; dInt[i] != dIntLeft.end(); i++)
		{
			if (i < dIntLeft.size() / 2)
				dTempLeft.pushBack(dInt[i]);
			else
				dTempRight.pushBack(dInt[i]);
		}
		Merge(dTempLeft, dTempRight);
	}
	if (dIntRight.size() > 1)
	{
		deque<int> dTempLeft();
		deque<int> dTempRight();
		for (int i = 0; dInt[i] != dIntRight.end(); i++)
		{
			if (i < dIntRight.size() / 2)
				dTempLeft.pushBack(dInt[i]);
			else
				dTempRight.pushBack(dInt[i]);
		}
		Merge(dTempLeft, dTempRight);
	}
	deque::iterator<int> itLeft = dIntLeft.begin();
	deque::iterator<int> itRight = dIntRight.begin();

	deque<int> dMerged();
	while (itLeft != dIntLeft.end() || itRight != dIntRight.end())
	{
		if (*itLeft < *itRight || itRight == dIntRight.end())
		{
			dMerged.push_back(itLeft);
			itLeft++;
		}
		else if (*itRight < *itLeft || itLeft == dIntLeft.end())
		{
			dMerged.push_back(itRight);
			itRight++;
		}
	}
	return dMerged;

}