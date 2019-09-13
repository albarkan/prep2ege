#include "25.1.h"

void task7770()
{
	int const size = 5;
	int array[size];

	for (int i = 0; i < size; ++i)
	{
		cin >> array[i];
		// array[i] = (rand() % 21) - 10;
	}

	int amount = 0;
	for (int i = 0; i < size - 1; i++)
	{
		int sum = array[i] + array[i + 1];
		int prod = array[i] * array[i + 1];

		if (prod > 0 && sum % 7 == 0)
		{
			++amount;
		}
	}

	cout << amount;
}