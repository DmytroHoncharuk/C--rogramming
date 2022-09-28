#include <iostream>
using namespace std;

/*int main()
{
	int n=1, orientation, count;
	char a;
	cout << "Write any sign what you want" << endl;
	cin >> a;
	cout << "1. Horizontal line" << endl<< "2. Vertical line" << endl; 
	cin >> orientation;
	cin >> count;
	switch (orientation)
	{
   	case 1:
			while (n<=count)
			{
				cout << a;
				n++;
			}
	case 2:
		while (n <= 20)
		{
			cout <<"          " << a << endl;
			n++;
		}
	default:
		break;
	}*/

int main()
{
	int min, max;
	int sum{};
	cout << "Write minimum number of the range" << endl;
	cin >> min;
	cout << "Write maximum number of the range" << endl;
	cin >> max;
	do
	{
		if (min%2!=0)
		{
			sum += min;
			min++;
		}
	} while (min < max);

	
	
}
