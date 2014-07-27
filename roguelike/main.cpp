#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

bool IsStringHasUniqueCharacters(string);
int _tmain(int argc, _TCHAR* argv[])
{
	string strString = "0000@";
	if (IsStringHasUniqueCharacters(strString)) cout << "Yep";
	else cout << "Nope";
	return 0;
}

bool
IsStringHasUniqueCharacters(string strString)
{
	bool aboolCharCheck[500] = { false };
	for (int i = 0; i < strString.length(); i++)
	{
		if (aboolCharCheck[strString[i]]) return false;
		aboolCharCheck[strString[i]] = true;
	}
	return true;
}