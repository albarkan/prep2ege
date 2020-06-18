#include <iostream>

using namespace std;

#define N 6
/*максимальный чётный элемент, если количество чётных элементов не меньше, чем нечётных;
-максимальный нечётный элемент, если количество нечётных элементов больше, чем чётных.*/
int task7936()
{
	int a[N];
	int i, j, k, m;
	for (i = 0; i < N; i++)
		cin >> a[i];

	m = 0;
	k = 0;
	j = 0;

	for (i = 0; i < N; i++)
	{
		if (a[i] > m && a[i] % 2 == 0)
		{
			m = a[i];
		}
		if (a[i] > k && a[i] % 2 != 0)
		{
			k = a[i];
		}
		if (a[i] % 2 == 0)
		{
			j++;
		}
	}
	
	if (j >= N - j)
	{
		cout << m;
	}
	else
	{
		cout << k;
	}

	system("pause");
	return 0;
}