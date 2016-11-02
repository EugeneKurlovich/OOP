#include <iostream>
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
	operator bool();
	void push(st x);
	st pop();
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
		 return 0;
	 }



	friend st operator >(Stack &A, Stack &B)
	 {
		 B = A;
		 return B;
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
	top = top->next;
	size--;

	cout << "Извлечённый элемент " <<top->value << endl;
	return topValue;
}

template <typename st>
Stack<st>::operator bool() {
	Stack *temp = top;

	if (temp != 0)
		return true;
	else
		return false;
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
	cout << i << "элементов больше чем заданный" << endl;
	
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

	min(A);
	
	

	system("pause");
	return 0;
}

