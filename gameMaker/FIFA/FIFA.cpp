#include "FIFA.hpp"

FIFA26::FIFA26()
{
}

FIFA26::~FIFA26()
{
}

// Displays the game menu and handles user input
void FIFA26::menu()
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
void FIFA26::play()
{
    printGoal();
    while (runing)
    {
        int choice;
        std::cout << "===== Game choice =====" << std::endl;
        std::cout << "1. Shoot" << std::endl;
        std::cout << "2. Pass" << std::endl;
        std::cout << "3. Dribble" << std::endl;
        std::cout << "4. pause" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        system("clear");

        switch (choice)
        {
        case 1:
            shoot(rand() % 2);
            break;
        case 2:
            pass(rand() % 2);
            break;
        case 3:
            levelUp();
            break;
        case 4:
            pause();
            return;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
        lucky();
    }
}

void FIFA26::levelUp()
{
    point += 10;
    std::cout << "You have leveled up! Your point is now: " << point << std::endl;
    printGoal();
}

void FIFA26::shoot(bool goal)
{
    if (goal)
    {
        point += 10;
        this->goal += 1;
        std::cout << "You scored a goal! Your point is now: " << point << std::endl;
        printGoal();
    }
    else
    {
        point += 5;
        std::cout << "You passed the ball! Your point is now: " << point << std::endl;
        printGoal();
    }
}

// Starts the game and call play
void FIFA26::start()
{
    runing = true;
    initPlayer();
    play();
}

// restart the game (call initPlayer)
void FIFA26::restart()
{
    runing = true;
    initPlayer();
    play();
}

// Quits the game
void FIFA26::quit()
{
    runing = false;
    exit(0);
}

// Pauses the game
void FIFA26::pause()
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
void FIFA26::initPlayer()
{
    point = 0;
    std::cout << "name: " << std::endl;
    std::cin >> playerName;
    system("clear");
}

void FIFA26::endGame()
{
    std::cout << "GAME Ended" << std::endl;
    printPoint();
    printGoal();
    if (goal < enemyGoal)
    {
        std::cout << "===== You lose =====" << std::endl;
    }
    else if (goal > enemyGoal)
    {
        std::cout << "===== You win =====" << std::endl;
    }
    else
    {
        std::cout << "===== Tie =====" << std::endl;
    }

    menu();
}

void FIFA26::printPoint()
{
    std::cout << "Your point is: " << point << std::endl;
    std::cout << "Team goal: " << goal << std::endl;
}

void FIFA26::pass(bool success)
{
    if (success)
    {
        point += 5;
        std::cout << "You passed the ball! Your point is now: " << point << std::endl;
        printGoal();
    }
    else
    {
        point -= 5;
        std::cout << "You lost the ball! Your point is now: " << point << std::endl;
        printGoal();
    }
}

void FIFA26::lucky()
{
    int choice;
    choice = rand() % 5;
    if (choice == 0)
    {
        play();
    }
    else if (choice == 1)
    {
        increaseGoal();
    }
    else if (choice == 2 || choice == 4)
    {
        increaseEnemyGoal();
    }
    else if (choice == 3)
    {
        endGame();
    }
}

void FIFA26::increaseGoal()
{
    goal++;
    std::cout << "Your team scored a goal!" << std::endl;
    std::cout << "Your team goal: " << goal << std::endl;
}

void FIFA26::increaseEnemyGoal()
{
    enemyGoal++;
    std::cout << "The enemy team scored a goal!" << std::endl;
    std::cout << "Enemy team goal: " << enemyGoal << std::endl;
}

void FIFA26::printGoal()
{
    std::cout << this->goal << " : " << enemyGoal << std::endl;
}