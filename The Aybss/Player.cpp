// Player.cpp

#include "Player.h"
#include "Console.h"
#include <iostream>

using namespace std;

// Default constructor
Player::Player() : name(""), age(""), stats() {}

// Constructor with name and Stats
Player::Player(const string& name, const Stats& initialStats) : name(name), stats(initialStats) {}

// Constructor with name, age, and inventory
Player::Player(const string& name, const string& age, const vector<string>& inventory)
    : name(name), age(age), inventory(inventory), stats() {}

// Destructor
Player::~Player() {}

// Method to display player's stats
void Player::displayStats() const {
    Console::WriteLine("Name: " + name, ConsoleColor::White);
    Console::WriteLine("Age: " + age, ConsoleColor::White);
    Console::WriteLine("Health: " + to_string(stats.health), ConsoleColor::White);
    Console::WriteLine("Attack: " + to_string(stats.attack), ConsoleColor::White);
    Console::WriteLine("Defense: " + to_string(stats.defense), ConsoleColor::White);
    Console::WriteLine("XP: " + to_string(stats.xp), ConsoleColor::White);
}

// Method to display inventory
void Player::displayInventory() const {
    Console::WriteLine("Inventory:", ConsoleColor::White);
    for (const string& item : inventory) {
        Console::WriteLine("- " + item, ConsoleColor::White);
    }
}

// Method to add item to inventory
void Player::addItem(const string& item) {
    if (inventory.size() < 10) {
        inventory.push_back(item);
        Console::WriteLine("Added item: " + item + " to inventory.", ConsoleColor::Green);
        stats.invcount++;
    }
    else {
        Console::WriteLine("Inventory full. Cannot add item: " + item, ConsoleColor::Red);
    }
}

// Method to take damage
void Player::takeDamage(int damageAmount) {
    stats.health -= damageAmount;
    if (stats.health < 0) {
        stats.health = 0; // Ensure health doesn't go negative
    }
}

// Method to get player stats
const Player::Stats& Player::getStats() const {
    return stats;
}

// Method to use the map and display visited locations
void Player::useMap() const {
    Console::WriteLine("You use the map to view your locations:", ConsoleColor::White);
    for (const string& location : locationsVisited) {
        Console::WriteLine(location, ConsoleColor::White);
    }
}

// Method to add a location to the map
void Player::addLocation(const string& location) {
    locationsVisited.push_back(location);
}

// Getter methods
string Player::getName() const {
    return name;
}

string Player::getAge() const {
    return age;
}

vector<string> Player::getInventory() const {
    return inventory;
}

size_t Player::getInventorySize() const {
    return inventory.size();
}

void Player::setName(const std::string& name) {
    this->name = name;
}

void Player::setAge(const std::string& age) {
    this->age = age;
}

void Player::setHealth(int health) {
    this->stats.health = health;
}

void Player::setStrength(int strength) {
    this->stats.attack = strength;
}

void Player::setAgility(int agility) {
    this->stats.defense = agility;
}

void Player::setIntelligence(int intelligence) {
    this->stats.xp = intelligence;
}

void Player::setJob(const std::string& job) {
    this->job = job;
}

std::string Player::getJob() const {
    return job;
}

// Getter methods for individual stats
int Player::getHealth() const {
    return stats.health;
}

int Player::getStrength() const {
    return stats.attack;
}

int Player::getAgility() const {
    return stats.defense;
}

int Player::getIntelligence() const {
    return stats.xp;
}

// Additional methods to return const references
const std::string& Player::getNameRef() const {
    return name;
}

const std::string& Player::getAgeRef() const {
    return age;
}
