#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>
#include "Game.h"
using namespace std;
Game::Game(){
	gameRating = "";
	platform = "";
	genre = "";
};

void Game::setRating(string r){
	gameRating = r;
}
void Game::setPlatform(string n){
	platform = n;
}
void Game::setGenre(string g){
	genre = g;
}

string Game::getRating() const{
	return gameRating;
}
string Game::getPlatform() const{
	return platform;
}
string Game::getGenre() const{
	return genre;
}

string Game::toString() const{
	return "Title: " + name + "\n" +
			"Cost: $" + unitCost + "\n" +
			"Platform: " + platform + "\n" +
			"Rating: " + gameRating + "\n" +
			"Genre: " + genre;
}
