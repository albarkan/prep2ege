#include "25.1.h"

void arrayIn(int* array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cin >> array[i];
	}
}

void arrayOut(int* array, int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << array[i];
	}
}