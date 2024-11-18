#include "tic_tac_toe_4.h"

bool TicTacToe4::check_column_win()
{
    for(int i = 0; i < 4; i++)
    {
        if(pegs[i] == "X" && pegs[i+4] == "X" && pegs[i+8] == "X" && pegs[i+12] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+4] == "O" && pegs[i+8] == "O" && pegs[i+12] == "O")
        {
            return true;
        }
    }

    return false;
}

bool TicTacToe4::check_row_win()
{
    for(int i = 0; i < pegs.size(); i+=4)
    {
        if(pegs[i] == "X" && pegs[i+1] == "X" && pegs[i+2] == "X" && pegs[i+3] == "X")
        {
            return true;
        }
        else if(pegs[i] == "O" && pegs[i+1] == "O" && pegs[i+2] == "O" && pegs[i+3] == "O")
        {
            return true;
        }
    }

    return false;
}

bool TicTacToe4::check_diagonal_win()
{
    int i = 0;

    //TOP LEFT TO BOTTOM RIGHT DIAGONAL
    if(pegs[i] == "X" && pegs[i+5] == "X" && pegs[i+10] == "X" && pegs[i+15] == "X")
    {
        return true;
    }
    else if(pegs[i] == "O" && pegs[i+5] == "O" && pegs[i+10] == "O" && pegs[i+15] == "O")
    {
        return true;
    }

    //TOP RIGHT TO BOTTOM LEFT DIAGONAL
    else if(pegs[i+3] == "X" && pegs[i+6] == "X" && pegs[i+9] == "X" && pegs[i+12] == "X")
    {
        return true;
    }
    else if(pegs[i+3] == "O" && pegs[i+6] == "O" && pegs[i+9] == "O" && pegs[i+12] == "O")
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/




/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
