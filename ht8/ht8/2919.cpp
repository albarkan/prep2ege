/* В массиве хранится информация о годе рождения каждого из 30 человек. Определите порядковый номер самого старшего по возрасту человека. Если таких человек несколько, нужно вывести их порядковые номера. */

#include <iostream>
#define N 6

using namespace std;

int task2919()              // ???
{
    int arr[N];
    int i, j, maxAge;
    j = 0;
    maxAge = 0;
    
    for (i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < N - 1; i++)            // 12 4 45 1 4 45
    {
        j++;
        if (arr[i] > maxAge)
        {
            maxAge = j;
        }
    }
    cout << maxAge;
    return 0;
}
