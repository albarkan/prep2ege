﻿/* Дан целочисленный массив из 40 элементов. Элементы массива могут принимать произвольные значения. Опишите на русском языке или на одном из языков программирования алгоритм,
который находит и выводит значение второго максимума (элемента, который в отсортированном по невозрастанию массиве стоял бы вторым) */

#include <iostream>
#define N 6
using namespace std;
int task3644()
{
    int a[N];
    int i, k, max, max2;
	for (i = 0; i < N; i++)
	{
		cin >> a[i];
	}
	k = 0;
	max = INT_MIN;
	max2 = INT_MIN;

	for (i = 0; i < N; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			i = k;
		}
		
	}
	for (i = 0; i < N; i++)
	{
		if (i != k && a[i] > max2)
		{
			a[i] = max2;
		}
	}
	cout << max << " " << max2 << endl;
}
