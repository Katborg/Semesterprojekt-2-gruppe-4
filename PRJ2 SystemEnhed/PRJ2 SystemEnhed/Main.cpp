#include <iostream>
#include "BartenderUI.h"
#include "Mode.h"
#include "Sk�rm.h"
#include "System.h"

using namespace std;

main()
{

	System system;
	BartenderUI bartender;
	Sk�rm sk�rm;
	Mode mode;

	system.ModtagOrdre('a', 7);
	bartender.VisOrdre();

	return 0;
}