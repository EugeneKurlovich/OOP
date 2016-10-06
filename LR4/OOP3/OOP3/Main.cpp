#include "stdafx.h"
#include "Island.h"
#include "Continent.h"
#include "Land.h"
#include "Sea.h"
#include "State.h"
#include "Abstract.h"
#include "Flat.h"
#include "House.h"
#include "Instector.h"
#include "Printer.h"

int House::counter;

int main()
{
	setlocale(LC_ALL , "Russian");

	Land a; Continent b; Island c; State d; Sea e; Flat f; House i; Instector g;
	

	cout << endl;
	cout << "����� : Land" << endl;

	a.set();
	a.toConsole();

	cout << endl;

	cout << "����� : Continent" << endl;

	b.SetName();
	b.set();
	b.toConsole();

	cout << endl;

	cout << "����� : Island" << endl;

	c.SetName();
	c.set();
	c.SetPopulation();
	c.toConsole();

	cout << endl;

	cout << "����� : State" << endl;

	d.SetName();
	d.set();
	d.SetPopulation();
	d.SetCapital();
	d.toConsole();
	cout << endl;

	cout << "����� : Sea" << endl;

	e.SetName();
	e.set();
	e.SetMaxDepth();
	e.toConsole();
	
	cout << endl;
	cout << "����� ��������� � Sea " << endl;
	e.f.SetSpeed();
	e.f.ShowSpeed();
	cout << endl;

	e.f.CallMethod(e);
	e.TestPole();
	cout << endl;

	cout << "2 ����� ������ :" << endl;

	cout << "����� �������� :" << endl;
	f.set();
	f.toConsole();

	cout << endl;

	cout << "����� ��� :" << endl;
	i.set();
	i.toConsole();
	
	cout << endl;

	cout << "����������� ����� � ���� : " << endl;
	a.GetSize();
	cout << endl;
	
	cout << "Friend class" << endl;
	g.iKnowAllAboutYou(c);
	cout << endl;

	cout << "Friend function" << endl;
	iCanModify(c);
	cout << endl;

	cout << "Static counter" << endl;
	cout << "Count of House : " << House::GetCounter() << endl;
	House plus_one; cout << endl;
	cout << "Count of House +1 : " << House::GetCounter() << endl;

	//7 ������� , ���������� ���������� �� ������

	Land *aa = &a; Continent *bb = &b; Island *cc = &c;  State *dd = &d; Sea *ee = &e;
	Printer printer;
	printer.iAmPrinting(aa);
	printer.iAmPrinting(bb);
	printer.iAmPrinting(cc);
	printer.iAmPrinting(dd);
	printer.iAmPrinting(ee);


	//8 �������������� 

	//�������������� ������������ - �������
	Continent *Z1 = new Continent();
	Z1->set();
	Z1->SetName();
	Land *z2 = static_cast<Continent*>(Z1);
	z2->GetArea();

	//�������������� ������� - �����������
	Continent *Z3 = new Continent();
	Z3->set();
	Z3->SetName();
	Land *Z4 = dynamic_cast<Continent*>(Z3);
	Z4->GetArea();

	//������� ����������� �����
	const Island *z5 = new Island();
	Island *Z6 = const_cast<Island*>(z5);

	system("pause");
	return 0;
}