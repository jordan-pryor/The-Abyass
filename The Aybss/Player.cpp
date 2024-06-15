#include "Player.h"
#include "Console.h"
#include <iostream>


Player::Player() {
    // Initialize with default values or leave it empty, depending on your needs
}

// Constructor for Player class
Player::Player(const string& name, const Stats& stats)
    : name(name), stats(stats) {}

// Method to display player's stats
void Player::displayStats() const {
    Console::WriteLine("\nPlayer: " + name, ConsoleColor::White);
    Console::WriteLine("Health: " + to_string(stats.health), ConsoleColor::White);
    Console::WriteLine("Attack: " + to_string(stats.attack), ConsoleColor::White);
    Console::WriteLine("Defense: " + to_string(stats.defense), ConsoleColor::White);
    Console::WriteLine("XP: " + to_string(stats.xp), ConsoleColor::White);
    Console::WriteLine("Items:", ConsoleColor::White);
    for (int i = 0; i < stats.invcount; ++i) {
        Console::WriteLine("  " + to_string(i + 1) + ": " + stats.inventory[i], ConsoleColor::White);
    }
}
void Player::displayInventory() const {
    Console::WriteLine("\nPlayer: " + name, ConsoleColor::White);
    Console::WriteLine("XP: " + to_string(stats.xp), ConsoleColor::White);
    Console::WriteLine("Items:", ConsoleColor::White);
    for (int i = 0; i < stats.invcount; ++i) {
        Console::WriteLine("  " + to_string(i + 1) + ": " + stats.inventory[i], ConsoleColor::White);
    }
}
void Player::addItem(const string& item) {
    if (stats.invcount < 10) {
        stats.inventory[stats.invcount] = item;
        ++stats.invcount;
        Console::Write("Added item: " + item + " to inventory.", ConsoleColor::Green);
    }
    else {
        Console::Write("Inventory full. Cannot add item: " + item, ConsoleColor::Red);
    }
}