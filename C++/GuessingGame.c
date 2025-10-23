#include <iostream>
#include <cstdlib>  // for rand(), srand()
#include <ctime>    // for time()

using namespace std;

void numberGuessingGame() {
    srand(time(0));  // seed random number generator
    int secretNumber = rand() % 100 + 1;  // number between 1–100
    int guess;
    int attempts = 0;
    bool guessed = false;

    cout << "=============================\n";
    cout << " 🎯 NUMBER GUESSING GAME 🎯\n";
    cout << "=============================\n";
    cout << "Guess the secret number (1-100)\n\n";

    while (!guessed) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "\n🔥 Correct! The secret number was " << secretNumber << "!\n";
            cout << "You got it in " << attempts << " attempts.\n\n";
            guessed = true;
        } 
        else if (guess < secretNumber) {
            cout << "Too low! Try higher.\n";
        } 
        else {
            cout << "Too high! Try lower.\n";
        }
    }
}

int main() {
    char choice;
    do {
        numberGuessingGame();
        cout << "Do you want to play again? (Y/N): ";
        cin >> choice;
        cout << endl;
    } while (choice == 'Y' || choice == 'y');

    cout << "Thanks for playing! Goodbye 👋\n";
    return 0;
}
