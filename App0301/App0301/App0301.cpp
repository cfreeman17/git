// App0301.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	cout << "Hello World" << endl;
	system("pause");
	return 0;
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

