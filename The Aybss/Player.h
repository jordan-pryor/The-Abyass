// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;
// Structure for Player Stats
struct Stats {
    string name; // Player's Name
    int health; // Hit-Points
    int attack; // Damage Output
    int defense; // Defense
    int xp; // Experince for Levels
    string inventory[10]; // Inventory
    int invcount;
};

class Player {
public:
    Player(const string& name, const Stats& stats);

    void displayStats() const;

private:
    string name;
    Stats stats;
};

#endif // PLAYER_H