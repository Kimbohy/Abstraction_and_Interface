
#ifndef NFS_HPP
#define NFS_HPP

#include <iostream>
#include <string>
#include "../Game.hpp"

class NFS : public Game
{
    private:
        std::string playerName;
        int point;
        int money;
        int carsQuality;
        bool runing;
        int carPosition;

    public:
        NFS();
        ~NFS();
        void menu();       // Displays the game menu and handles user input
        void start();      // Starts the game and call play
        void restart();    // restart the game (call initPlayer)
        void quit();       // Quits the game
        void pause();      // Pauses the game
        void play();       // Displays the game choices and handles user input
        void initPlayer(); // Initializes the player's attributes
        void endGame();    // Ends the game and displays the final score
        void printPoint(); // Prints the player's current points
        void addMoney();   // Adds money to the player's balance
        void repairs();    // Repairs the player's car
        void distroy();    // Decrements carsQuality randomly
        void turnLeft();   // Turns the player's car left
        void turnRight();  // Turns the player's car right
};

#endif