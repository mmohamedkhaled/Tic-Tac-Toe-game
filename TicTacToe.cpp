#include "TicTacToe.h"

TicTacToe::TicTacToe() : BoardGame(3, 3) {}

bool TicTacToe::isGameOver() {
    for (int i = 0; i < 3; i++) {
        if (game[i][0] != " ") {
            if (game[i][0] == game[i][1] && game[i][0] == game[i][2]) {
                if (game[i][0] == "X") {
                    std::cout << player1.getName() << " won\n";
                    return true;
                } else if (game[i][0] == "O") {
                    std::cout << player2.getName() << " won\n";
                    return true;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        if (game[0][i] != " ") {
            if (game[0][i] == game[1][i] && game[0][i] == game[2][i]) {
                if (game[0][i] == "X") {
                    std::cout << player1.getName() << " won\n";
                    return true;
                } else if (game[0][i] == "O") {
                    std::cout << player2.getName() << " won\n";
                    return true;
                }
            }
        }
    }

    if (game[0][0] != " " && game[0][0] == game[1][1] && game[0][0] == game[2][2]) {
        if (game[0][0] == "X") {
            std::cout << player1.getName() << " won\n";
            return true;
        } else if (game[0][0] == "O") {
            std::cout << player2.getName() << " won\n";
            return true;
        }
    } else if (game[0][2] != " " && game[0][2] == game[1][1] && game[0][2] == game[2][0]) {
        if (game[0][2] == "X") {
            std::cout << player1.getName() << " won\n";
            return true;
        } else if (game[0][2] == "O") {
            std::cout << player2.getName() << " won\n";
            return true;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (game[i][j] == " ") {
                return false; // Game not over yet
            }
        }
    }

    std::cout << "It's a draw!\n";
    return true;
}
