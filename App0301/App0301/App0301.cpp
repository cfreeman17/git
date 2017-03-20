// App0301.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;
string randomWord();
string mixUp(const string& aWord);
void welcomePlayer(const string& aJumble);
void play(const string& aWord);

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string  word = randomWord();
	string jumble = mixUp(word);
	welcomePlayer(jumble);
	play(word);

	system("pause");
	return 0;
}

