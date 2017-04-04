#include <iostream>
#include "BartenderUI.h"
//#include "ordre.h"
#include "Cursor.h"



BartenderUI::BartenderUI()
{
	//skærmbilled
	std::cout << "1: indtast ordre \n2: complete ordre\n";
	std::cout << "Ordre: \n";
	std::cout << "-------------------------------------\n";
	std::cout << "\n\n\n\n\n";
	std::cout << "-------------------------------------\n";
	std::cout << "Q for quit";
}

void BartenderUI::VisOrdre(std::deque<ordre> &showOrdre)
{
	Cursor cursor;
	cursor.cursorToXY(0, 4);	//placere cursor ved ordre listen
	//sletter alle ordre der skulle stå der i forvejen
	std::cout << "                         \n                         \n                      \n                      \n                       \n";

	//printer max 5 ordre ud.
	for (int i = 0; i != showOrdre.size() && i < 5; ++i){
		cursor.cursorToXY(2, 4+i);
		std::cout << showOrdre[i] << "\n";
		}

	cursor.cursorToXY(0, 12);
}
