#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <thread>
#include <chrono>
#include <Windows.h>
#include "Player.h"
#include "BaseGame.h"
#include "Console.h"
#include "Input.h"

void displaySplashScreen() {
    Console::ResizeWindow(150, 30);
    Console::Clear();

    // Colors for the rainbow effect
    ConsoleColor rainbowColors[] = {
        ConsoleColor::Red,
        ConsoleColor::Yellow,
        ConsoleColor::Green,
        ConsoleColor::Cyan,
        ConsoleColor::Blue,
        ConsoleColor::Magenta,
        ConsoleColor::White
    };
    const int numColors = sizeof(rainbowColors) / sizeof(rainbowColors[0]);

    const std::string textLines[] = {
        "**************************",
        "* Fifth Circle Developments *",
        "**************************"
    };

    // Calculate the number of iterations to last 2.5 seconds
    const int durationMs = 2500; // 2.5 seconds
    const int delayMs = 100;     // 100 milliseconds delay
    const int iterations = durationMs / delayMs;

    // Display text with rainbow effect
    for (int i = 0; i < iterations; ++i) {
        Console::Clear();

        // Cycle through colors and display text
        for (size_t j = 0; j < sizeof(textLines) / sizeof(textLines[0]); ++j) {
            Console::SetForegroundColor(rainbowColors[(i + j) % numColors]);
            Console::WriteCentered(textLines[j], rainbowColors[(i + j) % numColors]);
        }

        // Delay to create the flashing effect
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs));
    }

    // Ensure the text is displayed in the final color
    Console::SetForegroundColor(ConsoleColor::White);
    Console::Clear();
    for (const auto& line : textLines) {
        Console::WriteCentered(line, ConsoleColor::White);
    }
    Console::Clear();
}

int main() {
    displaySplashScreen(); // Show splash screen before the main menu

    BaseGame game; // Create the BaseGame instance
    game.runGame(); // Run the main menu and game logic

    return 0;
}
