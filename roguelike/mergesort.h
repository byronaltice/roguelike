#ifndef _merge_sort
#define _merge_sort

class MergeSort {
public:
	MergeSort(){};
	~MergeSort(){};
	void Sort(deque<int> & dInt);
private:
	deque<int> &Merge(deque<int> & dIntLeft, deque<int> & dIntRight);
};
#endif