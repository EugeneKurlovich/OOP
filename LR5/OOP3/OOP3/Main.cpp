#include "stdafx.h"
#include "Island.h"
#include "Continent.h"
#include "Land.h"
#include "Sea.h"
#include "State.h"
#include "Abstract.h"
#include "Planet.h"
#include "Controler.h"

int main()
{
	setlocale(LC_ALL , "Russian");
	
	 Continent b; Island c,p; State d; Sea e,g;

	cout << "Класс : Continent" << endl;

	b.set();
	b.toConsole();

	cout << endl;

	cout << "Класс : Island" << endl;

	c.set();
	c.toConsole();

	cout << endl;
	cout << "Класс : Island" << endl;
	p.set();
	p.toConsole();
	cout << endl;

	cout << "Класс : State" << endl;

	d.set();
	d.toConsole();
	cout << endl;


	cout << "Класс : Sea" << endl;

	e.set();
	e.toConsole();
	
	cout << endl;

	g.set();
	g.toConsole();
	cout << endl;

	Continent *bb = &b;
	Island *cc = &c;
	Island *pp = &p;
	State *dd = &d;
	Sea *ee = &e;
	Sea *gg = &g;

	Planet r;  
		r.set(bb);
		r.set(cc);
		r.set(pp);
		r.set(dd);
		r.set(ee);
		r.set(gg);
		
	//r.showArr();
	//r.delet();
	//r.showArr();
	Controler s;
	s.seas(r);
	s.islands_Alphavite(r);
	s.state(r);
	system("pause");
	return 0;
}