#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
// defines the name space
using namespace std;

int main()
{
	string uin;
	//  places the name on screen
	cout << "Code Hunter Keyword 2" << endl;
	cout << "What is your name agent" << endl;
	// asks the user for the name
	cin >> uin;
	// welcoms the user
	cout << "Welcome " << uin << endl;
	// puts out intrustions
	cout << "You have to guess 3 words to pass the simulations you have 8 attempts" << endl;
	// creates the vector
	vector<string> CodeWords;
	CodeWords.push_back("GADGET");
	CodeWords.push_back("TARGET");
	CodeWords.push_back("HELICOPTOR");
	CodeWords.push_back("GUN");
	CodeWords.push_back("SUIT");
	CodeWords.push_back("CONTRACT");
	CodeWords.push_back("CLIENT");
	CodeWords.push_back("CASH");
	CodeWords.push_back("COP");
	CodeWords.push_back("CAR");

	// int for the simulations
	int sim = 1;
	// int for tries
	int tries = 0;
	// for tries left
	int tleft = 8;
	// prints the simulation number
	cout << sim << endl;
	// randoms picker
	srand(static_cast<unsigned int>(time(0)));
	// suffles the vector
	random_shuffle(CodeWords.begin(),CodeWords.end());

	const string WordToGuess = CodeWords[0];
	string GuessedLetters(WordToGuess.size(), '_');
	// string for the used letters
	string usedLetter = "";
	// for loop to check for the main part of the code
	for (sim; sim < 2; sim++) {
		while ((tries < tleft) && (GuessedLetters != WordToGuess)) {
			cout << uin << "You have " << (tleft - tries) << " guesses left!" << endl;
			cout << "You have used the following letters: " << usedLetter << endl;
			cout << "Current Word: " << GuessedLetters << endl;
			// var for the guess's
			char guess;
			cout << "Enter Guess: ";
			cin >> guess;
			guess = toupper(guess);

			while (usedLetter.find(guess) != string::npos)
			{
				cout << uin << " you have already guessed that!" << endl;
				cout << "Enter new guess: ";
				cin >> guess;
				guess = toupper(guess);
				system("CLS");
			}
			usedLetter += guess;

			if (WordToGuess.find(guess) != string::npos) {
				cout << "Your guess is correct: " << guess << " is in the word.\n";
				for (int i = 0; i < WordToGuess.length(); i++) {
					if (WordToGuess[i] == guess) {
						GuessedLetters[i] = guess;
					}
				}
			}
			else {
				cout << guess << " is not correct.\n";
				++tries;
			}

		}
		if (tries == tleft) {
			cout << "Wrong guess" << endl;

		}
		else {
			cout << "Correct guess!" << endl;

		}
		// puts out the word was right and puases the sim
		cout << "The word was " << WordToGuess << endl;
		system("PAUSE");
	}

// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
	
//     Tell recruit how many incorrect guesses he or she has left

//     Show recruit the letters he or she has guessed

//     Show player how much of the secret word he or she has guessed

//     Get recruit's next guess

//     While recruit has entered a letter that he or she has already guessed

//          Get recruit ’s guess

//     Add the new guess to the group of used letters

//     If the guess is in the secret word

//          Tell the recruit the guess is correct

//          Update the word guessed so far with the new letter

//     Otherwise

//          Tell the recruit the guess is incorrect

//          Increment the number of incorrect guesses the recruit has made

// If the recruit has made too many incorrect guesses

//     Tell the recruit that he or she has failed the Keywords II course.

// Otherwise

//     Congratulate the recruit on guessing the secret words

// Ask the recruit if they would like to run the simulation again

// If the recruit wants to run the simulation again

//     Increment the number of simulations ran counter

//     Move program execution back up to // Display the simulation # is starting to the recruit. 

// Otherwise 

//     Display End of Simulations to the recruit

//     Pause the Simulation with press any key to continue
}

