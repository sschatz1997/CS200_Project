//Game.h

#include "Media.h"

#ifndef GAME_H
#define GAME_H

class Game: public Media {
	private:
		string esrbRating;
		string platform;
		int numGames;
	public:
		Game();
		void setRating(string);
		void setPlatform(string);
		void addGame();
};

Game::Game(){
	string esrbRating = "";
	string platform = "";
	numGames = 0;
}

void Game::setRating(string rating){ esrbRating = rating; }
void Game::setPlatform(string name){ platform = name; }
void Game::addGame(){ numGames ++ }

#endif
