#include <iostream>
#include "BartenderUI.h"
#include "Mode.h"
#include "Skærm.h"
#include "System.h"

using namespace std;

main()
{

	System system;
	BartenderUI bartender;
	Skærm skærm;
	Mode mode;

	system.ModtagOrdre('a', 7);
	bartender.VisOrdre();

	return 0;
}