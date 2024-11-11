//cpp
#include "tic_tac_toe_manager.h"


//PUBLIC
void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}


//PRIVATE
void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_win += 1;
    }
    else if(winner == "O")
    {
        o_win += 1;
    }
    else
    {
        ties += 1;
    }
}