/* В вход программы поступают N  1000 натуральных чисел, каждое из которых не превышает 10000. Необходимо определить количество пар элементов (ai, aj) этого набора, в которых 1 <= i < j <= N, сумма элементов нечётна, произведение делится на 13*/

#include <iostream>

using namespace std;

int task3_by(){
    int seq = 0, size = 0, kr13c = 0, kr13n = 0, n13c = 0, n13n = 0, R = 0;
    
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cin >> seq;
        
        if (seq % 13 == 0 && seq % 2 == 0) {
            kr13c++;
        }
        else if (seq % 13 == 0 && seq % 2 != 0) {
            kr13n++;
        }
        else if (seq % 13 != 0 && seq % 2 == 0) {
            n13c++;
        }
        else if (seq % 13 != 0 && seq % 2 != 0) {
            n13n++;
        }
    }
    R = kr13c * kr13n + kr13c * n13n + kr13n * n13c;
    cout << R;
    return 0;
}
