#pragma once

#include "BartenderUI.h"
#include "Mode.h"
#include "Sk�rm.h"
#include "ordre.h"
#include <deque>
#include <string>


class System
{
public:
	System();
	void ModtagOrdre();
	void MarkerOrdreDone();
	void VisOrdre();
	void RunSystem();

private:
	BartenderUI bartender_;	//output til sk�rm
	Sk�rm sk�rm_;
	Mode mode_;
	std::deque<ordre> ordreList;
	
	
};


