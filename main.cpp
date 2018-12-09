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

int gRatingMenu(){
	int choice;
	cout<<"1. E\n"
		<<"2. E 10+\n"
		<<"3. T\n"
		<<"4. M\n"
		<<"5. Ao\n"
		<<"6. RP\n"
		<<"Choice: ";
	cin >> choice;
	return choice;
}

int gGenreMenu(){
	int choice;
	cout<<"1. Action\n"
		<<"2. Adventure\n"
		<<"3. Role Playing\n"
		<<"4. FPS\n"
		<<"5. Simulation\n"
		<<"6. Strategy\n"
		<<"7. Sports\n"
		<<"Choice: ";
	cin >> choice;
	return choice;
}

int addGame(int index, Media** gPTR){
	cin.clear();
	fflush(stdin);
	system("CLS");
	
	Game g;
	string name;
	string price;
	string platform;
	string rating;
	string genre;
	
	cout<<"Game Menu \n"
		<<"Name: ";
	getline(cin, name);
	cout<<"Price: ";
	cin >> price;
	cout<<"Platform: ";
	cin >> platform;
		
	cout<<"Choose a rating:\n";
	int ratingChoice = gRatingMenu();
	switch(ratingChoice){
		case 1: rating = "E";
			break;
		case 2: rating = "E 10+";
			break;
		case 3:	rating = "T";
			break;
		case 4: rating = "M";
			break;
		case 5: rating = "Ao";
			break;
		case 6: rating = "RP";
			break;				
	}
	
	cout<<"Choose a genre:\n";
	int genreChoice = gGenreMenu();
	switch(genreChoice){
		case 1: genre = "Action";
			break;
		case 2: genre = "Adventure";
			break;
		case 3:	genre = "Role Playing";
			break;
		case 4: genre = "FPS";
			break;
		case 5: genre = "Simulation";
			break;
		case 6: genre = "Strategy";
			break;
		case 7: genre = "Sports";
			break;					
	}
	
	g.setName(name);
	g.setCost(price);
	g.setRating(rating);
	g.setPlatform(platform);
	g.setGenre(genre);
	
	gPTR[index] = &g;
//	cout << gPTR[index] -> toString();
	gPTR -> print();
	index++;
	return index;
}

void viewAllGames(int index, Media** gPTR){
	for(int i = 0; i < index; i++){
		cout << gPTR[i]->toString() << "\n";
	}
}

int main() {
	Media* gameList[100];
	Media* movieList[100];
	
	int mSelection;
	int userChoice= 0;
	int mIndex = 0;
	int gIndex = 0;
	
	do{
		cout<< "Media Type:\n"
			<< "1. Game\n"
			<< "2. Movie\n"
			<< "Choice: ";
		cin >> mSelection;	 
		do{		
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
			system("PAUSE");
		}while(userChoice != 4);
	}while(userChoice != 4);
	system("PAUSE");
	return 0;
}
