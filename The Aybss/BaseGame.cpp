// Developed By Jordan Pryor //
// FCC Public License 2024 //

#include "BaseGame.h"
#include "Console.h"
#include "Input.h"
#include "Player.h"
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
    // Ints
    int menuSelection = 0;

    // Hello Introduction
    Console::Write("Hello!\n", ConsoleColor::White);
    Console::WriteLine("You seem to have fallen into an abyss. Before you continue, I have a few questions to ask you.", ConsoleColor::White);
    // Player's Name
    Console::Write("What is your name?", ConsoleColor::White);
    cin >> PlayerName;
    Console::Clear();
    // Players Age
    Console::Write(PlayerName + ",how old are you?", ConsoleColor::Yellow);
    cin >> PlayerAge;

    // Wait For Player Input to Clear Console
    Input::PressEnter();
    Console::Clear();

    // Put it all Together
    Console::WriteLine("I see, " + PlayerName + ", you've fallen in at the age of " + PlayerAge + ".", ConsoleColor::White);
    Console::WriteLine("Now let's begin your adventure...", ConsoleColor::Red);

    // Wait for user to press enter before clearing the console
    Input::PressEnter();
    Console::Clear();
    // Display InitalStats
    Player::Stats initialStats;
    Player player(PlayerName, initialStats);
    player.displayStats();
    Input::PressEnter();
    Console::Clear();
    // Give Player's First Item
    Console::Write("You've Been Blessed with a Map!\n");
    player.addItem("Map");
    // Display Inventory
    player.displayInventory();
    Input::PressEnter();
    Console::Clear();

    vector<string> AdventureOptions{ "1. Check Inventory", "2. Scream", "3. Begin to Walk Around"};
    do
    {
        Console::Clear();
        Console::WriteLine("\nYou Awake in a Wet, Dark Place; Confused and Scared. What Do you do?", ConsoleColor::White);
        menuSelection = Input::GetMenuSelection(AdventureOptions);
        Console::Clear();

        switch (menuSelection)
        {
            // Inventory
        case 1:
            player.displayInventory(); // Calls Inventory on Screen
            break;
        case 2:
            Console::Write("You Hear a Demonic Laugh Back\n", ConsoleColor::Red);
            break;
        case 3:
            Console::Write("You Start Walking, Feeling the Rocky Wall till you come Across a light in the distance.", ConsoleColor::Yellow);
            bool continueWalking = true;
            while (continueWalking) {
                Console::WriteLine("You Start Walking, Feeling the Rocky Wall till you come Across a light in the distance.", ConsoleColor::Yellow);
                // Prompt for next action or decision
                vector<string> WalkingOptions{ "1. Approach the light", "2. Go back", "3. Stay and observe" };
                int walkingChoice = Input::GetMenuSelection(WalkingOptions);
                Console::Clear();
                switch (walkingChoice) {
                case 1:
                    Console::WriteLine("As you approach the light, you see...");
                    // Further game logic or narrative continuation
                    continueWalking = false; // Exit the loop or set condition to stop
                    break;
                }

                Input::PressEnter();

            } while (menuSelection != 3);  // Corrected while condition
        }
    } break;

    Input::PressEnter();

} while (menuSelection != 3);  // Corrected while condition
}

void BaseGame::Credits() {
    Console::WriteLine("Credits", ConsoleColor::Blue);
    Console::Write("Full Sail University: for the Console, & Input implementation\n", ConsoleColor::Yellow);
    Console::Write("Jordan Pryor: for the remandier of the Code\n", ConsoleColor::Yellow);
    Console::WriteLine("Thank You! I hope You Enjoy my Basic Game.", ConsoleColor::White);

    // Implement the Credits function if necessary
    // Wait for user to press enter before clearing the console
    Input::PressEnter();
    Console::Clear();

}
