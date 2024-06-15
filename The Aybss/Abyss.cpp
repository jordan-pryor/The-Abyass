#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "BaseGame.h"


int main() {
    // Displays the Main Menu(Sorta)
    int choice;

    cout << "Welcome to the game!" << endl;
    cout << "1. Start New Game" << endl;
    cout << "2. Resume Game" << endl;
    cout << "3. Exit";
    cout << "\nEnter Your Selection..";
        cin >> choice;

    switch (choice) {
    case 1:
        runIntroduction(); // Call the introduction function
        break;
    case 2:
        // Resume Game Function TBA
        break;
    default:
        cout << "Thank You, Exiting..." << endl;
        break;
    }

    return 0;
}
