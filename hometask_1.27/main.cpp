#include <iostream>

using namespace std;
void task_5503();
void task_6971()
void task_13373();
int main()
{
    task_5503();
}

void task_5503()
{
    int kr2 = 0;
    int kr7 = 0;
    int kr14 = 0;
    int max = 0;
    int r = 0;
    int seq = 0;
    int size = 0;
    int productkr14 = 0;
    
    cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        cin >> seq;
        if (seq % 2 == 0 && seq % 7 != 0 && seq > kr2)
        {
            kr2 = seq;
        }
        else if(seq % 2 != 0 && seq % 7 == 0 && seq > kr7)
        {
            kr7 = seq;
        }
        else if(seq % 14 == 0 && seq > kr14)
        {
            kr14 = seq;
        }
        else if (seq > max)
        {
            max = seq;
        }
    }
    cin >> r;
    if (kr2 * kr7 < kr14 * max)
    {
        productkr14 = kr14 * max;
    }
    else
    {
        productkr14 = kr2 * kr7;
    }

    if (kr2 * kr14 > productkr14)
    {
        productkr14 = kr2 * kr14;
    }

    if (kr7 * kr14 > productkr14)
    {
        productkr14 = kr7 * kr14;
    }

    cout << "counted main value" << productkr14;
    if (r == productkr14)
    {
        cout << "value reached";
    }
    else
    {
        cout << "value not reached";
    }
}


void task_6971()
{
    int kr2 = 0;
    int kr5 = 0;
    int notKr10 = 0;
    int r = 0;
    int seq = 0;
    int size = 0;
    int productkr10 = 0;
    
    cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        cin >> seq;
        if (seq % 2 != 0 && seq % 5 == 0 && seq > kr2)
        {
            kr2 = seq;
        }
        else if (seq % 2 == 0 && seq % 5 != 0 && seq > kr5)
        {
            kr5 = seq;
        }
        else if (seq % 10 != 0 && seq > notKr10)
        {
            notKr10 = seq;
        }
    }
    cout << "size =" << size;
    cin >> r;
    if (notKr10 % 2 != 0)
    {
        productkr10 = notKr10 * kr5;
    }

    if (notKr10 % 5 != 0 && productkr10 < notKr10 * kr2)
    {
        productkr10 = notKr10 * kr2;
    }

    cout << "counted main value" << productkr10;
    if (r == productkr10)
    {
        cout << "value reached";
    }
    else
    {
        cout << "value not reached";
    }
}

void task_13373()
{
    int kr2 = 0;
    int kr13 = 0;
    int kr26 = 0;
    int max = 0;
    int r = 0;
    int seq = 0;
    int size = 0;
    int productkr26 = 0;
    
    cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        cin >> seq;
        if (seq % 2 == 0 && seq > kr2)
        {
            kr2 = seq;
        }
        else if(seq % 13 == 0 && seq > kr13)
        {
            kr13 = seq;
        }
        else if(seq % 26 == 0 && seq > kr26)
        {
            kr26 = seq;
        }
        
        if (kr26 > max)
        {
            max = seq;
        }
    }
    cin >> r;
    if (kr2 * kr13 < kr26 * max)
    {
        productkr26 = kr26 * max;
    }
    else
    {
        productkr26 = kr2 * kr13;
    }
    cout << "counted main value" << productkr26;
    if (r == productkr26)
    {
        cout << "value reached";
    }
    else
    {
        cout << "value not reached";
    }
}

