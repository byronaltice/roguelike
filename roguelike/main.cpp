#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

void ReverseString(char*);
void swap(char*, char*);
int _tmain(int argc, _TCHAR* argv[])
{
	char* strString = new char;
	strString[0] = 'h';
	strString[1] = 'e';
	strString[2] = 'e';
	strString[3] = 'y';
	strString[4] = ' ';
	strString[5] = 's';
	strString[6] = 'u';
	strString[7] = 'p';
	strString[8] = ' ';
	strString[9] = 'y';
	strString[10] = 'a';
	strString[11] = 'l';
	strString[12] = 'l';
	strString[13] = '.';
	strString[14] = 'N';
	strString[15] = '\0';
	ReverseString(strString);
	for (int i = 0; strString[i] != '\0'; i++)
		cout << strString[i];
	cout << endl;
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
	for (i = 0; i < size / 2; i++)
	{
		swap(&strString[i], &strString[(size-i)-1]);
	}

}
void swap(char* a, char* b)
{
	char t = a[0];
	a[0] = b[0];
	b[0] = t;
}