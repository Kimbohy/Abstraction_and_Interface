#Interface and Abstraction Exercise in C++

This exercise demonstrates the use of interfaces and abstraction in C++. The main program is a simple game menu that allows the user to choose between different games or quit the program.

##Files

- main.cpp: This is the main driver program. It presents a menu to the user and instantiates the chosen game.
- Chifoumi.cpp: This file contains the implementation of the Chifoumi game.
- FIFA.cpp: This file contains the implementation of the FIFA26 game.
- NFS.cpp: This file contains the implementation of the NFS game.

##Classes

- Game: This is an abstract base class that represents a generic game. It has a pure virtual function start() that must be implemented by any derived classes.

- Chifoumi, NFS, FIFA26: These are derived classes that represent specific games. Each of these classes must implement the start() function.

##How to Run

1. Compile the program with a C++ compiler (like g++):
   ```bash
   g++ chifoumi/Chifoumi.cpp FIFA/FIFA.cpp NFS/NFS.cpp Game.cpp main.cpp -o game
   ```
##Program Flow

1. The program clears the terminal and displays a menu of games to the user.
2. The user enters a number to select a game.
3. The program instantiates the chosen game and starts it.
4. If the user chooses to quit, the program ends. Otherwise, it goes back to step 1.

##Note

This exercise is a good demonstration of polymorphism, one of the key concepts in object-oriented programming. By defining a common interface (the Game class), we can treat different types of games in a uniform way in the main program.