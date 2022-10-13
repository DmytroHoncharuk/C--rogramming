#include <iostream>
#include<ctime>
#include <iomanip>
using namespace std;


void change(int* pa, int* pb) //*pa, *pb  - змінні, які приймають адресу в пам'яті, яку має змінна, яку ми передаємо
{
	// *pa = 17- розкодування змінної з адреси на дані, що містяться в тій комірці пам'яті
   // *pb 39 - аналогічно *pa
	int c;
	c = *pa; //присвою значення а цій змінні
	*pa = *pb; // pa=39, pb=39
	*pb = c; //  скажу, що с доріснює pb
}
void main()
{
	int a = 17;
	int b = 39;

	cout << a << endl;
	cout << b << endl<<endl;
	change(&a, &b); //& - амперсант дає змогу передавати саме адресу пам'яті, а не самі дані
	cout <<a << endl;
	cout <<b << endl;

}


