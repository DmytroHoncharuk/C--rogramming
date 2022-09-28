#include <iostream>
#include<math.h>
using namespace std;

int main()
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
	}

}
