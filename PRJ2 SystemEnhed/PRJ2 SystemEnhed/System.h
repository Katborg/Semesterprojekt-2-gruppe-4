#pragma once
#include <deque>
#include <string>
#include "BartenderUI.h"
//#include "Mode.h"
//#include "Skærm.h"

class System
{
public:
	System();
	void ModtagOrdre();
	void MarkerOrdreDone();
	//void VisOrdre();
	void RunSystem();

private:
	BartenderUI bartender_;	//output til skærm
	//Skærm skærm_;
	//Mode mode_;
	std::deque<ordre> ordreList;

	
	
};


