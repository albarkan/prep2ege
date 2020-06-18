#include "25.1.h"

void task7797()
{
	int const size = 5;
	int array[size];
	
	for (int i = 0; i < size; ++i)
	{
		cin >> array[i];
	}

	int amount = 0;
	for (int i = 0; i < size - 1; ++i)
	{
		int sum = array[i] + array[i + 1];
		int prod = array[i] * array[i + 1];
		
		if (sum % 6 != 0 && prod < 1000)
		{
			++amount;
		}
	}
	cout << amount;
}