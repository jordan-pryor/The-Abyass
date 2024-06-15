#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "BaseGame.h"
#include "Console.h"
#include "Input.h"

using namespace std;

int main() {
    // Re-Write to Utilize the Console I Utilized
    Console::ResizeWindow(150, 30);
    // Displays the Main Menu(Sorta)
    int menuSelection = 0;
    
    vector<string> menuOptions{ "1. Start New Game", "2. Credits", "3. Exit" };
    do
    {
        Console::Clear();
        Console::WriteLine("\nThe Abyss:Text-Based Adventure!", ConsoleColor::Cyan);
        menuSelection = Input::GetMenuSelection(menuOptions);
        Console::Clear();
        BaseGame game;

        
                              
        switch (menuSelection)
        {
            // Start Game
        case 1:
            game.runGame(); // Call the introduction function
            break;

            // Credits
        case 2:
            // TBA
            game.Credits();
            break;

            // Exit Game
        case 3:
            break;

        default:
            cout << "Invalid selection. Please try again." << endl;
            break;
        }

        Input::PressEnter();

    } while (menuSelection != 3);  // Corrected while condition
}