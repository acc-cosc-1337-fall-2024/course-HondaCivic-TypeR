#include"tic_tac_toe.h"
#include"tic_tac_toe_manager.h"

#include<iostream>
#include<string>

using std::cin; using std::cout;
using std::string;


int main()
{
    TicTacToe game;
    TicTacToeManager games;
    int o, x, t;
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

        games.save_game(game);
        games.get_winner_total(o, x, t);

        cout<<"The winner is "<<game.get_winner()<<"\n\n";
        cout<<"SCOREBOARD\n"<<"O wins: "<<o <<"\nX wins: "<<x <<"\nTies "<<t <<"\n\n";
        cout<<"Would you like to play again? \n";
        cin>>entry;

        if(entry == 'N' || entry == 'n')
        {
            cout<<"Ending game.\n";
            break;
        }

        else if(entry == 'Y' || entry == 'y')
        {
            cout<<"Player One, please choose your character. \n";
            cout<<"'X'   'O' \n";
            cin>>first_player;
        }
        else
        {
            while(entry != 'y' && entry != 'Y' && entry != 'N' && entry != 'n')
            {
                cout<<"Would you like to play again? \n";
                cin>>entry;
            }

            if(entry == 'Y' || entry == 'y')
            {
                cout<<"Player One, please choose your character. \n";
                cout<<"'X'   'O' \n";
                cin>>first_player;
            }
            else
            {
                cout<<"Ending game. \n";
                break;
            }
        }
        }

    }while(entry == 'Y' || entry == 'y');
    
    return 0;
}