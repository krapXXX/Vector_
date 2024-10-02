#include "Vector.h"
#include<iostream>
#include<Windows.h>
using namespace std;

Vector::Vector()
{
	arr = nullptr;
	size = 0;
}
Vector::Vector(int s)
{
	size = s;
	arr = new int[size] {0};
}
Vector::~Vector()
{
	cout << "Destructor\n";
	delete[]arr;
	size = 0;

}
Vector::Vector(const Vector& obj)
{
	cout << "Copy constructor\n";
	this->size = obj.size;
	this->arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		this->arr[i] = obj.arr[i];
	}
}
void Vector::InputRand()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20; // [-20 +20]
	}
}
void Vector::Print()
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "\n---------------------------------------------------\n";
}

void Vector::PushBack(int a)
{
	int* temp = new int[size + 1];  // ñîäàåì íîâûé ìàññèâ (òåê ðàçìåð +1)

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i]; // êîïèðóåì òåêóùèå çíà÷åíèÿ ñòàðîãî ìàññèâà â íîâûé ìàññèâ
	}
	temp[size] = a; // èíèöèàëèçàöèÿ ïîñëåäíåãî ýëåìåíòà ïàðàìåòðîì ìåòîäà

	delete[] arr; // óäàëåíèå ñòàðîãî ìàññèâà!

	arr = temp; // ïåðåíàïðàâëÿåì óêàçàòåëü â îáúåêòå íà íîâûé äèí. ìàññèâ
	size++;

}

int Vector::PopBack()
{
	int* temp = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	int el = arr[size - 1]; // äîñòàåì ïîñëåäíèé ýëåìåíò ñòàðîãî ìàññèâà ÄÎ óäàëåíèÿ

	delete[] arr;
	arr = temp;
	size--;

	return el;
}

int* Vector::GetArr()
{
	return arr;
}

int Vector::GetSize()
{
	return size;
}

void Vector::SetArr(const int* Arr)
{
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = Arr[i];
	}
}

void Vector::SetSize(const int Size)
{
	size = Size;
}

Vector Vector::operator- (int a)
{
	Vector rez(size - a);
	for (int i = 0; i < rez.size; i++)
	{
		rez.arr[i] = this->arr[i];
	}
	return rez;
}

Vector Vector::operator+(int a)
{
	Vector rez(size + a);
	for (int i = 0; i < size; i++)
	{
		rez.arr[i] = this->arr[i];
	}
	for (int i = size; i < rez.size; i++)
	{
		rez.arr[i] = rand() % 41 - 20;
	}
	return rez;
}

Vector Vector::operator+(Vector a)
{
	Vector rez(this->size + a.size);
	for (int i = 0; i < this->size; i++)
	{
		rez.arr[i] = this->arr[i];
	} for (int i = 0; i < a.size; i++)
	{
		rez.arr[this->size + i] = a.arr[i];
	}
	return rez;
}

Vector Vector::operator*(int a)
{
	Vector rez(size * a);
	for (int i = 0; i < size; i++)
	{
		rez.arr[i] = this->arr[i];
	}
	for (int i = size; i < rez.size; i++)
	{
		rez.arr[i] = rand() % 41 - 20;
	}
	return rez;
}

Vector Vector::operator++(int)//a++ 
{
	Vector temp = *this;
	int* temp1 = new int[size + 1];
	temp1[0] = rand() % 41 - 20;
	for (int i = 1; i < size + 1; i++)
	{
		temp1[i] = arr[i - 1];
	}
	delete[] arr;
	arr = temp1;
	size++;
	return temp;
}

Vector& Vector::operator++()//++a 
{
	int* temp = new int[size + 1];

	for (int i = 1; i < size + 1; i++)
	{
		temp[i] = arr[i - 1];
	}
	temp[0] = rand() % 41 - 20;

	delete[] arr;
	arr = temp;
	size++;
	return *this;
}

Vector Vector::operator--(int a)
{
	Vector temp = *this;
	int* temp1 = new int[size - 1];
	for (int i = 0; i < size - 1; i++)
	{
		temp1[i] = arr[i + 1];
	}
	delete[] arr;
	arr = temp1;
	size--;
	return temp;
}

Vector& Vector::operator--()
{
	int* temp = new int[size - 1];

	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i + 1];
	}
	delete[] arr;
	arr = temp;
	size--;
	return *this;
}

Vector& Vector::operator+=(int a)
{
	Vector temp = *this;
	int* temp1 = new int[size + a];
	for (int i = 0; i < size; i++)
	{
		temp1[i] = arr[i];
	}
	for (int i = size; i < size + a; i++)
	{
		temp1[i] = rand() % 41 - 20;
	}
	delete[] arr;
	arr = temp1;
	size += a;
	return temp;
}

Vector& Vector:: operator -=(int a)
{
	if (a < size)
	{
		Vector temp = *this;
		int* temp1 = new int[size - a];
		for (int i = 0; i < size - a; i++)
		{
			temp1[i] = arr[i];
		}
		delete[] arr;
		arr = temp1;
		size -= a;
		return temp;
	}
}
Vector& Vector::operator *=(int a)
{
	Vector temp = *this;
	int* temp1 = new int[size];
	for (int i = 0; i < size; i++)
	{
		temp1[i] = arr[i] * a;
	}
	delete[] arr;
	arr = temp1;
	return temp;
}
Vector& Vector::operator=(const Vector& a) 
{
	if (this == &a) {
		return *this;
	}
	if (arr != nullptr) {
		delete[]arr;
	}
	size = a.size; arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = a.arr[i];
	} return *this;
}

