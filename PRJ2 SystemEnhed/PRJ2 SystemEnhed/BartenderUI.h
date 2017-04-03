#pragma once
#include "System.h"

class BartenderUI
{
public:
	BartenderUI(const System &ordre);
	void VisOrdre();
private:
	System ordre_;
};

