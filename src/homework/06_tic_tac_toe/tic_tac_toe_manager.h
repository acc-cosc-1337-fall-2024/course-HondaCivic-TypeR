//h
#include "tic_tac_toe.h"
#include<memory>

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
void display() const;

public:
    void save_game(std::unique_ptr<TicTacToe> &game);
    void get_winner_total(int& o, int& x, int& t){o = o_win; x = x_win; t = ties;}

private:
    std::vector<std::unique_ptr<TicTacToe>> games;
    int x_win = 0;
    int o_win = 0;
    int ties = 0;

    void update_winner_count(std::string winner);
};

#endif