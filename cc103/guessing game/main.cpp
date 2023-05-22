#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

int main() {
    srand(time(NULL)); // seed the random number generator with the current time

    int secretNumber;
    int guess;
    int numGuesses;
    char playAgain;

    do {
        secretNumber = rand() % 100 + 1; // generate a random number between 1 and 100
        numGuesses = 0;

        cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?" << endl;

        do {
            cout << "Enter your guess: ";
            cin >> guess;
            numGuesses++;

            if (guess < secretNumber) {
                cout << "Too low! Try again." << endl;
            } else if (guess > secretNumber) {
                cout << "Too high! Try again." << endl;
            } else {
                cout << "You guessed it! It took you " << numGuesses << " guesses." << endl;
            }
        } while (guess != secretNumber);

        cout << "Do you want to play again? (y/n) ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye." << endl;

    return 0;
}
