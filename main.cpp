/*Task 1. Display on the screen all numbers from zero to the number entered by the user.*/
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Enter a number : ";
	cin >> x;
	for (int i = 0; i <= x; i++) 
	{
		cout << i << "\t";
	}
	return 0;
}