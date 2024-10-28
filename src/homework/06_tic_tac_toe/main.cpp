#include"tic_tac_toe.h"

#include<iostream>
#include<string>

using std::cin; using std::cout;
using std::string;


int main()
{
    TicTacToe game;
    string first_player;
    char entry = 'y';

    do
    {
        cout<<"Please enter either 'X or 'O' for your first player: ";
        cin>>first_player;

        game.start_game(first_player);

        int position;

        while(!game.game_over())
        {
            cout<<"Choose a position on the board: ";
            cin>>position;
            game.mark_board(position);
			game.display_board();
        }

        cout<<"Would you like to play again? \n";
        cin>>entry;

    }while(entry == 'Y' || entry == 'y');
    
    return 0;
}