// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;
// Structure for Player Stats
class Player {
public:
    struct Stats {
        string Name;
        int health;      // Hit-Points
        int attack;      // Damage Output
        int defense;     // Defense
        int xp;          // Experience for Levels
        string inventory[10]; // Inventory
        int invcount = 0;
        // Default constructor to initialize all members
        Stats()
            : Name(""), health(100), attack(5), defense(10), xp(0), invcount(0) {
            // Initialize inventory array elements if needed
            for (int i = 0; i < 10; ++i) {
                inventory[i] = "";
            }
        }
    };
    Player();
    Player(const string& name, const Stats& stats);
    void displayStats() const;
    void displayInventory() const;
    void addItem(const string& item);
    void takeDamage(int damage);
    const Stats& getStats() const;
private:
    string name;
    Stats stats;
};

#endif // PLAYER_H