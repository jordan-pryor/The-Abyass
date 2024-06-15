#include <iostream>
#include <string>
#include "BaseGame.h"
#include "Player.h"

using namespace std;

void runIntroduction() {
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