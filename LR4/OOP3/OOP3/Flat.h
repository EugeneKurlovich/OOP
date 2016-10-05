#pragma once
#include "stdafx.h"
#include "Land.h"

class Flat : public Land
{
public:
	int number;
protected:
	string TypePol;

public:
	Flat();
	void Abstract::set();
	void Abstract::toConsole();
	~Flat();
};