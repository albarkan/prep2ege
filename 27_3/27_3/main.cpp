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
    int size = 0, seq = 0, maxOdd = INT_MIN, maxEven = INT_MIN, r = -1;
    
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
    cout<< maxOdd<< endl << maxEven;
    if (maxEven + maxOdd > r)
    {
    cout << maxOdd + maxEven;
    }
    else
    {
        cout << "Контроль не пройден";
    }
}
