#pragma once
#include <deque>
#include <string>
#include "BartenderUI.h"
//#include "Mode.h"
//#include "Sk�rm.h"
//#include "ordre.h"


class System
{
public:
	System();
	void ModtagOrdre();
	void MarkerOrdreDone();
	//void VisOrdre();
	void RunSystem();

private:
	BartenderUI bartender_;	//output til sk�rm
	//Sk�rm sk�rm_;
	//Mode mode_;
	std::deque<ordre> ordreList;

	
	
};


