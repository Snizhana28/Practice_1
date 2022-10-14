
/*The user enters two limits of the range, display all numbers from this range. Predict,
so that the user can enter arbitrary range limits
of order
■ output all even numbers from the range.
■ output all odd numbers from the range.
■ output all numbers that are multiples of seven.*/
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter 1 number of the range: ";
	cin >> x;
	cout << "Enter 2 number of the range: ";
	cin >> y;
	if (x > y)
	{
		int z = x;
		x = y;
		y = z;
	}
	for (int i = x; i <= y; i++)
	{
		cout << i << " : ";
		if (i % 2 == 0) 
		{
			cout << "even";
		}
		if (i % 2 != 0)
		{
			cout << "odd";
		}
		if (i % 7 == 0)
		{
			 cout << " %7";
		}
		cout << endl;
	}
	return 0;
}