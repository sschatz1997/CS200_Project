//Movie.h

#include "Media.h"

class Movie : Media{
	public:
		Movie();
		
		void setLength(string);
		void setRating(string);
		void setGenre(string);
		
		string getLength() const;
		string getRating() const;
		string getGenre() const;
		
		virtual string toString() const = 0;
		string print();
		
	private:
		string runLength;
		string movieRating; 
		string genre;
};
