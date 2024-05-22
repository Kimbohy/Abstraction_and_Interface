#include "NFS.hpp"

NFS::NFS()
{
}
NFS::~NFS()
{
}

void NFS::start()
{
    runing = true;
    initPlayer();
    play();
}

// Displays the game menu and handles user input
void NFS::menu()
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
void NFS::play()
{
    while (runing)
    {
        std::cout << "position: " << carPosition << std::endl;
        std::cout << "money: " << money << std::endl;
        int choice;
        std::cout << "===== Game choice =====" << std::endl;
        std::cout << "1. Turn left" << std::endl;
        std::cout << "2. Turn right" << std::endl;
        std::cout << "3. Repair" << std::endl;
        std::cout << "4. pause" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        system("clear");
        addMoney();

        switch (choice)
        {
        case 1:
            turnLeft();
            break;
        case 2:
            turnRight();
            break;
        case 3:
            repairs();
            break;
        case 4:
            pause();
            return;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }
}

// Turns the player's car left
void NFS::turnLeft()
{
    carPosition++;
    distroy();
    if (carPosition > 10)
    {
        std::cout << "===== You Win =====" << std::endl;
    }
    else if (carsQuality <= 0)
    {
        std::cout << "===== Car distroied, you lose =====" << std::endl;
        std::cout << "~~~~~~~~~~~~ GAME OVER ~~~~~~~~~~~~" << std::endl;
    }
}

// Turns the player's car right
void NFS::turnRight()
{
    carPosition++;
    distroy();
    if (carPosition > 10)
    {
        std::cout << "===== You Win =====" << std::endl;
        endGame();
    }
    else if (carsQuality <= 0)
    {
        std::cout << "===== Car distroied, you lose =====" << std::endl;
        endGame();
    }
}

// Decrement carsQuality randomly
void NFS::distroy()
{
    carsQuality -= rand() % 20;
    std::cout << "PV: " << carsQuality << std::endl;
}

// Prints the player's current points
void NFS::printPoint()
{
    point = carsQuality + money;
    std::cout << "Points: " << point << std::endl;
}

// Adds money to the player's balance
void NFS::addMoney()
{
    money += rand() % 2;
}

// Repairs the player's car
void NFS::repairs()
{
    if (carsQuality + 5 <= 100)
    {
        if (money > 3)
        {
            money -= 3;
            carsQuality += 5;
            std::cout << "reparation donne" << std::endl;
            std::cout << "money: " << money << std::endl;
        }
        else
        {
            std::cout << "reparation impossible, not enought money" << std::endl;
        }
    }
    else
    {
        carsQuality = 100;
        std::cout << "reparation donne" << std::endl;
    }
}

// Quits the game
void NFS::quit()
{
    exit(0);
}

// Initializes the player's attributes
void NFS::initPlayer()
{
    carPosition = 0;
    carsQuality = 100;
    money = 0;
    point = 0;
    std::cout << "name: " << std::endl;
    std::cin >> playerName;
    system("clear");
}

// restart the game (call initPlayer)
void NFS::restart()
{
    initPlayer();
    play();
}

void NFS::endGame()
{
    std::cout << "GAME Ended" << std::endl;
    printPoint();
    menu();
}

// Pauses the game
void NFS::pause()
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
