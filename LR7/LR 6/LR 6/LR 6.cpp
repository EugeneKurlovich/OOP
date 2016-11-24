#include <iostream>
using namespace std;

class Land
{
public:

	double area;
	Land();
	void SetArea();
	~Land();
	friend bool   operator > (Land B, Land C)
	{
		if (B.area > C.area)
			return true;
		else return false;
	}
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

	//template <typename st>
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
	if (!top) {
		std::cout << "Stack is empty." << std::endl;

		return -1;
	}

	st topValue = top->value;
	size--;

	cout << "Извлечённый элемент " <<top->value << endl;
	return topValue;
}



template <typename st>
void Stack<st>::out()
{
	Stack *temp = top;
	while (temp != NULL)
	{
		std::cout << temp->value << std::endl;
		temp = temp->next;
	}

	delete temp;
}


template <typename st>
int min (Stack<st> A, st el)
{

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
	cout << i << "элементов больше чем заданный" << endl;
	return i;
}

int main() {
	setlocale(LC_ALL, "Russian");
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
	
	Land C,D,E;
	C.SetArea();
	D.SetArea();
	E.SetArea();

	Stack <Land> F;
	F.push(C);
	F.push(D);
	F.push(E);

	
	F.out();

	min(F,C);
	
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

	system("pause");
	return 0;
}

