#ifndef CHIFOUMI_HPP
#define CHIFOUMI_HPP

#include <iostream>
#include <string>
#include "../Game.hpp"

class Chifoumi:public Game
{
    private:
        std::string playerName;
        int point;
        bool runing;
        std::string playerChoice;
    public:
        Chifoumi();
        ~Chifoumi();
        void menu();       // Displays the game menu and handles user input
        void start();      // Starts the game and call play
        void restart();    // restart the game (call initPlayer)
        void quit();       // Quits the game
        void pause();      // Pauses the game
        void play();       // Displays the game choices and handles user input
        void initPlayer(); // Initializes the player's attributes
        void endGame();    // Ends the game and displays the final score
        void printPoint(); // Prints the player's current points
        void rock();       // Handles the player's choice of rock
        void paper();      // Handles the player's choice of paper
        void scissors();   // Handles the player's choice of scissors

};

#endif