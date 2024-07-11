#ifndef BASEGAME_H
#define BASEGAME_H

#include "Player.h"
#include "QuestionsAndEvents.h" // Include header for the new questions and events class
#include <string>

class BaseGame {
public:
    BaseGame();
    ~BaseGame();

    void runGame();
    void Credits();
    void saveProgress(const Player& player);
    void loadProgress(Player& player);

private:
    void mainMenu();
    void startNewGame();
    void loadGame();
    void returnToMainMenu();

    Player player;
    QuestionsAndEvents questionsAndEvents; // Instance for handling questions and events
};

#endif // BASEGAME_H

// Developed By Jordan Pryor //
// FCC Public License 2024 //