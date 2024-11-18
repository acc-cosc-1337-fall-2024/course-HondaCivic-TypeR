//cpp
#include "tic_tac_toe_manager.h"
#include <utility>

using std::move;

void TicTacToeManager::display() const
{
    for(const auto& game : games)
    {
        game->display_board();
    }
}

//PUBLIC
void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> &game)
{
    update_winner_count(game->get_winner());
    games.push_back(move(game));
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