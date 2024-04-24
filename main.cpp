#include <iostream>
#include "TicTacToe.h"
#include "Player.h" // Include Player header

int main() {
    TicTacToe tic;

    Player player1, player2;
    std::string player1name, player2name;
    int rows, cols;
    bool check = false;

    std::cout << "Enter player 1's name: ";
    std::cin >> player1name;
    player1.setName(player1name);
    player1.setSymbol("X");
    std::cout << "Your symbol is: " << player1.getSymbol() << std::endl;

    std::cout << "Enter player 2's name: ";
    std::cin >> player2name;
    player2.setName(player2name);
    player2.setSymbol("O");
    std::cout << "Your symbol is: " << player2.getSymbol() << std::endl;

    tic.setPlayers(player1, player2);

    std::cout << "It's " << tic.getCurrentPlayer().getName() << "'s turn\n";

    while (!check) {
        std::cout << "Enter the row and column (0-2) to make a move: ";
        std::cin >> rows >> cols;
        tic.makeMove(rows, cols);
        tic.print();

        if (tic.isGameOver()) {
            check = true;
            tic.reset();
        } else {
            std::cout << "Enter the row and column (0-2) to make a move: ";
            std::cin >> rows >> cols;
            tic.makeMove(rows, cols);
            tic.print();

            if (tic.isGameOver()) {
                check = true;
                tic.reset();
            }
        }
    }

    return 0;
}
