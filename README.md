# Tic-Tac-Toe-game
This is a simple implementation of the Tic-Tac-Toe game in C++. Players take turns marking spaces in a 3x3 grid, aiming to get three symbols in a row, column, or diagonal to win the game.

## Features

- Two players take turns marking X and O symbols.
- The game board is displayed after each move.
- Checks for win conditions and announces the winner.
- Handles draws when the board is full.

## Usage

1. Compile the code using a C++ compiler.
2. Run the compiled executable.
3. Enter player names and take turns making moves by specifying row and column coordinates.
4. The game announces the winner or declares a draw when applicable.

## File Structure

- `main.cpp`: Contains the main game loop and user interactions.
- `TicTacToe.h` and `TicTacToe.cpp`: Classes and methods for the TicTacToe game logic.
- `Player.h` and `Player.cpp`: Classes and methods to handle player information.

## How to Run

Compile the code using a C++ compiler such as g++:

```bash
g++ main.cpp TicTacToe.cpp Player.cpp -o TicTacToe
./TicTacToe


