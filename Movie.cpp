#include <iomanip>
#include <sstream>
#include <string>
#include "Movie.h"

using namespace std;

Movie::Movie(){
	runLength = "";
	movieRating = "";
	genre = "";
};

void Movie::setLength(string l){
	runLength = l;
}
void Movie::setRating(string r){
	movieRating = r;
}
void Movie::setGenre(string g){
	genre = g;
}

string Movie::getLength() const{
	return runLength;
}
string Movie::getRating() const{
	return movieRating;
}
string Movie::getGenre() const{
	return genre;
}

string Movie::toString() const{
	return "Title: " + name + "\n" +
			"Cost: $" + unitCost + "\n" +
			"Rating: " + movieRating + "\n" +
			"Genre: " + genre + "\n" +
			"Length: " + runLength;

}

string Movie::print() {
	cout << Game::toString();
}
