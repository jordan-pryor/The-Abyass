// Developed By Jordan Pryor //
// FCC Public License 2024 //

#include "BaseGame.h"
#include <iostream>
#include <string>

using namespace std;

BaseGame::BaseGame() {
    // Constructor implementation (if any)
}

BaseGame::~BaseGame() {
    // Destructor implementation (if any)
}

void BaseGame::runGame() {
    // Strings
    string PlayerName;
    string PlayerAge;

    // Hello Introduction
    cout << "Hello!\n";
    cout << "You seem to have fallen into an abyss. Before you continue, I have a few questions to ask you." << endl;
    // Player's Name
    cout << "What is your name?" << endl;
    cin >> PlayerName;
    // Players Age
    cout << PlayerName << ", how old are you?" << endl;
    cin >> PlayerAge;
    // Put it all Together
    cout << "I see, " << PlayerName << ", you've fallen in at the age of " << PlayerAge << "." << endl;
    cout << "Now let's begin your adventure..." << endl;
}

void BaseGame::Credits() {
    // Implement the Credits function if necessary
}
