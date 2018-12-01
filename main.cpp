#include <iostream>
#include <string>
#include <fstream>
#include "getGame.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu()
{
	int choice;
	cout<<"\t\tMain Menu For PC Games\n"
		<<"\t1. Add a game.\n"
		<<"\t2. View All Games.\n"
		<<"\t3. Search for a Game.\n"
		<<"\t4. Exit\n"
		<<"Enter your choice: ";
	cin>>choice;
	return choice;
}

int genreMenu()
{
	int choice = 0;
	cout<<"\t\tAdd a Game:\n"
		<<"\t1. Action\n"
		<<"\t2. Adventure\n"
		<<"\t3. Role Playing\n"
		<<"\t4. FPS\n"
		<<"\t5. Simulation\n"
		<<"\t6. Strategy\n"
		<<"\t7. Sports\n"
		<<"\t8. EXIT\n"
		<<"Ony enter one genre at a time exit out to enter another game in that genre\n"
		<<"Choice: ";
	cin >> choice;
	return choice;
}

int addGame(int counter, ChooseGenre* gPTR)
{
	int choice;
	string action, adventure, rp, fps, sims, strats, sport;
	do
	{
		choice = genreMenu();
		switch(choice){
			case 1: 
				cout<<"Enter the Action Game: ";
				cin>>action;
				gPTR -> setAction(action);
			break;
			case 2:
				cout<<"Enter the Adventure Game: ";
				cin>>adventure;
				gPTR -> setAdventure(adventure);
			break;
			case 3:
				cout<<"Enter the Role-Playing Game: ";
				cin>>rp;
				gPTR -> setRP(rp);
			break;
			case 4:
				cout<<"Enter the FPS Game: ";
				cin>>fps;
				gPTR -> setFPS(fps);
			break;
			case 5:
				cout<<"Enter the Simulation Game: ";
				cin>>sims;
				gPTR -> setSim(sims);
			break;
			case 6:
				cout<<"Enter the Strategy Game: ";
				cin>>strats;
				gPTR -> setStrat(strats);
			break;
			case 7:
				cout<<"Enter the Sport Game: ";
				cin>>sport;
				gPTR -> setSport(sport);
			break;
			case 8: cout<<"EXITING"<<endl;
			break;
			default: cout<<"Incorect Choice!"<<endl;
			break;
		}
	}while(choice != 8);
	gPTR++;
	return counter;
}

void viewAllGames(int index, ChooseGenre* gPTR)
{
	cout<<"test: "<< gPTR -> getAction()<<endl;
	for(int i = 0; i<index; i++)
	{
		cout << gPTR -> print();
		gPTR++;
	}
}

int main(int argc, char** argv) 
{
	ChooseGenre G[100];
	int userChoice;
	int index = 0;
/*	string test;
	cout <<"enter action game: ";
	cin>>test;
	G.setAction(test); 
	cout<<"Action game "<<G.getAction();proof of concept */
	do
	{	
		userChoice = menu();
		switch(userChoice){
			case 1: index = addGame(index, G);
			break;
			case 2:viewAllGames(index, G);
			break;
			case 3:
			break;
			case 4: cout<<"EXITING"<<endl;
			break;
			default: cout<<"Incorect Choice!"<<endl;
			break;
		}
	}while(userChoice != 4);
	system("PAUSE");
	return 0;
}
