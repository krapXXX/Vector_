#include<iostream> 
#include"Vector.h" 
using namespace std;

Vector operator-(int a, Vector& obj)
{
	int size = obj.GetSize();
	int* arr = obj.GetArr();

	if (a >= size)
	{
		return Vector(0);
	}

	int Size = size - a;

	Vector result(Size);

	for (int i = 0; i < Size; i++)
	{
		result.GetArr()[i] = arr[a + i];
	}

	return result;
}
ostream& operator<<(ostream& os, Vector& obj)
{
	for (int i = 0; i < obj.size; i++)
	{
		os << obj.arr[i] << "\t";
	}
	return os;
}
istream& operator>>(istream& is, Vector& obj)
{
	for (int i = 0; i < obj.size; i++)
	{
		cout << i << ": ";
		is >> obj.arr[i];
	}
	return is;
}

int main()
{
	/*В класс Vector добавляем необходимые глобальные перегрузки:

obj+=5; // в конец вектора добавить 5 элементов
obj-=5;// если размер вектора >=5, уменьшаем размер, в противном случае возвращаем объект !
obj*=5; // меняем значение всех элементов(*5)? размер не меняем!

vector c = 5-obj; // возвращаем новый объект. без 5и первых элементов объекта obj.
например: obj 1 2 3 4 5 6 7 8  9 10
c = 6 7 8 9 10

реализовать перегрузку ввода-вывода(friend)*/
	srand(time(0));



	Vector obj1(5); //-------------  1 2 3 4 5 
	obj1.InputRand();
	obj1.Print();

	//Vector obj2 = obj1 - 2;// 1 2 3
	//obj2.Print();
	//obj1.Print();

	//Vector obj3 = ++obj1; // obj4 = 0 1 2 3 4 5   obj1 = 0 1 2 3 4 5 
	//obj3.Print();
	//obj1.Print();
	//Vector obj4 = obj1++; // obj5 = 1 2 3 4 5     obj1 = 0 1 2 3 4 5 
	//obj4.Print();
	//obj1.Print();
	//Vector obj5 = obj1--;
	//obj5.Print();
	//obj1.Print();
	//Vector obj6 = --obj1;
	//obj6.Print();
	//obj1.Print();

	//Vector obj7 = obj1 - 2;// 1 2 3    
	//obj7.Print();
	//obj1.Print();
	//Vector obj8 = obj1 + 5; // 1 2 3 4 5 0 0 0 0 
	//obj8.Print();
	Vector obj9(2);// 10 20
    obj9.InputRand();
	obj9.Print();
	//Vector obj10 = obj1 + obj9; // 1 2 3 4 5 10 20
	//obj10.Print();
	//Vector obj11 = obj1 * 3; // 3 6 9 12 15 
	//obj11.Print();

	//Vector obj12(3);
	//obj12.InputRand();
	//obj12.Print();
	//obj12 += 5;
	//obj12.Print();
	//obj12 -= 5; // количество уменьшаем на 5 если тек. размер >=5,иначе ничего не делаем
	//obj12.Print();
	//obj12 *= 5; // каждый элемент умножаем на 5, возвращаем массив после изменения
	//obj12.Print();
	Vector obj13(10);
	obj13.InputRand();
	obj13.Print();
	obj13 = obj1 = obj9;
	obj13.Print();
	//check
}