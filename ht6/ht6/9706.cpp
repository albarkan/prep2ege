 /* Опишите на естественном языке или на одном из языков программирования алгоритм, позволяющий найти и вывести минимальное значение среди трёхзначных элементов массива, делящихся на 7. Если в исходном массиве нет элемента, значение которого является трёхзначным числом и при этом кратно семи, то выведите сообщение «Не найдено». */

#include <iostream>
#define N 6

using namespace std;

int task9706()
{
  int a[N];
  int i, j, min;
  for (i = 0; i < N; i++)
    cin >> a[i];
    min = 10000;
    j = 1;
    
    for (i = 0; i < N; i++)
    {
        if(a[i] >= 100 && a[i] <= 999 && ((a[i] % 7) == 0) && a[i] < min)
        {
            min = a[i];
            j = 0;
        }
    }
    if(j == 1)
    {
        cout << "NOT FOUND";
    }
    else
    {
        if(j == 0)
        {
        cout << min;
        }
    }
    return 0;
}

