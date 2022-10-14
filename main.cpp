/*The user enters two range limits. Calculate the sum of all numbers in a range*/
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	  cout << "Enter 1 number of the range: ";
	  cin >> x;
	  cout << "Enter 2 number of the range: ";
	  cin >> y;
	int suma = 0;
	int i = x;
	while (i <= y)
	{
		suma += i;
		i++;
	}
	cout << "Suma : " << suma << endl;
	return 0;
}