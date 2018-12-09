//Movie.h

#include "Media.h"

class Movie : public Media{
	public:
		Movie();
		
		void setLength(string);
		void setRating(string);
		void setGenre(string);
		
		string getLength() const;
		string getRating() const;
		string getGenre() const;
		
		string toString() const;
		
	private:
		string runLength;
		string movieRating; 
		string genre;
};
