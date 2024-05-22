#include "./chifoumi/Chifoumi.hpp"
#include "./NFS/NFS.hpp"
#include "./FIFA/FIFA.hpp"
#include "./Game.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    Game *game;
    int choice;
    system("clear");
    while (true)
    {
        std::cout << "===== Game Menu =====" << std::endl;
        std::cout << "1. Chifoumi" << std::endl;
        std::cout << "2. NFS" << std::endl;
        std::cout << "3. FIFA" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        system("clear");
        switch (choice)
        {
        case 1:
            game = new Chifoumi();
            game->start();
            break;
        case 2:
            game = new NFS();
            game->start();
            break;
        case 3:
            game = new FIFA26();
            game->start();
            break;
        case 4:
            return 0;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }
    }
    return 0;
}