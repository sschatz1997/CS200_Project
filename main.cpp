#include <iostream>
#include <string>
#include <fstream>
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


int main(int argc, char** argv) 
{
	int userChoice;
	do
	{	
		userChoice = menu();
		switch(userChoice){
			case 1:
			break;
			case 2:
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
