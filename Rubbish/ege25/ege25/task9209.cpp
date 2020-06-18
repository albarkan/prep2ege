#include "25.1.h"

void task9209()
{
	int const size = 6;
	int array[size];
	arrayIn(array, size);

	int even = 0;
	int odd = 0;
	int sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += array[i];
		if (array[i] % 2 == 0)
		{
			++even;
		}
		else
		{
			++odd;
		}
	}
	if (sum % 2 == 0)
	{
		cout << even;
	}
	else
	{
		cout << odd;
	}
}