//Movie.h

#include "Media.h"

class Movie : Media{
	private:
		string runLength;
		string movieRating; 
	public:
		Movie();
		void setLength(string);
		void setRating(string);
};

Movie::Movie(){
	runLength = "";
	movieRating = "";
}

void Movie::setLength(string length){ runLength = length; }
void Movie::setRating(string rating){ movieRating = rating; }
