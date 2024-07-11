// Player.h

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "Console.h"

using namespace std;

class Player {
public:
    struct Stats {
        string Name;
        int health;      // Hit-Points
        int attack;      // Strength
        int defense;     // Agility
        int xp;          // Intelligence
        vector<string> inventory; // Inventory
        int invcount = 0;

        Stats() : health(100), attack(0), defense(0), xp(0) {}
    };

    Player();
    Player(const string& name, const Stats& stats);
    Player(const string& name, const string& age, const vector<string>& inventory);
    ~Player();

    void displayStats() const;
    void displayInventory() const;
    void addItem(const string& item);
    void takeDamage(int damage);
    const Stats& getStats() const;
    void useMap() const;
    void addLocation(const string& location);
    string getName() const;
    string getAge() const;
    vector<string> getInventory() const;
    size_t getInventorySize() const;

    void setName(const std::string& name);
    void setAge(const std::string& age);
    void setHealth(int health);
    void setStrength(int strength);
    void setAgility(int agility);
    void setIntelligence(int intelligence);
    void setJob(const std::string& job);

    std::string getJob() const; // Declaration for getJob

    // Getter methods for individual stats
    int getHealth() const;
    int getStrength() const;
    int getAgility() const;
    int getIntelligence() const;

    const std::string& getNameRef() const;
    const std::string& getAgeRef() const;

private:
    string name;
    string age;
    Stats stats;
    vector<string> inventory;
    vector<string> locationsVisited;
    std::string job;
};

#endif // PLAYER_H
