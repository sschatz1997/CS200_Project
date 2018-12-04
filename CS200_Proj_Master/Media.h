//Media.h

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

#ifndef MEDIA_H
#define MEDIA_H

class Media {
	private:
		float unitCost;
		string title;
		string genre;
	public:
		Media();
		void setName(string);
		void setCost(float);
		void setGenre(string);
};

Media::Media(){
	unitCost = 0.0;
	title = "";
	genre = "";
}

void Media::setName(string name){ title = name; } 
void Media::setCost(float num){ unitCost = num; } 
void Media::setGenre(string name){ genre = name; }

#endif
