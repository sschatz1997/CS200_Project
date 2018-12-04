//Media.h
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Media{
	private:
		float unitCost;
		string title;
	public:
		Media();
		void setName(string);
		void setCost(float);
};

Media::Media(){
	unitCost = 0.0;
	name = "";
}

void Media::setName(string name){ title = name; } 
void Media::setCost(float num){ unitCost = num; } 
