#pragma once
#include "stdafx.h"
#include "Abstract.h"

class Land :public Abstract
{
public:
	double area;
	const int size = 1;
	void Abstract :: set();
	void Abstract :: toConsole();
	Land();
	const int GetSize();
	double GetArea();
	~Land();
};