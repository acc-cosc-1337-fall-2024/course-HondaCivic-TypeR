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
        cout<<"Player One, please choose your character. \n";
        cout<<"'X'   'O' \n";
        cin>>first_player;

        while (first_player == "X" || first_player == "O")
        {
            game.start_game(first_player);
            int position;

            while(!game.game_over())
            {
                cout<<"Choose a position on the board: ";
                cin>>position;
                game.mark_board(position);
                game.display_board();
            }

        cout<<"The winner is "<<game.get_winner()<<"\n\n";
        cout<<"Would you like to play again? \n";
        cin>>entry;

        if(entry == 'N' || entry == 'n')
        {
            cout<<"Ending game.\n";
            break;
        }

        else
        {
            cout<<"Player One, please choose your character. \n";
            cout<<"'X'   'O' \n";
            cin>>first_player;
        }
        }

    }while(entry == 'Y' || entry == 'y');
    
    return 0;
}