#include "stdafx.h"
#include "Stack.h"

list <Stack> MyList;
set <Stack> MySet;
list <Stack>::iterator start;

 
void operator << (ostream &outs, Stack &obj)
{
	obj.out();
}


int main()
{
	setlocale(LC_ALL, "Russian");
	Stack a;

	int element,st_size;
	cout << "������ ������ ����� : "; cin >> st_size;
	cout << "���������� ����� : " << endl;
	for (int i = 0; i < st_size; i++) {
		cin >> element;
		a + element;
	}

	cout << "���������� ������ ������" << endl;

MyList.push_back(a);
start = MyList.begin();

while (start != MyList.end()) 
{
	cout << (*start++);
}

//copy(MyList.rbegin(), MyList.rend(),ostream_iterator<Stack>(cout," "));
	
	system("pause");
	return 0;
}