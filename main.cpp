/*Task 4. The user enters numbers from the keyboard. Calculate their sum and display it on the screen as soon as the user
will enter zero.*/
#include <iostream>
using namespace std;

int main()
{
	int i;
	int suma = 0;
	for (;;) 
	{ 
		cout << "Enter a number : ";
		cin >> i;
	
		if (i == 0)
			break;
		else
			suma += i;
	}
	cout << "Suma : " << suma << endl;
	return 0;
}