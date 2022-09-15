// GuessNumberGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main(){   
	//This will give us a randdom number between 0 9999
	//v1 = rand() % 100;         // v1 in the range 0 to 99
	//v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
	//v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014 

	int numberToGuess = rand() % 1000;
	int guessCount = 0;
	string userGuess;
	bool continuePlaying = true;
	cout << numberToGuess;
	while (continuePlaying)	{
		guessCount++;
		cout << "Guess a number between 0 and 999" << endl;
		cin >> userGuess;
		int userNumber = stoi(userGuess);
		if (userNumber == numberToGuess) {
			cout << "You guessed correctly.Congratulations, you won the game" << endl;
			cout << "It took you " << guessCount << " many guesses to guess the number" << endl;
			cout << "Do you want to play again (y/n)?" << endl;
			string playAgain;
			cin >> playAgain;
			if (playAgain == "y") {
				numberToGuess = rand() % 1000;
				guessCount = 0;
			}
			else if (playAgain == "n") {
				cout << "Thanks you for playing" << endl;
				continuePlaying = false;
			}
		}
		else if (userNumber > numberToGuess) {
			cout << "My number is lower, please try again" << endl;
		}
		else if (userNumber < numberToGuess) {
			cout << "My number is higher, please try again" << endl;
		}
	}
}

