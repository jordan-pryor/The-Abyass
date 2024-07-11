// Developed By Jordan Pryor //
// FCC Public License 2024 //

#include "BaseGame.h"
#include "Console.h"
#include "Input.h"
#include "QuestionsAndEvents.h" // Include the header for the new questions and events class
#include <iostream>
#include <fstream>

using namespace std;

BaseGame::BaseGame() : player(), questionsAndEvents() {
    // Constructor implementation
}

BaseGame::~BaseGame() {
    // Destructor implementation
}

void BaseGame::mainMenu() {
    Console::Clear();
    int menuSelection = 0;

    vector<string> menuOptions{ "1. Start New Game", "2. Load Game", "3. Credits", "4. Exit"};
    do
    {
        Console::Clear();
        Console::WriteLine("\nThe Abyss:Text-Based Adventure!", ConsoleColor::Cyan);
        menuSelection = Input::GetMenuSelection(menuOptions);
        Console::Clear();

        switch (menuSelection) {
        case 1:
            startNewGame();
            break;
        case 2:
            loadGame();
            break;
        case 3:
            Credits();
            break;
        case 4:
            Console::WriteLine("Exiting game. Goodbye!", ConsoleColor::White);
            exit(0);
            break;
        default:
            Console::WriteLine("Invalid selection. Please choose again.", ConsoleColor::Red);
            Input::PressEnter();
            mainMenu();
            break;
        }
        Input::PressEnter();

    } while (menuSelection != 3);  // Corrected while condition
}
void BaseGame::startNewGame() {
    Console::Clear();
    Console::WriteLine("Starting a new game...", ConsoleColor::Green);
    questionsAndEvents.loadQuestions();
    questionsAndEvents.loadEvents();
    questionsAndEvents.Introduction(player);
    questionsAndEvents.QuestionIntroduction(player);
}

void BaseGame::loadGame() {
    ifstream saveFile("savegame.txt");

    if (saveFile.is_open()) {
        string name;
        string age;
        int inventorySize;
        vector<string> inventory;

        getline(saveFile, name);
        getline(saveFile, age);
        saveFile >> inventorySize;
        saveFile.ignore(); // Ignore newline after integer
        inventory.resize(inventorySize);
        for (string& item : inventory) {
            getline(saveFile, item);
        }

        saveFile.close();
        player = Player(name, age, inventory);
        Console::WriteLine("Game loaded successfully!", ConsoleColor::Green);
        questionsAndEvents.loadQuestions();
        questionsAndEvents.loadEvents();
        questionsAndEvents.resumeGame(player);
    }
    else {
        Console::WriteLine("Error: No saved game found.", ConsoleColor::Red);
    }
}

void BaseGame::returnToMainMenu() {
    player = Player(); // Reset player object
    mainMenu();
}

void BaseGame::Credits() {
    Console::WriteLine("Credits", ConsoleColor::Blue);
    Console::Write("Full Sail University: for the Console, & Input implementation\n", ConsoleColor::Yellow);
    Console::Write("Jordan Pryor: for the remainder of the Code\n", ConsoleColor::Yellow);
    Console::WriteLine("Thank You! I hope You Enjoy my Basic Game.", ConsoleColor::White);

    // Wait for user to press enter before clearing the console
    Input::PressEnter();
    Console::Clear();
    mainMenu();
}

void BaseGame::saveProgress(const Player& player) {
    ofstream saveFile("savegame.txt");

    if (saveFile.is_open()) {
        saveFile << player.getName() << endl;
        saveFile << player.getAge() << endl;
        saveFile << player.getInventorySize() << endl;
        for (const string& item : player.getInventory()) {
            saveFile << item << endl;
        }
        saveFile.close();
    }
    else {
        Console::WriteLine("Error: Unable to save game progress.", ConsoleColor::Red);
    }
}

void BaseGame::loadProgress(Player& player) {
    ifstream loadFile("savegame.txt");

    if (loadFile.is_open()) {
        string name;
        string age;
        int inventorySize;
        vector<string> inventory;

        getline(loadFile, name);
        getline(loadFile, age);
        loadFile >> inventorySize;
        loadFile.ignore(); // Ignore newline after integer
        inventory.resize(inventorySize);
        for (string& item : inventory) {
            getline(loadFile, item);
        }

        loadFile.close();
        player = Player(name, age, inventory);
    }
    else {
        Console::WriteLine("Error: Unable to load game progress.", ConsoleColor::Red);
    }
}

void BaseGame::runGame() {
    mainMenu();
}
