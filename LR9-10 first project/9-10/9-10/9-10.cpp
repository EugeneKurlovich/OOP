#include "stdafx.h"

list<int>MyList;
int list_size;
int element;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "���������� ������" << endl;
	cout << "������� ������ ����� : "; cin >> list_size;
	for (int i = 0; i < list_size; i++)
	{
		cout << "������� ������� ������ : "; cin >> element;
		MyList.push_back(element);
	}

	cout << "����� ������" << endl;
	for (int i = 0; i < list_size; i++)
	{
		cout << "������� �" << i+1 << "  " << MyList.front() << endl;
		MyList.pop_front();
	}

	cout << "�������� � ������ ����������" << endl;
	MyList.clear();
	for (int i = 0; i < list_size; i++)
	{
		cout << "������� ������� ������ ��� ������ : "; cin >> element;
		MyList.push_back(element);
	}

	for (int i = 0; i < list_size; i++)
	{
		cout << "������� �" << i + 1 << "  " << MyList.front() << endl;
		MyList.pop_front();
	}

	list<int>MyLists;
	MyLists.push_back(1);
	MyLists.push_back(2);
	MyLists.push_back(3);
	MyLists.push_back(4);
	MyLists.push_back(5);

	copy(MyLists.rbegin(), MyLists.rend(),ostream_iterator<int>(cout," "));
	cout << endl;
	copy(MyLists.cbegin(), MyLists.cend(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	set<int>MySet;

	MySet.insert(7);
	MySet.insert(8);
	MySet.insert(9);
	copy(MySet.begin(), MySet.end(), ostream_iterator<int>(cout, " "));

	int m,n;
	cout << "������� � ������ �������� �������� �������� : "; cin >> m;
	cout << "������� ������� ��������� ������� : "; cin >> n;
	
	list<int>::iterator start;
	start = MyLists.begin();
	
	for (int i = 1; i <=MyLists.size(); i++)
	{
		if (i == m)
		{
			while (n != 0)
			{
				MyLists.erase(start++);
				n--;
			}

			set<int>::iterator star;
			star = MySet.begin();
			for (int i = 0; i < MySet.size(); i++)
			{
				MyLists.push_back(*star);
				star++;
			}
			goto print;
		}
		start++;
	}

	print:
	copy(MyLists.begin(), MyLists.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	copy(MySet.begin(), MySet.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	
	system("pause");
    return 0;
}

