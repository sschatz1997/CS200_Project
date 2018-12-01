//getGame.cpp
#include <string>
#include <iostream>
#include "getGame.h"
using namespace std;

string ChooseGenre::print() const { cout << "Action game: " <<getAction()
							 << "\nadventure game: " << getAdventure()
							 << "\nRP game: " << getRP()
							 << "\nFPS game: " << getFPS()
							 <<"\nSimulation game: "<< getSim()
							 <<"\nStratergy game: "<< getStrat()
							 <<"\nSports game: "<< getSport()<<endl;}
