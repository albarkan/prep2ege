#include <iostream>
#define N 6

using namespace std;

int main()
{
	int max1 = -31000;
	int max2 = -31000;
	int min1 = 31000;
	int min2 = 31000;

	int number = -1;

	while (number != 0)
	{
		cin >> number;

		if (number == 0)
		{
			break;
		}

		if (number >= max1)
		{
			max2 = max1;
			max1 = number;
		}
		else if (number > max2)
		{
			max2 = number;
		}

		if (number <= min2)
		{
			min1 = min2;
			min2 = number;
		}
		else if (number < min1)
		{
			min1 = number;
		}
	}
	cout << min1 + min2 + max1 + max2;
	system("pause");
	return 0;
}