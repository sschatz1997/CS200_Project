//Game.h

#ifndef GAME_H
#define GAME_H

#include <string>
#include "Media.h"
using namespace std;

class Game : public Media{
	public:
		Game();
		void setPlatform(string);
		void setRating(string);
		void setGenre(string);
		
		string getPlatform() const;
		string getRating() const;
		string getGenre() const;
		
	private:
		string gameRating;
		string platform;
		string genre;
};

#endif
