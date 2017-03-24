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

	//string  word = randomWord();
	//string jumble = mixUp(word);
	//welcomePlayer(jumble);
	//play(word);

	system("pause");
	return 0;
}



//return a jumbled version of aWord
string mixUp(const string& aWord)
{
	string aJumble = aWord;
	int length = static_cast<int>(aJumble.size());

	for (int i = 0; i < length; ++i)
	{
		int randomIndex = (rand() % length);
		char temp = aJumble[i];
		aJumble[i] = aJumble[randomIndex];
		aJumble[randomIndex] = temp;
	}
	return aJumble;
}




void play(const string& aWord)
{
	string guess;
	do {
		cout << endl << "Your guess: ";
		cin >> guess;

		if ((guess != aWord) && (guess != "quit"))
		{
			cout << "Sorry, that's not it.";
		}
	} while ((guess != aWord) && (guess != "quit"));

	if (guess == aWord)
		cout << endl << "That's it! You guessed it!" << endl;
	cout << endl << "Thanks for playing.\n" << endl;
}


