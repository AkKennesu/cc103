#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        int secretNumber, guess, numTries = 0;
        srand(time(0)); // Seed the random number generator
        secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100

        cout << "\nWelcome to Guess the Number!" << endl;
        cout << "I'm thinking of a number between 1 and 100. Can you guess it?\n" << endl;

        do {
            cout << "Enter your guess (1-100): ";
            cin >> guess;
            numTries++;

            if (guess < 1 || guess > 100) {
                cout << "Invalid input. Please enter a number between 1 and 100." << endl;
                numTries--;
            } else if (guess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else if (guess > secretNumber) {
                cout << "Too high! Try again." << endl;
            } else {
                cout << "Congratulations! You guessed it in " << numTries << " tries!" << endl;
            }
        } while (guess != secretNumber);

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;
    }

    cout << "\nThanks for playing Guess the Number!" << endl;

    return 0;
}
