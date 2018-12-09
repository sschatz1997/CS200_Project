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

int mRatingMenu()
{
	int choice;
	cout<<"1. G\n"
		<<"2. PG\n"
		<<"3. PG-13\n"
		<<"4. R\n"
		<<"5. NC-17\n"
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
//genre of the movie
int mGenreMenu(){
	int choice;
	cout<<"1. Action\n"
		<<"2. Adventure\n"
		<<"3. Comedy\n"
		<<"4. Crime\n"
		<<"5. Drama\n"
		<<"6. Horror\n"
		<<"7. Science Fiction\n"
		<<"8. Western\n"
		<<"Choice: ";
	cin >> choice;
	return choice;
		
}

int mLengthMenu(){//this is for the length of the movie
	int choice;
	cout<<"1. Half Hour\n"
		<<"2. Hour\n"
		<<"3. Hour and a Half\n"
		<<"4. Two Hours\n"
		<<"5. Two and Half Hours\n"
		<<"6. Three Hours\n"
		<<"7. More then Three Hours\n"
		<<"Length: ";
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
	g.print();
	index++;
	return index;
}

int addMovie(int index, Media* mPTR)
{
	cin.clear();
	fflush(stdin);
	system("CLS");
	
	string name;
	string price;
	string length;
	string rating;
	string genre;
	
	cout<<"Movie Menu: \n"
		<<"Name: ";
	cin>>name;
	cout <<"Price: ";
	cin>>price;	
	cout<<"Length: ";
	int lengthOut = mLengthMenu();
	switch(lengthOut){
		case 1: length = "Half Hour";
		break;
		case 2: length = "Hour";
		break;
		case 3: length = "Hour and a Half";
		break;
		case 4: length = "Two Hours";
		break;
		case 5: length = "Two and a Half Hours";
		break;
		case 6: length = "Three Hours";
		break;
		case 7: length = "More the Three hours";
		break;
		default: cout<<"Invalid choice!\n";
		break;		
	}
	
	cout<<"Choose a Rating: \n";
	int ratingOutput = mRatingMenu();
	switch(ratingOutput){
		case 1: rating = "G";
		break;
		case 2: rating = "PG";
		break;
		case 3: rating = "PG-13";
		break;
		case 4: rating = "R";
		break;
		case 5: rating = "NC-17";
		break;
		default: cout<<"Invalid choice!\n";
		break;
	}	
		
	cout << "Choose a genre: \n";
	int genreChoice = mGenreMenu();
	switch(genreChoice){
		case 1: genre = "Action";
		break;
		case 2: genre = "Adventure";
		break;
		case 3: genre = "Comedy";
		break;
		case 4: genre = "Crime";
		break;
		case 5: genre = "Horror";
		break;
		case 6: genre = "Science Fiction";
		break;
		case 7: genre = "Western";
		break;
		case 8: cout << "Invalid Choice\n";
	}
	mPTR* -> setName(name);
	mPTR -> setCost(price);
	mPTR -> setLength(length);
	mPTR -> setRating(rating);
	mPTR -> setGenre(genre);
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
	Media movieList[100];
	
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
					case 3: mIndex = addMovie(mIndex, movieList);
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
