//
//  2920(25).cpp
//  practisingTest1(24-27)
//
//  Created by barkanoid on 06.03.2020.
//  Copyright © 2020 barkanoid. All rights reserved.
//

#include <stdio.h>
/* Определить есть ли в массиве из 30 элементов хотя бы одна тройка соседних чисел, в которой средний элемент больше своих "соседей", т. е. предшествующего и последующего. В случае положительного ответа определить номера элементов первой из таких троек. Результат вывести на экран. */

#include <iostream>

using namespace std;
#define N 6
int task2920()
{
    int arr[N];
    int i, j, h = 0, k = 0, n = 0;
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    j = 0;
    for (i = 0; i < N - 2; i++)
    {
        if (arr[i + 2] < arr[i + 1] && arr[i + 1] > arr[i])
        {
            j = 1;
            h = i;
            k = i + 1;
            n = i + 2;
        }
    }
    if (j == 1)
    {
        cout << h << " " << k << " " << n;
    }
    else
    {
        cout << "such elements were not found";
    }
    return 0;
}
