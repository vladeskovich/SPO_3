#include "LettersLib.h"

extern "C" string removeVowelLetters(string str)
{
	string vowelString = "�Ũ����������������AEIOUYaeiouy";

	for (int i = 0; i < str.size(); i++)
		if (vowelString.find(str[i]) != string::npos)
		{
			str.erase(i, 1);
			i--;
		}
	return str;
}