#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include<memory>
using std::make_unique; 

//TICTACTOE 3
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify game_over function")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	REQUIRE(false == game->game_over());
}

TEST_CASE("Test first player set to 'X' 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");
	REQUIRE("X" == game->get_player());
}

TEST_CASE("Test first player set to 'O' 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("O");
	REQUIRE("O" == game->get_player());
}

TEST_CASE("Verify game over / tie 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(9);

	REQUIRE(true == game->game_over());
	REQUIRE("C" == game->get_winner());
}

TEST_CASE("Test first colum win 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test second colum win 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test third colum win 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test first row win 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test second row win 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test third row win 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test top left diagonal win 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test bottom left diagonal win 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test get_winner funciton 3")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test get_winner_total function 3")
{
	TicTacToeManager games;
	int o, x, t;

	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	//GAME 1 - X WINNER
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(7);

	REQUIRE(true == game->game_over());
	REQUIRE("X" == game->get_winner());

	games.save_game(game);
	games.get_winner_total(o, x, t);
	
	REQUIRE(0 == o);
	REQUIRE(1 == x);
	REQUIRE(0 == t);

	//GAME 2 - O WINNER
	game = std::make_unique<TicTacToe3>();
	game->start_game("O");
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(7);

	REQUIRE(true == game->game_over());
	REQUIRE("O" == game->get_winner());

	games.save_game(game);
	games.get_winner_total(o, x, t);
	
	REQUIRE(1 == o);
	REQUIRE(1 == x);
	REQUIRE(0 == t);

	//GAME 3 - NO WINNER
	game = std::make_unique<TicTacToe3>();
	game->start_game("X");
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(9);

	REQUIRE(true == game->game_over());
	REQUIRE("C" == game->get_winner());

	games.save_game(game);
	games.get_winner_total(o, x, t);
	
	REQUIRE(1 == o);
	REQUIRE(1 == x);
	REQUIRE(1 == t);
}


//TICTACTOE 4
TEST_CASE("Verify game_over function 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();

	REQUIRE(false == game->game_over());
}

TEST_CASE("Test first player set to 'X' 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");
	REQUIRE("X" == game->get_player());
}

TEST_CASE("Test first player set to 'O' 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("O");
	REQUIRE("O" == game->get_player());
}

TEST_CASE("Verify game over / tie 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(10);
	REQUIRE(false == game->game_over());
	game->mark_board(11);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(false == game->game_over());
	game->mark_board(13);
	REQUIRE(false == game->game_over());
	game->mark_board(14);
	REQUIRE(false == game->game_over());
	game->mark_board(15);
	REQUIRE(false == game->game_over());
	game->mark_board(16);

	REQUIRE(true == game->game_over());
	REQUIRE("C" == game->get_winner());
}

TEST_CASE("Test first colum win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(13);
	REQUIRE(true == game->game_over());
	
}

TEST_CASE("Test second colum win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(10);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(14);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test third colum win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(11);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(15);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test fourth colum win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(16);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test first row win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test second row win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test third row win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(10);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(11);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test fourth row win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(13);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(14);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(15);
	REQUIRE(false == game->game_over());
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(16);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test top left diagonal win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(11);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(false == game->game_over());
	game->mark_board(16);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test bottom left diagonal win 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(10);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(false == game->game_over());
	game->mark_board(13);
	REQUIRE(true == game->game_over());
}

TEST_CASE("Test get_winner funciton 4")
{
	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(10);
	REQUIRE(false == game->game_over());
	game->mark_board(11);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(false == game->game_over());
	game->mark_board(13);
	REQUIRE(true == game->game_over());

	REQUIRE("X" == game->get_winner());
}

TEST_CASE("Test get_winner_total function 4")
{
	TicTacToeManager games;
	int o, x, t;

	std::unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	//GAME 1 - X WINNER
	game->start_game("X");
	
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(10);
	REQUIRE(false == game->game_over());
	game->mark_board(11);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(false == game->game_over());
	game->mark_board(13);

	REQUIRE(true == game->game_over());
	REQUIRE("X" == game->get_winner());

	games.save_game(game);
	games.get_winner_total(o, x, t);
	
	REQUIRE(0 == o);
	REQUIRE(1 == x);
	REQUIRE(0 == t);

	//GAME 2 - O WINNER
	game = std::make_unique<TicTacToe4>();
	game->start_game("O");
	
	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(10);
	REQUIRE(false == game->game_over());
	game->mark_board(11);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(false == game->game_over());
	game->mark_board(13);
	
	REQUIRE(true == game->game_over());
	REQUIRE("O" == game->get_winner());

	games.save_game(game);
	games.get_winner_total(o, x, t);
	
	REQUIRE(1 == o);
	REQUIRE(1 == x);
	REQUIRE(0 == t);

	//GAME 3 - NO WINNER
	game = make_unique<TicTacToe4>();
	game->start_game("X");

	game->mark_board(1);
	REQUIRE(false == game->game_over());
	game->mark_board(2);
	REQUIRE(false == game->game_over());
	game->mark_board(3);
	REQUIRE(false == game->game_over());
	game->mark_board(4);
	REQUIRE(false == game->game_over());
	game->mark_board(6);
	REQUIRE(false == game->game_over());
	game->mark_board(5);
	REQUIRE(false == game->game_over());
	game->mark_board(8);
	REQUIRE(false == game->game_over());
	game->mark_board(7);
	REQUIRE(false == game->game_over());
	game->mark_board(9);
	REQUIRE(false == game->game_over());
	game->mark_board(10);
	REQUIRE(false == game->game_over());
	game->mark_board(11);
	REQUIRE(false == game->game_over());
	game->mark_board(12);
	REQUIRE(false == game->game_over());
	game->mark_board(13);
	REQUIRE(false == game->game_over());
	game->mark_board(14);
	REQUIRE(false == game->game_over());
	game->mark_board(15);
	REQUIRE(false == game->game_over());
	game->mark_board(16);

	REQUIRE(true == game->game_over());
	REQUIRE("C" == game->get_winner());

	games.save_game(game);
	games.get_winner_total(o, x, t);
	
	REQUIRE(1 == o);
	REQUIRE(1 == x);
	REQUIRE(1 == t);
}