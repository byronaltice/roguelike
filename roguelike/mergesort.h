#ifndef _merge_sort
#define _merge_sort
#include <deque>
using namespace std;
class MergeSort {
public:
	MergeSort(){};
	~MergeSort(){};
	static void Sort(deque<int> & dInt);
private:
	static deque<int> &Merge(deque<int> & dIntLeft, deque<int> & dIntRight);
};
#endif