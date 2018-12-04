#include "Media.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu()
{
	int choice;
	cout<<"\t\tMain Menu For Pieces of Media ( Movies and Games )\n"
		<<"\t1. Add a movie or game.\n"
		<<"\t2. View all movies and games.\n"
		<<"\t3. Dump movies and games to a text file.\n"
		<<"\t4. Exit\n"
		<<"Enter your choice: ";
	cin>>choice;
	return choice;
}

int addMedia(int index, Media* M){
	int choice = 0;
	int flag = 0;

	do{
		cout << "Would you like to enter data for a Movie or Game?\n"
			 << "\t1. Movie\n"
			 << "\t2. Game\n"
			 << "\t3. Exit\n"
			 << "Enter your choice: ";
		cin >> choice;
	
		
		switch(choice){
			case 1: // add a movie
					
				flag = 1;
				break;
			case 2: // add a game
				
				flag = 1;
				break;
			case 3: cout << "Exiting...\n";
				return index;
				break;
			default: cout << "You have made an invalid selection.\n";
				break;
		}
	}while(flag == 0);
	
	index++;
	return index;
}

void viewMedia(Media* M){
	/*int size = sizeof(M);
	
	for(int i = 0; i < size; i++ ){
		cout << M[i] << "\n" << endl;
	}
	
	return;*/
}

int main(int argc, char** argv) 
{
	Media M[100];
	int userChoice;
	int index = 0;
	
	//cout << sizeof(Media[100]);
	
	do
	{	
		userChoice = menu();
		switch(userChoice){
			case 1: index = addMedia(index, M);
			break;
			case 2: viewMedia(M);
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
