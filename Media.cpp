#include <string>
#include "Media.h"

using namespace std;

Media::Media(){
	name = "";
	unitCost = "";
};

void Media::setName(string n){
	name = n;
}
void Media::setCost(string c){
	unitCost = c;
}

string Media::getName() const{
	return name;
}

string Media::getCost() const{
	return unitCost;
}
