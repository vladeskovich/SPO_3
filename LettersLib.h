#pragma once

#ifdef LETTERSLIB_EXPORTS
#define LETTERSLIB __declspec(dllexport)
#else
#define LETTERSLIB __declspec(dllimport)
#endif

#include <String>

using namespace std;

extern "C" LETTERSLIB string removeVowelLetters(string str);
