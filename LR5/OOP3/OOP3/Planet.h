#pragma once
#include "stdafx.h"
#include "Abstract.h"
#include "Land.h"
#include "Continent.h"
#include "Island.h"
#include "Sea.h"
#include "State.h"



class Planet
{
public:
	int size = 0;
	Abstract *Arr[100];
	void set(Abstract *obj);
	void showArr();
	void delet();
};