#include "stdafx.h"
#include "Land.h"
#include <memory>

list <Land> MyList;


class Init
{
public:
	Init(initializer_list<Land> list)
	{
		for (Land item : list)
		{
			MyList.push_back(shared_ptr<Land>(new Land(item)));
			cout << item << " ";
		}
	}
	list<shared_ptr<Land>> MyList;
};


int main()
{
	setlocale(LC_ALL, "Russian");
	list<unique_ptr<Land>> MyList;
	list<unique_ptr<Land>>::iterator start = MyList.begin();

	MyList.emplace_back(new Land(1.5));
	MyList.emplace_back(new Land(2.5));
	MyList.emplace_back(new Land(3.3));
	MyList.emplace_back(new Land(4.2));

	Init Mylist = { Land(11.3), Land(3.9)};
	cout << endl;

	for (start = MyList.begin(); start != MyList.end(); ++start)
		cout << **start << "  ";
	cout << endl;

	cout << "После удаления : ";
	MyList.erase(MyList.begin() , MyList.end());

	for (start = MyList.begin(); start != MyList.end() ; ++start)
	{
		if (MyList.empty())
		{
			cout << "Список пуст!!!" << endl;
		}
		cout << **start << "  ";
	}
	cout << endl;

	MyList.emplace_back(new Land(1.5));
	MyList.emplace_back(new Land(2.5));
	MyList.emplace_back(new Land(3.3));
	MyList.emplace_back(new Land(4.2));

	list<unique_ptr<Land>>::reverse_iterator rstart;
	for (rstart = MyList.rbegin(); rstart != MyList.rend(); ++rstart)
		cout << **rstart << "   ";
	cout << endl;

	list<unique_ptr<Land>>::const_iterator cstart;
	for (cstart = MyList.begin(); cstart != MyList.end(); ++cstart)
		cout << **cstart << "   ";
	cout << endl;

	set<unique_ptr<Land>> st;
	set<unique_ptr<Land>>::iterator iterst;
	set<unique_ptr<Land>>::const_iterator cst;
	set<unique_ptr<Land>>::const_iterator rst;
	st.emplace(new Land(3.3));
	st.emplace(new Land(4.2));
	st.emplace(new Land(1.1));
	st.emplace(new Land(7.6));
	st.emplace(new Land(9.5));
	st.emplace(new Land(8.2));
	for (iterst = st.begin(); iterst != st.end(); ++iterst)
	{
		cout << **iterst << " ";
	}
	cout << endl;

	
	int n, m,i = 0;
	cout << "Введите с какого элемента начинать удаление : "; cin >> m;
	cout << "Введите сколько элементов удалить : "; cin >> n;

	for (iterst = st.begin(); iterst != st.end(); ++iterst)
	{
		
		if (i == m)
		{
			cst = iterst;
			while (n != 0)
			{	
					 **iterst++;
					 n--;
			}
			rst = iterst;
		}
		i++;

	}
	st.erase(cst,rst);
	cout << endl << endl << endl;
	for (iterst = st.begin(); iterst != st.end(); ++iterst)
	{
		cout << **iterst << " ";
	}
	cout << endl;
	for (start = MyList.begin(); start != MyList.end(); ++start)
	{
		cout << **start << " ";
	}

	cout << endl;

	for (start = MyList.begin(); start != MyList.end(); ++start)
	{
		st.emplace(start->get());
	}
	for (iterst = st.begin(); iterst != st.end(); ++iterst)
	{
		cout << **iterst << " ";
	}

	system("pause");
	exit(0);
	return 0;
}