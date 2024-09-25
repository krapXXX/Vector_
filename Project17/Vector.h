#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();
	Vector(const Vector& obj);
	Vector(int s);
	void InputRand();
	void Print();
	void PushBack(int a);
	int PopBack();
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