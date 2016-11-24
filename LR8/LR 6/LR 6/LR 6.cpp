#include <iostream>
#include "Exception.h"
#include <cassert>
using namespace std;

class Land
{
public:
	double area;
	Land();
	void SetArea();
	~Land();
};

Land::Land()
{
	cout << "Конструктор класса Land" << endl;
}

void Land::SetArea()
{
	cout << "Введите площадь суши (кв.км.) : ";
	cin >> area;
	cout << endl;
}

ostream &operator << (ostream &out , Land &obj )
{
	cout << obj.area;

	return out;
}

Land::~Land()
{
	cout << "Деструктор класса Land" << endl;
}

template <typename st>
class Stack
{
public:
	st value;
	int size;
	Stack *top, *next;

	Stack();
	void push(st x);
	st pop();

	friend void operator >(Stack &x, Stack &y);
	void out();
	~Stack();


	template <typename st>
	 st operator +(st y) {
		Stack *newElement = new Stack;
		newElement->value = y;
		newElement->next = top;
		top = newElement;
		size++;
		return 0;
	}

	 st operator --() {
		 if (!top)
		 {
			 std::cout << "Cтек пустой" << std::endl;
			 return -1;
		 }
		 cout << "Извлечённый элемент : " << top->value << endl;
		 return top->value;
	 }

	operator bool() {
		 Stack *temp = top;

		 
			 if (!top)
				 return true;
			 else
		 return false;
	 }

	 friend void operator >(Stack<st> &B, Stack<st> &A)
	 {
		 if (bool(A)) throw exception_five();
		 B = A;
		 st arr[20];

		 for (int i = 0; i < A.size; i++)
		 {
			 arr[i] = B.top->value;
			 B.top = B.top->next;
		 }

		 for (int i = 0; i < A.size; i++)
		 {
			 for (int j = A.size - 1; j > i; j--)
			 {
				 if (arr[j] > arr[j - 1])
				 {
					 swap(arr[j], arr[j - 1]);
				 }
			 }
		 }
		 for (int i = 0; i <A.size; i++)
		 {
			 B.push(arr[i]);
		 }
	 }

};

template <typename st>
void Stack<st>::push(st x)
{

		if (x < 0)
			throw exception_three();
	
	Stack *newElement = new Stack;
	newElement->value = x;
	newElement->next = top;
	top = newElement;
	size++;
}



template <typename st>
Stack<st>::Stack()
{
	size = 0;
	top = NULL;
}

template <typename st>
Stack<st> ::~Stack()
{

}

template <typename st>
st Stack<st>::pop() {
	if (!top) 
		throw exception_one();
	

	st topValue = top->value;
	size--;

	cout << "Извлечённый элемент " <<top->value << endl;
	return topValue;
}

template <typename st>
void Stack<st>::out()
{
	Stack *temp = top;
	if (!top) throw exception_two();
	while (temp != NULL)
	{
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}

	delete temp;
}

void print_assert(int* value)
{
	assert(value != NULL);
	std::cout << "Адрес значения в памяти = "
		<< value << std::endl;
}

template <typename st>
void min (Stack<st> A)
{
	st el;
	cin >> el;
	int i = 0;
	Stack<st> *temp = A.top;
	while  (temp != NULL)
	{

		if (temp->value > el)
		{
			i++;
		}
		temp = temp->next;
	}
	cout << i << " элементов больше чем заданный" << endl;
	
}

int main() {

	setlocale(LC_ALL, "Russian");
	
	try
	{
		cout << "Cтек А (int)" << endl;
		Stack <int> A;
		A + 13;
		A + 1;
		A + 2;
		A + 7;
		A.out();
		--A;
		cout << "Стек Б (double)" << endl;
		Stack <double> B;
		B.push(1.25);
		B.push(2.25);
		B.push(1.7);
		B.push(6.5);
		B.out();
		B.pop();
		/*Land C, D, E;
		C.SetArea();
		D.SetArea();
		E.SetArea();
		Stack <Land> F;
		F.push(C);
		F.push(D);
		F.push(E);
		F.out();*/

		min(A);
		Stack <int> U;
		U > A;
		U.out();
		if (bool(U))
		{
			cout << "Стек пуст" << endl;
		}
		else cout << "Есть элементы" << endl;
		Stack <int>j;
		if (bool(j))
		{
			cout << "Стек пуст" << endl;
		}
		else cout << "Есть элементы" << endl;



		//Исключения :

	/*	j.pop();*/
	/*	j.out();*/
		/*j.push(-1);*/

		//int a = 2, b = 0,c;
		//if (b == 0) throw exception_four();
		//c = a / b;
	/*
		Stack <int> kk;*/
		//kk > j;

		//int pt = 10;
		//int *ptr1 = &pt;
		//int *ptr2 = NULL;

		//print_assert(ptr1);
		//print_assert(ptr2);


	}

	

		catch (exception_one &obj)
		{
			cout << obj.er() << endl;
		}

		catch (exception_two &obj)
		{
			cout << obj.er() << endl;

		}

		catch (exception_three &obj)
		{
			cout << obj.er() << endl;
		}

		catch (exception_four &obj)
		{
			cout << obj.er() << endl;
		}

		catch (exception_five &obj)
		{
			cout << obj.er() << endl;
		}




	system("pause");
	return 0;
}

