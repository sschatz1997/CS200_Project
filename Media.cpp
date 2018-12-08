#include <string>
#include "Media.h"

using namespace std;

Media::Media(){
	name = "";
	unitCost = 0.0;
};

void Media::setName(string n){
	name = n;
}
void Media::setCost(float c){
	unitCost = c;
}

string Media::getName() const{
	return name;
}

float Media::getCost() const{
	return unitCost;
}
