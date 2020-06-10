/* В массиве хранится информация о годе рождения каждого из 30 человек. Определите порядковый номер самого старшего по возрасту человека. Если таких человек несколько, нужно вывести их порядковые номера. */

#include <iostream>
#define N 6

using namespace std;

int task2919()              // ???
{
    int years[N];
    int i, oldest;
    oldest = INT_MAX;
    
    for (i = 0; i < N; i++)
    {
        cin >> years[i];
    }

    for (i = 0; i < N; i++)
       {
           if (years[i] < oldest)
           {
               oldest = years[i];
           }
       }
    for (i = 0; i < N ; i++)
    {
        if (years[i] == oldest)
        {
            cout << i << " ";
        }
    }
    return 0;
}
