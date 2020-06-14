/* Ќаписать программу, котора€ находит длину последовательности с самым больших количеством
подр€д идущих чисел, дел€щихс€ на 3. */

#include <iostream>

#define N 7
using namespace std;

int main()
{
	int i, y, x;
	int A[N];

	for (i = 0; i < N; i++)
		cin >> A[i];
	x = 0;
	y = 0;
	for (i = 0; i < N; i++)
	{
		if ((A[i] % 3) == 0)
		{
			x++;	// 3 6 3 1 6 9 6 6
		} 
		else
		{
			if (x >= y)
			{
				y = x;
			}
			x = 0;
		}
	}
	if (x > y)
	{
		cout << x;
	}
	else
	{
		cout << y;
	}
	system("pause");
	return 0;
}