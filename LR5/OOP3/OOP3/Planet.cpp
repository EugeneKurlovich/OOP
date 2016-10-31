#include "stdafx.h"
#include "Planet.h"
#include "Abstract.h"

void Planet::set(Abstract *obj)
{
		Arr[size] = obj;
		size++;
}

void Planet::showArr()
{
	for (int i = 0; i < size; i++)
	{
		if (Arr[i] == NULL) { continue; }
		Arr[i]->toConsole();
	}
}

void Planet::delet()
{
	int i;
	cout << "Введите номер удаляемого элемента : " ;
	cin >> i;
	int j = i - 1;
	for (j ; j < size; j++)
	{

	if (j == (size - 1)) 
	{
	Arr[j] = NULL;
	continue;
	}
		Arr[j] = Arr[j+1];
	}
	size--;
}