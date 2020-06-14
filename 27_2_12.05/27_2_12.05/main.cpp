#include <iostream>

using namespace std;
void task7684();
int main()
{
	task7684();
	return 0;
}

void task7684()
{
	setlocale(LC_ALL, "Russian");
	int size = 0, seq = 0, maxOdd = 0, maxEven = 0, r = -1;

	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> seq;

		if (seq > maxEven && seq % 2 == 0)
		{
			maxEven = seq;
		}
		else if (seq > maxOdd && seq % 2 != 0)
		{
			maxOdd = seq;
		}
	}
	if (maxEven + maxOdd > r)
	{
		cout << maxOdd + maxEven;
	}
	else
	{
		cout << "Контроль не пройден";
	}
}