#include "25.1.h"

void task11361()
{
	int const size = 5;
	int array[size];

	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
	int amount = 0;
	for (int i = 0; i < size - 1; i++)
	{
		if (array[i] % 10 == 2 || array[i + 1] % 10 == 2)
		{
			++amount;
		}
	}
	cout << amount;
}