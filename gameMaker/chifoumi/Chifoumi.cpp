#include "Chifoumi.hpp"

Chifoumi::Chifoumi()
{
}
Chifoumi::~Chifoumi()
{
}

// Displays the game menu and handles user input
void Chifoumi::menu()
{
    int choice;
    while (true)
    {
        std::cout << "===== Game Menu =====" << std::endl;
        std::cout << "1. Start" << std::endl;
        std::cout << "2. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        system("clear");
        switch (choice)
        {
        case 1:
            start();
            break;
        case 2:
            quit();
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }
}

// Displays the game choices and handles user input
void Chifoumi::play()
{
    while (runing)
    {
        int choice;
        std::cout << "===== Game choice =====" << std::endl;
        std::cout << "1. Rock" << std::endl;
        std::cout << "2. Paper" << std::endl;
        std::cout << "3. Scissors" << std::endl;
        std::cout << "4. pause" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        system("clear");
        switch (choice)
        {
        case 1:
            rock();
            break;
        case 2:
            paper();
            break;
        case 3:
            scissors();
            break;
        case 4:
            pause();
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }
}

// Starts the game and call play
void Chifoumi::start()
{
    runing = true;
    initPlayer();
    play();
}

// restart the game (call initPlayer)
void Chifoumi::restart()
{
    runing = true;
    initPlayer();
    play();
}

// Quits the game
void Chifoumi::quit()
{
    runing = false;
    exit(0);
}

// Pauses the game
void Chifoumi::pause()
{
    int choice;
    while (true)
    {
        std::cout << "===== Pause Menu =====" << std::endl;
        std::cout << "1. Resume" << std::endl;
        std::cout << "2. Restart" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        system("clear");
        switch (choice)
        {
        case 1:
            play(); // Resume the game
            return;
        case 2:
            restart(); // Restart the game
            return;
        case 3:
            quit(); // Quit the game
            return;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }
}

// Initializes the player's attributes
void Chifoumi::initPlayer()
{
    point = 0;
    std::cout << "name: " << std::endl;
    std::cin >> playerName;
    system("clear");
}

// Ends the game and displays the final score
void Chifoumi::endGame()
{
    std::cout << "GAME Ended" << std::endl;
    printPoint();
    menu();
}

// Prints the player's current points
void Chifoumi::printPoint()
{
    std::cout << "Point: " << point << std::endl;
}

// Handles the player's choice of rock
void Chifoumi::rock()
{
    int randomNumber = rand() % 3 + 1;
    if (randomNumber == 1)
    {
        std::cout << "Rock vs Rock" << std::endl;
        std::cout << "Egalité" << std::endl;
    }
    else if (randomNumber == 2)
    {
        std::cout << "Rock vs Paper" << std::endl;
        std::cout << "Perdu" << std::endl;
        point--;
    }
    else
    {
        std::cout << "Rock vs Scissors" << std::endl;
        std::cout << "Gagné" << std::endl;
        point++;
    }
    printPoint();
}

// Handles the player's choice of paper
void Chifoumi::paper()
{
    int randomNumber = rand() % 3 + 1;
    if (randomNumber == 1)
    {
        std::cout << "Paper vs Rock" << std::endl;
        std::cout << "Gagné" << std::endl;
        point++;
    }
    else if (randomNumber == 2)
    {
        std::cout << "Paper vs Paper" << std::endl;
        std::cout << "Egalité" << std::endl;
    }
    else
    {
        std::cout << "Paper vs Scissors" << std::endl;
        std::cout << "Perdu" << std::endl;
        point--;
    }
    printPoint();
}

// Handles the player's choice of scissors
void Chifoumi::scissors()
{
    int randomNumber = rand() % 3 + 1;
    if (randomNumber == 1)
    {
        std::cout << "Scissors vs Rock" << std::endl;
        std::cout << "Perdu" << std::endl;
        point--;
    }
    else if (randomNumber == 2)
    {
        std::cout << "Scissors vs Paper" << std::endl;
        std::cout << "Gagné" << std::endl;
        point++;
    }
    else
    {
        std::cout << "Scissors vs Scissors" << std::endl;
        std::cout << "Egalité" << std::endl;
    }
    printPoint();
}
