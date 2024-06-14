// Hello World! //
// Developed By Jordan Pryor, 2024 //

#include <iostream>

using namespace std;

int main()
{
    // Strings
    string PlayerName;
    string PlayerAge;

    // Text Prompts(Openning)
    cout << "Hello!\n";
    cout << "You Seem to have Fallen into an Abyss, Before you continue.\nI have a Few questions to ask you." << endl;

    // Asks for Player's Name
    cout << "What is your Name?" << endl;
    cin >> PlayerName;
    
    // Asks for Player's Age
    cout << PlayerName << " How Old are you?" << endl;
    cin >> PlayerAge;

    // Next Section
    cout << "I See, " << PlayerName << " You've Fallen in At the Age Of " << PlayerAge << endl;
    cout << "Now Let's Began your Adventure..." << endl;
    
}

