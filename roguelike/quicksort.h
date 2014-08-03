#ifndef _QUICK_SORT
#define _QUICK_SORT

class QuickSort {
public:
	QuickSort();
	~QuickSort();
	static void Swap(int& iFirst, int& iSecond);
	static void Sort(int iArray[], int , int );
};

#endif