#pragma once
class Vector
{
	int* arr;
	int size;
	friend istream& operator>>(istream& is, Vector& obj);
	friend ostream& operator<<(ostream& os, Vector& obj);
public:
	Vector();
	~Vector();
	Vector(const Vector& obj);
	Vector(int s);
	void InputRand();
	void Print();
	void PushBack(int a);
	int PopBack();
	int* GetArr();
	int GetSize();
	void SetArr(const int* Arr);
	void SetSize(const int size);
	Vector operator-(int a);
	Vector operator+(int a);
	Vector operator+(Vector a);
	Vector operator*(int a);
	Vector operator ++ (int a);
	Vector& operator ++ ();
	Vector operator -- (int a);
	Vector& operator -- ();
	Vector& operator +=(int a);
	Vector& operator -=(int a);
	Vector& operator *=(int a);
	Vector& operator =(const Vector& a);
	/// перегрузки операции Vector operator-(int a);
};