/* R - наибольшее произведение двух членов последовательности, кратное 6
 количество чисел вводится с клавиатуры*/

#include <iostream>

using namespace std;

int task5_by()
{
    int k = 0, kr2 = 0, kr3 = 0, kr6 = 0, maxany = 0, R = 0;
       int size = 0, seq = 0;
       
       cin >> size;
       
       for (int i = 0; i < size; i++) {
           cin >> seq;
           
           if (seq % 2 == 0 && seq > kr2 && seq % 6 != 0) {
               kr2 = seq;
           }
           else if (seq % 3 == 0 && seq > kr3 && seq % 6 != 0) {
               kr3 = seq;
           }
           else if (seq % 6 == 0 && seq > kr6) {
               kr6 = seq;
           }
           else if (seq > maxany) {
               maxany = seq;
           }
           }
    if (kr2 * kr3 > 0) {
        R = kr2 * kr3;
    }
    else if (kr6 * maxany > 0 && kr6 * maxany > R) {
        R = kr6 * maxany;
    }
    else if (kr6 * kr2 > 0 && kr6 * kr2 > R) {
    R = kr6 * kr2;
    }
    else if (kr6 * kr3 > 0 && kr6 * kr3 > R) {
    R = kr6 * kr3;
    }
    cout << R;
    return 0;
}

// kr2 kr3
// kr6 any
// kr2 kr6
// kr3 kr6
