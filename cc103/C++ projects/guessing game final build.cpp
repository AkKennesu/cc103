#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{   
    char again;//variable for the loop

    //loops the whole program if user still want to play
    do{
    srand(time(0));//random number generator

    int randomNum= rand() %100 + 1;//generates random number between 1 to 100
    int guess;
    int guessnum= 0;
    bool correctGuess = false;

cout<< "*****************************\n";
cout<< "Welcome to Guess number game!";
cout<< "\n*****************************\n";

//loops the main program for guessing game
do{
    
    cout<< "Pick a number between 1 to 100: ";
    cin>>guess;
    guessnum++;//total of guess counter

            if (guess < 1 || guess > 100) {
                cout<< "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
                cout<< "Invalid input. Please choose numbers that are between 1 to 100 only." << endl;
                cout<< "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
                guessnum--;
            } else if (guess < randomNum) {
                cout<< "Too LOW try again." << endl;
            } else if (guess > randomNum) {
                cout<< "Too HIGH try again." << endl;
            } else {
                cout<< "===============================================================================================\n";
                cout<< "Wow you guess the number correctly Congratulations :D !!, Here are the total number of guesses: "<< guessnum << endl;
                cout<< "===============================================================================================\n\n";
            }
}while (guess != randomNum);

        //Ask the user if they want to play again
        cout<< "----------------------------------------------------------------------------------\n";
        cout<< "Would you like to play the guessing game again? press (y) if yes and (n) to exit: ";
        cin>> again;
        cout<< "----------------------------------------------------------------------------------\n\n";
    }while (again == 'y' || again == 'Y');
        cout<< "Thank you for playing the guessing game I hope you enjoy the game :D";

return 0;
}