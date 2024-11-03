//h
#include<string>
#include<vector>
#include<iostream>

using std::cout; using std::cin; 
using std::string;
using std::vector;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const{return player;}
    string get_winner() {return winner;}
    void display_board() const;

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_next_player();
    bool check_board_full();
    void clear_board();
    void set_winner();

    string player;
    string winner;
    vector<string> pegs{9, " "};
     
};

#endif