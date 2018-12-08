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