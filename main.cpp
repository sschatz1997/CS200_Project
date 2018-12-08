#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo>

#include "Game.h"
#include "Movie.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gMenu(){
	system("CLS");
	
	int choice;
	cout<<"Main Menu For PC Games\n"
		<<"1. Add a game.\n"
		<<"2. View All Games.\n"
		<<"3. Search for a Game.\n"
		<<"4. Enter another Media.\n"
		<<"5. Exit\n"
		<<"Enter your choice: ";
	cin>>choice;
	return choice;
}

int gGenreMenu(){
	system("CLS");
	
	int choice = 0;
	cout<<"Add a Game:\n"
		<<"1. Action\n"
		<<"2. Adventure\n"
		<<"3. Role Playing\n"
		<<"4. FPS\n"
		<<"5. Simulation\n"
		<<"6. Strategy\n"
		<<"7. Sports\n"
		<<"8. EXIT\n"
		<<"Choice: ";
	cin >> choice;
	return choice;
}

int addGame(int index, Media** mPTR){
	int genreChoice = gGenreMenu();
	
	index++;
	return index;
}

void viewAllGames(int index, Media** mPTR){
	for(int i = 0; i < index; i++){
		cout << mPTR[i] -> print() << "\n";
	}
}

int main(int argc, char** argv) {
	Media* gameList[100];
	Media* movieList[100];
	
	int mSelection;
	int userChoice= 0;
	int mIndex = 0;
	int gIndex = 0;
	
	//mediaList[0]->setName(test); 
	//cout<<"Action game "<<mediaList[0]->getName();
	do{	
		cout<< "Media Type:\n"
			<< "1. Game\n"
			<< "2. Movie\n"
			<< "Choice: ";
		cin >> mSelection;	 
		
		if(mSelection = 1){
			userChoice = gMenu();
			switch(userChoice){
				case 1: gIndex = addGame(gIndex, gameList);
					break;
				case 2: viewAllGames(gIndex, gameList);
					break;
				case 3:
					break;
				case 4:
					break;	
				case 5: cout<<"EXITING"<<endl;
					return 0;
				default: cout<<"Incorect Choice!"<<endl;
					break;
			}
		}/*else{
			userChoice = mMenu();
			switch(userChoice){
				case 1: mIndex = addMovie(mIndex, movieList);
					break;
				case 2: viewAllMovies(mIndex, movieList);
					break;
				case 3:
					break;
				case 4:
					break;	
				case 5: cout<<"EXITING"<<endl;
					return 0;
				default: cout<<"Incorect Choice!"<<endl;
					break;
			}
		}*/
	}while(userChoice != 4);
	system("PAUSE");
	return 0;
}