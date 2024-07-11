
// QuestionsAndEvents.h

#ifndef QUESTIONSANDEVENTS_H
#define QUESTIONSANDEVENTS_H

#pragma once

#include "Player.h"
#include <vector>
#include <string>


class QuestionsAndEvents {
public:
    void loadQuestions();
    void loadEvents();
    void Introduction();
    static void QuestionIntroduction(Player& player);
    void Question1(Player& player);
    void resumeGame(Player& player);

    static void HauntedFortressQuestions(Player& player);
    static void HauntedFortressFollowUpQuestions(Player& player); // Follow-up questions for Haunted Fortress
    static void AncientRuinsQuestions(Player& player);
    static void AncientRuinsFollowUpQuestions(Player& player); // Follow-up questions for Ancient Ruins
    static void CavernExitQuestions(Player& player);
    static void CavernExitFollowUpQuestions(Player& player); // Follow-up questions for Cavern Exit
    static void DragonsLairQuestions(Player& player);
    static void DragonsLairFollowUpQuestions(Player& player); // Follow-up questions for Dragon's Lair
    static void CampInTheAbyssQuestions(Player& player);
    static void CampInTheAbyssFollowUpQuestions(Player& player); // Follow-up questions for Camp in The Abyss


    void Introduction(Player& player);
    void GenerateStartingStats(Player& player);

private:
    void PuzzleEncounter();
    void EventOne();
};

#endif // QUESTIONSANDEVENTS_H
