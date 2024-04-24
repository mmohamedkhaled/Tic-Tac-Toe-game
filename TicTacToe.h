#ifndef TICTACTOE_H
#define TICTACTOE_H

#include "BoardGame.h"

class TicTacToe : public BoardGame {
public:
    TicTacToe();

    bool isGameOver() override;
};

#endif // TICTACTOE_H
