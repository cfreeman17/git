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

////return a random word
//string randomWord()
//{
//	const int Num_Words = 5;
//	const string Words[NUM_WORDS] =
//	{
//		"wall",
//		"glasses",
//		"labored",
//		"persistent",
//		"jumble"
//
//	};
//	
//	int choice = (rand() % NUM_WORDS);
//	string word = WORDS[choice];
//
//	return word;
//}
////return a jumbled version of aWord
//string mixUp(const string&aWord)
//{
//	string aJumble = aWord;
//	int length = static_cast<int>(aJumble.size());
//
//	for (int i = 0; i < length; ++1)
//	{
//		int randomIndex = (rand() % length);
//		char temp = aJumble[i];
//		aJumble[i] = aJumble[randomIndex];
//		aJumble[randomIndex] = temp;
//		return aJumble;
//	}
//
//}


//welcome player and explain game
void welcomePlayer(const string& aJumble)
{
	cout << "\t\t\tWelcome to Word Jumble!" << endl << endl;
	cout << "Unscramble the letters to make a word." << endl;
	cout << "Enter 'quit' to quit the game." << endl;
	cout << "The jumble is: " << aJumble;
}