#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Game.h"
#include "Movie.h"
using namespace std;

int gMenu(){
	system("CLS");
	
	int choice;
	cout<<"Main Menu For Games\n"
		<<"1. Add a Game.\n"
		<<"2. View All Games.\n"
		<<"3. Search for a Game.\n"
		<<"4. Enter another Media.\n"
		<<"5. Exit\n"
		<<"Enter your choice: ";
	cin >>choice;
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
	cin >>choice;
	return choice;
}

int addGame(int index, Game* gARR){
	cin.clear();
	fflush(stdin);
	system("CLS");

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
	
	gARR[index].setName(name);
	gARR[index].setCost(price);
	gARR[index].setRating(rating);
	gARR[index].setPlatform(platform);
	gARR[index].setGenre(genre);
	
	index++;
	return index;
}

int mMenu(){
	system("CLS");
	
	int choice;
	cout<<"Main Menu For Movies\n"
		<<"1. Add a Movie.\n"
		<<"2. View All Movies.\n"
		<<"3. Search for a Movie.\n"
		<<"4. Enter another Media.\n"
		<<"5. Exit\n"
		<<"Enter your choice: ";
	cin>>choice;
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

int addMovie(int index, Movie* mARR){
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
	getline(cin, name);
	cout <<"Price: ";
	cin>>price;	
	cout<<"Length: \n";
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
	
	mARR[index].setName(name);
	mARR[index].setCost(price);	
	mARR[index].setLength(length);
	mARR[index].setRating(rating);
	mARR[index].setGenre(genre);
	
	index++;
	return index;
	
}

void viewMedia(Media &m){
	cout << m.toString() << "\n";
}

void searchGame(int index, Game* gARR){
	cin.clear();
	fflush(stdin);
	
	string name;
	cout<< "Enter the name of the game: ";
	getline(cin, name);
	
	for(int i = 0; i < index; i++){
		if(gARR[i].getName() == name)
			viewMedia(gARR[i]);
	}
	system("pause");
}

void searchMovie(int index, Movie* mARR){
	cin.clear();
	fflush(stdin);
	
	string name;
	cout<< "Enter the name of the movie: ";
	getline(cin, name);
	
	for(int i = 0; i < index; i++){
		if(mARR[i].getName() == name)
			viewMedia(mARR[i]);
	}
	system("pause");
}

void saveMedia(int gIndex, Game* gARR, int mIndex, Movie* mARR){
	ofstream gameD("gameData.txt", ios::out | ios::trunc);
	for(int i = 0; i < gIndex; i++){
		gameD << gARR[i].getName() << "|"
			  << gARR[i].getCost() << "|"
			  << gARR[i].getRating() << "|"
	          << gARR[i].getPlatform() << "|"
	          << gARR[i].getGenre() << "\n";
	}
	gameD.close();
	
	ofstream movieD("movieData.txt", ios::out | ios::trunc);
	for(int i = 0; i < mIndex; i++){
		movieD << mARR[i].getName() << "|"
			   << mARR[i].getCost() << "|"
			   << mARR[i].getLength() << "|"
	           << mARR[i].getRating() << "|"
	           << mARR[i].getGenre() << "\n";
	}
	movieD.close();
}

void loadMedia(int* indexes, Game* gARR, Movie* mARR){
	string line;
	int gIndex = 0;
	int mIndex = 0;
	string vars[5];
	
	ifstream gameD("gameData.txt");
	if(gameD.is_open()){
    	while(getline(gameD, line)){
    		stringstream ss(line);
    		string word;
    		int temp = 0;
    		while(getline(ss, word, '|')){
    			vars[temp++] = word;
			}
			gARR[gIndex].setName(vars[0]);
			gARR[gIndex].setCost(vars[1]);	
			gARR[gIndex].setRating(vars[2]);
			gARR[gIndex].setPlatform(vars[3]);
			gARR[gIndex].setGenre(vars[4]);
			gIndex++;
    	}
    	gameD.close();
  	}

	ifstream movieD("movieData.txt");
	if(movieD.is_open()){
    	while(getline(movieD, line)){
    		stringstream ss(line);
    		string word;
    		int temp = 0;
    		while(getline(ss, word, '|')){
    			vars[temp++] = word;
			}
			mARR[mIndex].setName(vars[0]);
			mARR[mIndex].setCost(vars[1]);
			mARR[mIndex].setLength(vars[2]);
	        mARR[mIndex].setRating(vars[3]);
	        mARR[mIndex].setGenre(vars[4]);
			mIndex++;
    	}
    	movieD.close();
  	}
	indexes[0] = gIndex;
	indexes[1] = mIndex;
}

int main() {
	Game* gameList = new Game[100];
	Movie* movieList = new Movie[100];
	int indexes[2];
	int mSelection;
	int loadOption;
	int userChoice = 0;
	int gIndex = 0;
	int mIndex = 0;
	
	if(ifstream("gameData.txt") || ifstream("movieData.txt")){
		cout<< "Load Previous media? \n"
			<< "1. Yes\n"
			<< "2. No\n"
			<< "Choice: ";
		cin >> loadOption;
		if(loadOption == 1){
			loadMedia(indexes, gameList, movieList);
			gIndex = indexes[0];
			mIndex = indexes[1];
		}
		system("CLS");
	}
	while(true){
		cin.clear();
		fflush(stdin);
		system("cls");
		cout<< "Media Type:\n"
			<< "1. Game\n"
			<< "2. Movie\n"
			<< "Choice: ";
		cin >> mSelection;
		do{		
			if(mSelection == 1){
				userChoice = gMenu();
				switch(userChoice){
					case 1: gIndex = addGame(gIndex, gameList);
						break;
					case 2: for(int i = 0; i < gIndex; i++){ viewMedia(gameList[i]); }
							system("PAUSE");
						break;
					case 3: searchGame(gIndex, gameList);
						break;
					case 4:
						break;	
					case 5: cout<<"EXITING"<<endl;
							saveMedia(gIndex, gameList, mIndex ,movieList);
						return 0;
					default: cout<<"Incorect Choice!"<<endl;
						break;
				}
			}else{
				userChoice = mMenu();
				switch(userChoice){
					case 1: mIndex = addMovie(mIndex, movieList);
						break;
					case 2: for(int i = 0; i < mIndex; i++){ viewMedia(movieList[i]); }
							system("PAUSE");
						break;
					case 3: searchMovie(mIndex, movieList);
						break;
					case 4:
						break;	
					case 5: cout<<"EXITING"<<endl;
							saveMedia(gIndex, gameList, mIndex ,movieList);
						return 0;
					default: cout<<"Incorect Choice!"<<endl;
						break;
				}
			}
		}while(userChoice != 4);
	}
	system("PAUSE");
	return 0;
}
