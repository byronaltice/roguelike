#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

void ReverseString(char*);
void swap(char*, char*);
int _tmain(int argc, _TCHAR* argv[])
{
	char* strString = "hey sup yall beep bop. & asdf yall.";
	ReverseString(strString);
	cout << strString;
	return 0;
}

void ReverseString(char* strString)
{
	int size = 0;
	int i;
	for (i = 0; strString[i] != '\0'; i++)
	{
		size++;
	}
	if (size == 0) return;
	for (i = 0; i <= size / 2; i++)
	{
		swap(&strString[i], &strString[(size-i)-1]);
	}

}
void swap(char* a, char* b)
{
	char t = a[0];
	a[0] = 1;
	b[0];
	b[0] = t;
}