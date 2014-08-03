// roguelike.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "quicksort.h"
#include "mergesort.h"
#include <iostream>
#include "GameEventManager.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	GameEventManager::GetGameEventManager()->StartGameEvents(); //Start the loop running, call Start() and Update() for now, eventually Update() will only be called once every time an input key is pressed.
	return 0;
}
/*
int iArray2[21] = { 1000, 1, 3, 907, 912, 291, 2, 5, 845, 3, 9, 742, 0, 10, 357, 15, 19, 13, 170, 710, 0 };
deque<int> dInt(iArray2, iArray2 + 20);
int iArray[21] = { 1000, 1, 3, 907, 912, 291, 2, 5, 845, 3, 9, 742, 0, 10, 357, 15, 19, 13, 170, 710, 0 };
//QuickSort::Sort(iArray, 0, 20);
MergeSort::Sort(dInt);
for (int i = 0; i < 21; i++)
	cout << iArray[i] << endl;
for (deque<int>::iterator it = dInt.begin(); it != dInt.end(); it++) // ++ should go at the end right?
cout << *it << endl;
*/