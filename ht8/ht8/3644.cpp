/* Опишите на русском языке или одном из языков программирования алгоритм вычисления разности максимального среди элементов, имеющих четные значения, и 
максимального среди элементов, имеющих нечетные значения, в заданном целочисленном массиве из 30 положительных элементов (в предположении, что в массиве есть и четные, и нечетные элементы). */

#include <iostream>
#define N 6

using namespace std;
int task3644()
{
    int arr[N];
    int i, maxOdd, maxEven;
    maxOdd = 0;
    maxEven = 0;
    
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    for (i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0 && arr[i] > maxEven)
        {
            maxEven = arr[i];
        }
        if (arr[i] % 2 != 0 && arr[i] > maxOdd)
        {
            maxOdd = arr[i];
        }
    }
    cout << maxEven - maxOdd;
    return 0;
}

