#pragma once
#ifndef BASEGAME_H
#define BASEGAME_H
#include "Player.h"

class BaseGame
{
public:
    BaseGame();
    ~BaseGame();
    void runGame();
    void Credits();
    void Question2();
   // void Question3();
    //void Question4();
    //void Question5();
    //void Ending();
    void damagePlayer(int damageAmount);
    void returnToMainMenu();

private:
    Player player;

};
#endif

// Developed By Jordan Pryor //
// FCC Public License 2024 //
