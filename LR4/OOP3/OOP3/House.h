#pragma once
#include "stdafx.h"
#include "Flat.h"

class House : public Flat
{
private:
	static int counter;
	
public:
	int number_window;
	House();
	void Abstract::set();
	void Abstract::toConsole();
	static int GetCounter();
	~House();
};

