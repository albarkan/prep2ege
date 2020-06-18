/* R - наибольшее значение в последовательности, R - сумма двух различных числе пос-ти, R - кратно 3, если такого нет, то вывести -1*/


#include <iostream>

using namespace std;

int task4_by(){
    int seq = 0, size = 0, m1 = 0, m2 = 0, ost1 = 0, ost2 = 0, R = -1;
    
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cin >> seq;
        
        if (seq % 3 == 1 && seq > ost1) {
            ost1 = seq;
        }
        else if (seq % 3 == 2 && seq > m2) {
            ost2 = seq;
        }
        if (seq % 3 == 0 && seq > m1) {
            m2 = m1;
            m1 = seq;
        }
        else if (seq % 3 == 0 && seq > m2) {
            m2 = seq;
        }
    }
    if (ost1 * ost2 > 0) {
        R = ost1 + ost2;
    }
    else if (m1 * m2 > 0 && m1 + m2 > R) {
        R = m1 + m2;
    }
    cout << R;
    return 0;
}
