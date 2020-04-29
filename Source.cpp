#include "LettersLib.h"
#include <iostream>
using namespace std;

int main() {
	string str;
	cin >> str;
	str = removeVowelLetters(str);
	cout << str << endl;
	system("pause");
	return 0;
}