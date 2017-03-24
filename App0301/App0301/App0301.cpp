// App0301.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Hello World" << endl;
	system("pause");
	return 0;
}

//return a random word
string randomWord()
{
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS] =
	{
		"wall",
		"glasses",
		"labored",
		"persistent",
		"jumble"

	};
	
	int choice = (rand() % NUM_WORDS);
	string word = WORDS[choice];

	return word;
}


//welcome player and explain game
void welcomePlayer(const string& aJumble)
{
	cout << "\t\t\tWelcome to Word Jumble!" << endl << endl;
	cout << "Unscramble the letters to make a word." << endl;
	cout << "Enter 'quit' to quit the game." << endl;
	cout << "The jumble is: " << aJumble;
}