//Movie.h

#include "Media.h"

#ifndef MOVIE_H
#define MOVIE_H

class Movie: public Media {
	private:
		string runLength;
		string movieRating; 
		int numMovies;
	public:
		Movie();
		void setLength(string);
		void setRating(string);
		void addMovie();
};

Movie::Movie(){
	string runLength = "";
	string movieRating = "";
	numMovies = 0;
}

void Movie::setLength(string length){ runLength = length; }
void Movie::setRating(string rating){ movieRating = rating; }
void Movie::addMovie(){ numMovies ++ }

#endif
