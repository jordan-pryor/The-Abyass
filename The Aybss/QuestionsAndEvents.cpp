
// QuestionsAndEvents.cpp

#include "QuestionsAndEvents.h"
#include "Console.h"
#include "Input.h"
#include <iostream>
#include <random>
#include <string>

using namespace std;


void QuestionsAndEvents::loadQuestions() {
    // Load questions logic
}

void QuestionsAndEvents::loadEvents() {
    // Load events logic
}

void QuestionsAndEvents::QuestionIntroduction(Player& player) {
    Console::WriteLine("You have awoken in a strange, ancient cavern known as The Abyss, surrounded by dragon-skin banners and the echoes of distant roars. The cavern splits into two distinct paths: one leading towards the haunted ruins of an ancient fortress and the other deeper into the shadowy depths of the cavern. Where do you choose to go?", ConsoleColor::White);
    Console::WriteLine("1. To the haunted ruins of an ancient fortress", ConsoleColor::White);
    Console::WriteLine("2. Into the shadowy depths of the cavern", ConsoleColor::White);
    Console::WriteLine("3. Search for an exit from the cavern", ConsoleColor::White);
    Console::WriteLine("4. Investigate the source of the dragon roars", ConsoleColor::White);
    Console::WriteLine("5. Set up camp and wait for a local guide", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-5): ", 1, 5);

    switch (choice) {
    case 1:
        player.addLocation("Haunted Fortress");
        HauntedFortressQuestions(player);
        break;
    case 2:
        player.addLocation("Ancient Ruins");
        AncientRuinsQuestions(player);
        break;
    case 3:
        player.addLocation("Cavern Exit");
        CavernExitQuestions(player);
        break;
    case 4:
        player.addLocation("Dragon's Lair");
        DragonsLairQuestions(player);
        break;
    case 5:
        player.addLocation("Camp in The Abyss");
        CampInTheAbyssQuestions(player);
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 5.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::HauntedFortressQuestions(Player& player) {
    Console::WriteLine("In the haunted fortress, you see eerie shadows and hear distant whispers. What do you do next?", ConsoleColor::White);
    Console::WriteLine("1. Investigate the whispers", ConsoleColor::White);
    Console::WriteLine("2. Search for valuable items", ConsoleColor::White);
    Console::WriteLine("3. Try to find a way out", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("You follow the whispers and discover a hidden chamber with ancient artifacts.", ConsoleColor::White);
        HauntedFortressFollowUpQuestions(player);
        break;
    case 2:
        Console::WriteLine("You search through the ruins and find a few old relics and treasures.", ConsoleColor::White);
        HauntedFortressFollowUpQuestions(player);
        break;
    case 3:
        Console::WriteLine("You explore the fortress but find that it’s a labyrinth with no easy way out.", ConsoleColor::White);
        HauntedFortressFollowUpQuestions(player);
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::HauntedFortressFollowUpQuestions(Player& player) {
    Console::WriteLine("You have more choices now. What will you do?", ConsoleColor::White);
    Console::WriteLine("1. Examine the artifacts further", ConsoleColor::White);
    Console::WriteLine("2. Look for a map of the fortress", ConsoleColor::White);
    Console::WriteLine("3. Leave the fortress and return to The Abyss", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("You delve deeper into the artifacts and uncover some valuable clues.", ConsoleColor::White);
        break;
    case 2:
        Console::WriteLine("You find a map and it helps you navigate the labyrinth more effectively.", ConsoleColor::White);
        break;
    case 3:
        Console::WriteLine("You decide to leave the fortress and return to The Abyss.", ConsoleColor::White);
        QuestionIntroduction(player); // Return to the main choices
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::AncientRuinsQuestions(Player& player) {
    Console::WriteLine("In the shadowy depths of the cavern, you find ancient ruins covered in glowing symbols. What do you do?", ConsoleColor::White);
    Console::WriteLine("1. Examine the symbols", ConsoleColor::White);
    Console::WriteLine("2. Look for hidden passages", ConsoleColor::White);
    Console::WriteLine("3. Rest and gather your thoughts", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("You study the symbols and uncover some ancient knowledge about the cavern.", ConsoleColor::White);
        AncientRuinsFollowUpQuestions(player);
        break;
    case 2:
        Console::WriteLine("You discover a hidden passage that seems to lead further into the depths.", ConsoleColor::White);
        AncientRuinsFollowUpQuestions(player);
        break;
    case 3:
        Console::WriteLine("You take a moment to rest and regain your strength.", ConsoleColor::White);
        AncientRuinsFollowUpQuestions(player);
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::AncientRuinsFollowUpQuestions(Player& player) {
    Console::WriteLine("You have more options. What will you do next?", ConsoleColor::White);
    Console::WriteLine("1. Explore the hidden passage", ConsoleColor::White);
    Console::WriteLine("2. Continue studying the symbols", ConsoleColor::White);
    Console::WriteLine("3. Return to The Abyss", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("You explore the hidden passage and find some interesting artifacts.", ConsoleColor::White);
        break;
    case 2:
        Console::WriteLine("You gain more insight into the symbols, which might be useful later.", ConsoleColor::White);
        break;
    case 3:
        Console::WriteLine("You return to The Abyss to reconsider your options.", ConsoleColor::White);
        QuestionIntroduction(player); // Return to the main choices
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::CavernExitQuestions(Player& player) {
    Console::WriteLine("While searching for an exit, you encounter a mysterious figure who offers you help. What do you do?", ConsoleColor::White);
    Console::WriteLine("1. Accept the help", ConsoleColor::White);
    Console::WriteLine("2. Decline and continue searching on your own", ConsoleColor::White);
    Console::WriteLine("3. Question the figure about their intentions", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("You accept the help and the figure guides you to a safer route out.", ConsoleColor::White);
        CavernExitFollowUpQuestions(player);
        break;
    case 2:
        Console::WriteLine("You continue searching but find it increasingly difficult to navigate.", ConsoleColor::White);
        CavernExitFollowUpQuestions(player);
        break;
    case 3:
        Console::WriteLine("You question the figure and they reveal some useful information.", ConsoleColor::White);
        CavernExitFollowUpQuestions(player);
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::CavernExitFollowUpQuestions(Player& player) {
    Console::WriteLine("You have further choices. What will you do now?", ConsoleColor::White);
    Console::WriteLine("1. Follow the figure’s advice", ConsoleColor::White);
    Console::WriteLine("2. Continue on your own path", ConsoleColor::White);
    Console::WriteLine("3. Return to The Abyss", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("Following the advice, you find a way out of the cavern.", ConsoleColor::White);
        break;
    case 2:
        Console::WriteLine("You stick to your own path and manage to find an exit after some difficulty.", ConsoleColor::White);
        break;
    case 3:
        Console::WriteLine("You return to The Abyss to reassess your options.", ConsoleColor::White);
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::DragonsLairQuestions(Player& player) {
    Console::WriteLine("In the Dragon's Lair, you face an intimidating dragon and a pile of treasure. What do you do?", ConsoleColor::White);
    Console::WriteLine("1. Attempt to communicate with the dragon", ConsoleColor::White);
    Console::WriteLine("2. Investigate the treasure pile", ConsoleColor::White);
    Console::WriteLine("3. Try to find a hidden exit", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("You attempt to communicate with the dragon, which might lead to unexpected outcomes.", ConsoleColor::White);
        DragonsLairFollowUpQuestions(player);
        break;
    case 2:
        Console::WriteLine("You investigate the treasure pile and find some rare and valuable items.", ConsoleColor::White);
        DragonsLairFollowUpQuestions(player);
        break;
    case 3:
        Console::WriteLine("You search for a hidden exit but find it challenging to locate one.", ConsoleColor::White);
        DragonsLairFollowUpQuestions(player);
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::DragonsLairFollowUpQuestions(Player& player) {
    Console::WriteLine("You have more options to consider. What will you do next?", ConsoleColor::White);
    Console::WriteLine("1. Negotiate with the dragon", ConsoleColor::White);
    Console::WriteLine("2. Examine the rare items you found", ConsoleColor::White);
    Console::WriteLine("3. Leave the lair and return to The Abyss", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("You negotiate with the dragon and reach a tentative agreement.", ConsoleColor::White);
        break;
    case 2:
        Console::WriteLine("You carefully examine the rare items, gaining some useful insights.", ConsoleColor::White);
        break;
    case 3:
        Console::WriteLine("You leave the lair and head back to The Abyss to consider your next move.", ConsoleColor::White);
        QuestionIntroduction(player); // Return to the main choices
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::CampInTheAbyssQuestions(Player& player) {
    Console::WriteLine("While setting up camp, you hear strange noises and see flickering lights. What will you do?", ConsoleColor::White);
    Console::WriteLine("1. Investigate the noises", ConsoleColor::White);
    Console::WriteLine("2. Examine the flickering lights", ConsoleColor::White);
    Console::WriteLine("3. Stay in camp and wait for a guide", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("You investigate the noises and find some unusual creatures nearby.", ConsoleColor::White);
        CampInTheAbyssFollowUpQuestions(player);
        break;
    case 2:
        Console::WriteLine("You examine the flickering lights and discover some hidden messages.", ConsoleColor::White);
        CampInTheAbyssFollowUpQuestions(player);
        break;
    case 3:
        Console::WriteLine("You stay in camp and wait, but the guide takes longer to arrive than expected.", ConsoleColor::White);
        CampInTheAbyssFollowUpQuestions(player);
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::CampInTheAbyssFollowUpQuestions(Player& player) {
    Console::WriteLine("You have additional options. What will you do now?", ConsoleColor::White);
    Console::WriteLine("1. Engage with the unusual creatures", ConsoleColor::White);
    Console::WriteLine("2. Decipher the hidden messages", ConsoleColor::White);
    Console::WriteLine("3. Return to The Abyss", ConsoleColor::White);

    int choice = Input::GetInteger("Enter your choice (1-3): ", 1, 3);

    switch (choice) {
    case 1:
        Console::WriteLine("You engage with the creatures and learn something valuable.", ConsoleColor::White);
        break;
    case 2:
        Console::WriteLine("You decipher the messages, which provide you with useful information.", ConsoleColor::White);
        break;
    case 3:
        Console::WriteLine("You decide to return to The Abyss to reconsider your options.", ConsoleColor::White);
        QuestionIntroduction(player); // Return to the main choices
        break;
    default:
        Console::WriteLine("Invalid choice. Please select a number between 1 and 3.", ConsoleColor::Red);
        break;
    }
}

void QuestionsAndEvents::Question1(Player& player) {
    // Implementation of Question1
}

void QuestionsAndEvents::resumeGame(Player& player) {
    // Resume game logic based on saved state
}

void QuestionsAndEvents::PuzzleEncounter() {
    // Implementation of PuzzleEncounter
}

void QuestionsAndEvents::EventOne() {
    // Implementation of EventOne
}

void QuestionsAndEvents::Introduction(Player& player) {
    Console::Clear();
    Console::WriteLine("Welcome to The Abyss", ConsoleColor::White);
    Console::WriteLine("You were an ordinary person from the modern age who fell into a mysterious cave...", ConsoleColor::White);
    Console::WriteLine("As you ventured deeper, you found yourself transported back in time to the Middle Ages.", ConsoleColor::White);
    Console::WriteLine("Dragons and kings rule this land, and most of your journey will take place in this cavern, known as The Abyss.", ConsoleColor::White);

    Console::WriteLine("\nLet's start with some basic information about you.", ConsoleColor::White);
    
    Console::Write("Enter your name: ", ConsoleColor::White);
    string name;
    std::getline(std::cin, name);
    player.setName(name);

    Console::Write("Enter your age: ", ConsoleColor::White);
    string age;
    std::getline(std::cin, age);
    player.setAge(age);
    
    // Clear the input buffer
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Display job selection menu
    Console::WriteLine("Select your job from the following list:", ConsoleColor::White);
    std::vector<std::string> jobs = { "Teacher", "Engineer", "Doctor", "Artist", "Soldier" };
    for (size_t i = 0; i < jobs.size(); ++i) {
        Console::WriteLine(std::to_string(i + 1) + ". " + jobs[i], ConsoleColor::White);
    }

    Console::Write("Enter the number corresponding to your job: ", ConsoleColor::White);
    int jobChoice;
    std::cin >> jobChoice;

    // Clear the input buffer to handle any extraneous input
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (jobChoice > 0 && jobChoice <= static_cast<int>(jobs.size())) {
        player.setJob(jobs[jobChoice - 1]);
    }
    else {
        Console::WriteLine("Invalid choice. Setting job to 'Unemployed'.", ConsoleColor::Red);
        player.setJob("Unemployed");
    }

    // Randomly generate starting stats
    player.setHealth(100);
    player.setStrength(rand() % 10 + 1); // Generate random value between 1 and 10
    player.setAgility(rand() % 10 + 1);  // Generate random value between 1 and 10
    player.setIntelligence(rand() % 10 + 1); // Generate random value between 1 and 10

    // Repeat the information back to the player
    Console::WriteLine("\nHere are your details:", ConsoleColor::White);
    Console::WriteLine("Name: " + player.getName(), ConsoleColor::White);
    Console::WriteLine("Age: " + player.getAge(), ConsoleColor::White);  // Fixed the extra parenthesis
    Console::WriteLine("Job: " + player.getJob(), ConsoleColor::White);
    Console::WriteLine("Health: " + std::to_string(player.getHealth()), ConsoleColor::White);
    Console::WriteLine("Strength: " + std::to_string(player.getStrength()), ConsoleColor::White);
    Console::WriteLine("Agility: " + std::to_string(player.getAgility()), ConsoleColor::White);
    Console::WriteLine("Intelligence: " + std::to_string(player.getIntelligence()), ConsoleColor::White);

    Console::WriteLine("\nYour journey begins now...", ConsoleColor::White);
    Console::WriteLine("Press Enter to continue.", ConsoleColor::White);
    Input::PressEnter();
    Console::Clear();
}

void QuestionsAndEvents::GenerateStartingStats(Player& player) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(1, 10);

    int strength = dist(gen);
    int agility = dist(gen);
    int intelligence = dist(gen);

    player.setHealth(100);
    player.setStrength(strength);
    player.setAgility(agility);
    player.setIntelligence(intelligence);

    Console::WriteLine("\nHere are your starting stats:", ConsoleColor::White);
    Console::WriteLine("Health: 100", ConsoleColor::White);
    Console::WriteLine("Strength: " + std::to_string(strength), ConsoleColor::White);
    Console::WriteLine("Agility: " + std::to_string(agility), ConsoleColor::White);
    Console::WriteLine("Intelligence: " + std::to_string(intelligence), ConsoleColor::White);
}
