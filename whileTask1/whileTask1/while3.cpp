/* While3. Даны целые положительные числа N и K. Используя только операции сложения и вычитания, найти частное от деления нацело N на K, а также остаток от этого деления. */

#include <iostream>

using namespace std;

int while3()
{
    int n, k, t = 0;
    
    cin >> n >> k;
    while (n - k >= 0)
    {
        t++;
    }
    cout << "Частное от деления: " << t;
    return 0;
}
