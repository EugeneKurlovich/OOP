#include "stdafx.h"
#include "Printer.h"

void Printer::iAmPrinting(Abstract *some)
{
	cout << typeid(some).name();
	cout << endl;
	some->toConsole();
	cout << endl;
}