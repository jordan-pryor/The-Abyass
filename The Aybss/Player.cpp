#include "Player.h"
#include <iostream>

// Constructor for Player class
Player::Player(const string& name, const Stats& stats)
    : name(name), stats(stats) {}

// Method to display player's stats
void Player::displayStats() const {
    cout << "Player: " << name << endl;
    cout << "Health: " << stats.health << endl;
    cout << "Attack: " << stats.attack << endl;
    cout << "Defense: " << stats.defense << endl;
    cout << "XP: " << stats.xp << endl;
    cout << "Inventory:" << endl;
    for (int i = 0; i < stats.invcount; ++i) {
        cout << "  " << i + 1 << ": " << stats.inventory[i] << endl;
    }
}