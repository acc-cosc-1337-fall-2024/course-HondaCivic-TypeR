//cpp
#include "tic_tac_toe.h"
using std::string;

//PUBLIC 
bool TicTacToe::game_over()
{
    if(check_row_win() == true || check_column_win() == true || check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }

    else if(check_board_full() == true)
    {
        if(check_row_win() != true && check_column_win() != true && check_diagonal_win() != true)
        {
            winner = "C";
            return true;
        }
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position - 1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(int i = 0; i < pegs.size(); i+=3)
    {
        std::cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
    }
}


//PRIVATE
bool TicTacToe::check_column_win()
{
    for(int i = 0; i < 3; i++)
    {
        if(pegs[i] == "X" && pegs[i+3] == "X" && pegs[i+6] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+3] == "O" && pegs[i+6] == "O")
        {
            return true;
        }
    }

    return false;
}

bool TicTacToe::check_row_win()
{
    for(int i = 0; i < pegs.size(); i+=3)
    {
        if(pegs[i] == "X" && pegs[i+1] == "X" && pegs[i+2] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+1] == "O" && pegs[i+2] == "O")
        {
            return true;
        }
    }

    return false;
}

bool TicTacToe::check_diagonal_win()
{
    int i = 0;

    //TOP LEFT TO BOTTOM RIGHT DIAGONAL
    if(pegs[i] == "X" && pegs[i+4] == "X" && pegs[i+8] == "X")
    {
        return true;
    }
    else if(pegs[i] == "O" && pegs[i+4] == "O" && pegs[i+8] == "O")
    {
        return true;
    }

    //TOP RIGHT TO BOTTOM LEFT DIAGONAL
    else if(pegs[i+2] == "X" && pegs[i+4] == "X" && pegs[i+6] == "X")
    {
        return true;
    }
    else if(pegs[i+2] == "O" && pegs[i+4] == "O" && pegs[i+6] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }

}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(int i = 0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }   

    return true;
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}