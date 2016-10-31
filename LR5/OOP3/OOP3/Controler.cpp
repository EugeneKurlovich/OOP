#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include "Controler.h"

void Controler::seas(Planet m)
{
	int summa = 0;
	for (int i = 0; i < 5; i++)
	{

		if (dynamic_cast<Sea*>(m.Arr[i]) != NULL && !(dynamic_cast<Island*>(m.Arr[i])))
		{
			summa++;
		}
	}
	cout << "Кличество морей : " << summa << endl;
}

void Controler::islands_Alphavite(Planet n)
{
	string arr[100];
	Island *a;
	int j = 0;
	for (int i = 0; i < arr[i].length(); i++)
	{
		a = dynamic_cast<Island*>(n.Arr[i]);
		if (a != NULL)
		{
			arr[j] = a->getname();
			j++;
		}
	}
	cout << "Острова : ";

	for (int i = 0; i < j-1; i++)
		for (int f = i ; f < j; f++) {
			if (strcmp(arr[i].c_str(), arr[j].c_str())>0) swap(arr[i], arr[j]);
		}

	for (int i = 0; i < j; i++)
	{
		
		cout << arr[i] << " ";
		
	}
	cout << endl;
}

void Controler::state(Planet b)
{
	Continent *a,*t,*r;
	string ccname;
	cout << "Введите имя интересуещего континента : ";
	cin >> ccname;
	for (int i = 0; i < 6; i++)
	{
		r = dynamic_cast<Continent*>(b.Arr[i]);
		if (r != NULL) {
			if (ccname == r->name)
			{
				a = dynamic_cast<Continent*>(b.Arr[i]);
				t = dynamic_cast<State*>(b.Arr[i]);
				if (a != NULL && !t)
				{
					a->toConsole();
				}
			}
		}
	}
}