#include <iostream>
#include <conio.h>
#include <string>
#include "System.h"
#include "Cursor.h"


System::System(){}


void System::ModtagOrdre()
{
	Cursor cursor;
	cursor.cursorToXY(0, 16);

	std::string type;
	int antal = 0;
	std::cout << "Indtast type: ";
	std::cin >> type;

	std::cout << "Indtast antal: ";
	std::cin >> antal;

	ordreList.push_back(ordre(type, antal));
	
	cursor.cursorToXY(0, 16);
	std::cout << "                    \n                 \n                 \n                  \n";

}

void System::MarkerOrdreDone()
{
	ordreList.pop_front();

	Cursor cursor;
	cursor.cursorToXY(0, 16);
	std::cout << " Ordre completet og fjernet";
}

void System::VisOrdre()
{

}

void System::RunSystem()
{
	//for test formål
	ordreList.push_front(ordre("bajer", 5));
	ordreList.push_front(ordre("drink", 5));
	ordreList.push_front(ordre("bajer", 2));
	ordreList.push_front(ordre("bajer", 3));
	ordreList.push_front(ordre("drink", 2));
	

	bartender_.VisOrdre(ordreList); //opdatere ordre listen

	char tast = 0;

	do{
		tast = getch();
		switch (tast)
		{
		case '1':		//Tast '1' for ny ordre.
			ModtagOrdre();
			break;
		case '2':		//Tast '2' for at færdig gøre ordre.
			MarkerOrdreDone();
			break;
		}
	bartender_.VisOrdre(ordreList);	//opdatere ordre listen
	}while (tast != 'q' && tast != 'Q');


}
