//Game.h
#include "Media.h"

class Game : Media{
	private:
		string esrbRating;
		string platform;
	public:
		Game();
		void setRating(string);
		void setPlatform(string);
};

Game::Game(){
	esrbRating = "";
	platform = "";
}

void Game::setRating(string rating){ esrbRating = rating; }
void Game::setPlatform(string name){ platform = name; }
