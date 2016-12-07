#include "stdafx.h"
#include "Land.h"

template<typename T, template <typename> typename functor>
class MyOwnFunctor
{
public:
	MyOwnFunctor(functor<T> f) :func(f) {};
	functor<T> func;
	int operator()(const T &t1, const T &t2) const
	{
		return func(t1, t2) + 1;
	}
};

int main()
{

	//1
	setlocale(LC_ALL, "Russian");	
	set<Land> mySet;
	set<Land>::iterator itset;
	mySet.emplace(Land(4.5));
	mySet.emplace(Land(5.5));
	mySet.emplace(Land(1.5));
	mySet.emplace(Land(2.5));
	mySet.emplace(Land(3.5));

	copy(mySet.begin(), mySet.end(), ostream_iterator<Land>(cout, " "));
	cout << endl;



	//2
	set<Land>::reverse_iterator ritset;
	ritset = find(mySet.rbegin(), mySet.rend(), Land(3.5));
	cout << *ritset << endl;
	

	//3
	list<Land> myList;
	list <Land> ::iterator itlist;

	for (auto i : mySet)
	{
		if (i < Land(3.5))
		{
			myList.push_back(i);
		}

	}

	auto startDel = mySet.find(3.5);
	mySet.erase(mySet.begin(), startDel);

	list<Land>::reverse_iterator ritlist;
	for (ritlist = myList.rbegin(); ritlist != myList.rend(); ++ritlist)
		cout << *ritlist << "  ";
	cout << "\n";
	for (itset = mySet.begin(); itset != mySet.end(); ++itset)
		cout << *itset << "  ";
	cout << "\n\n";

	//4

	for (itset = mySet.begin(); itset != mySet.end(); ++itset)
		cout << *itset << "   ";
	cout << "\n";
	for (itlist = myList.begin(); itlist != myList.end(); ++itlist)
		cout << *itlist << "   ";
	cout << "\n\n";


	//5

	list<Land> sliyanie;
	copy(mySet.begin(), mySet.end(), back_inserter(sliyanie));
	copy(myList.begin(), myList.end(), back_inserter(sliyanie));
	copy(sliyanie.begin(), sliyanie.end(), ostream_iterator<Land>(cout, "  "));
	cout << "\n\n";

	//6


	int counter = 0;
	for (auto i : sliyanie)
	{
		if (i < Land(5.5))
		{
			counter++;
		}
	}
	cout << counter << endl << endl;

	//7
	string a("Text");
	string copya(a);//копирующий
	cout << copya << endl;
	string n(10, '*');//заполнение n символами
	cout << n << endl;
	string a_3(a, 0, 4);//c n позиции k символов
	cout << a_3 << endl << endl;
	cout << a.size() << endl;//длина строки
	a.resize(15, 'z');//изм размера и зап символом
	cout << a << endl;
	cout << a.substr(5, 5) << endl;


	//8
	vector<int> aa = { 2,3,6,7,1};
	vector<int> bb = {3,1,2,7,4};
	vector<int> cc = { 0,0,0,0,0 };
	copy(aa.begin(), aa.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	copy(bb.begin(), bb.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	auto fc = std::plus<int>();
	std::transform(aa.begin(), aa.end(), bb.begin(), bb.begin(), MyOwnFunctor<int, std::plus>(fc));
	copy(cc.begin(), cc.end(), ostream_iterator<int>(cout, " "));																	//норм
	cout << endl;
	cout << "Binder\n";
	binder2nd< less<int> > less_than(less<int>(), 4);
	int itw = count_if(bb.begin(), bb.end(), less_than);

	cout << itw << endl;
	binder1st< less<int> > more_than(less<int>(), 4);
	int itwj = count_if(bb.begin(), bb.end(), more_than);
	cout << itwj << endl;


	system("pause");
    return 0;
}

