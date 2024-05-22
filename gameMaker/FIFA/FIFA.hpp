#ifndef FIFA_HPP
#define FIFA_HPP

#include <string>
#include <iostream>
#include "../Game.hpp"

class FIFA26 : public Game
{
private:
    /* data */
    std::string playerName;
    int point;
    bool runing;
    int level;
    int goal;
    int enemyGoal;

public:
    FIFA26();
    ~FIFA26();
    void menu();       // Displays the game menu and handles user input
    void start();      // Starts the game and call play
    void restart();    // restart the game (call initPlayer)
    void quit();       // Quits the game
    void pause();      // Pauses the game
    void play();       // Displays the game choices and handles user input
    void initPlayer(); // Initializes the player's attributes
    void endGame();    // Ends the game and displays the final score withe the winner
    void printPoint(); // Prints the player's current points
    void levelUp();
    void shoot(bool goal);
    void pass(bool success);
    void lucky();             // choose the next stape of the game
    void increaseGoal();      // increase the player goal
    void increaseEnemyGoal(); // increase the enemy goal
    void printGoal();
};

#endif