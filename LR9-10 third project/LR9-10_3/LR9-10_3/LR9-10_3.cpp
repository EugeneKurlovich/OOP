#include "stdafx.h"
#include "Land.h"




int main()
{
	setlocale(LC_ALL, "Russian");
	
	map<const int, Land> myMap;

	myMap.emplace(5, Land(4.5));
	myMap.emplace(2, Land(5.5));
	myMap.emplace(1,Land(1.5));
	myMap.emplace(4,Land(2.5));
	myMap.emplace(3,Land(3.5));

	for (auto it = myMap.begin(); it != myMap.end(); ++it)
	{
		cout << it->first << " : " << it->second << endl;
	}

	




	system("pause");
    return 0;
}

