#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int number = 0;
	int go = 0;

	srand(time(NULL));

	cout << "\t\tGame\"Guess the number\"." "\n\n" "The program guesses a number from 1 to 500. Try to guess it""\n"
		"if you are tired of guessing the number of outputs = 0""\n\n";
	int secret_num = rand() % 500 + 1;
	unsigned int start_time = clock();

	do {
		cout << "Guess the number (from 1 to 500):";
		cin >> number;
		if (number < 0 || number >500)
		{
			cout << "The value is not in a number range\n\n";
		}
		else if (number == 0)
		{
			break;
		}
		else if (secret_num < number)
		{
			cout << "Hint: the number conceived by the computer is smaller.\n\n";
		}
		else if (secret_num > number)
		{
			cout << "Hint: the number conceived by the computer is larger.\n\n";
		}
		go++;
	} while (secret_num != number);

	unsigned int end_time = clock();
	unsigned int used_time = end_time - start_time;
	if (number == 0)
	{
		cout << "You are out of the game.\n\n";
	}
	else
	{
		cout << "You guessed the number. It's good!\n\n";
	}
	cout << "You have spent " << go << " try and " << used_time / 1000 << " seconds." "\n";
	return 0;
}