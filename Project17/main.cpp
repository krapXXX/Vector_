#include<iostream> 
#include"Vector.h" 
using namespace std;

int main()
{
	srand(time(0));

	Vector obj1(5); //-------------  1 2 3 4 5 
	obj1.InputRand();
	obj1.Print();

	//Vector obj2 = obj1 - 2;// 1 2 3
	//obj2.Print();
	//obj1.Print();

	Vector obj3 = ++obj1; // obj4 = 0 1 2 3 4 5   obj1 = 0 1 2 3 4 5 
	obj3.Print();
	obj1.Print();
	Vector obj4 = obj1++; // obj5 = 1 2 3 4 5     obj1 = 0 1 2 3 4 5 
	obj4.Print();
	obj1.Print();
	Vector obj5 = obj1--;
	obj5.Print();
	obj1.Print();
	Vector obj6 = --obj1;
	obj6.Print();
	obj1.Print();

	//Vector obj7 = obj1 - 2;// 1 2 3    
	//obj7.Print();
	//obj1.Print();
	//Vector obj8 = obj1 + 5; // 1 2 3 4 5 0 0 0 0 
	//obj8.Print();
	//Vector obj9(2);// 10 20
	//obj9.InputRand();
	//obj9.Print();
	//Vector obj10 = obj1 + obj9; // 1 2 3 4 5 10 20
	//obj10.Print();
	//Vector obj11 = obj1 * 3; // 3 6 9 12 15 
	//obj11.Print();

	Vector obj12(3);
	obj12.InputRand();
	obj12.Print();
	obj12 += 5;
	obj12.Print();
	obj12 -= 5; // количество уменьшаем на 5 если тек. размер >=5,иначе ничего не делаем
	obj12.Print();
	obj12 *= 5; // каждый элемент умножаем на 5, возвращаем массив после изменения
	obj12.Print();
}