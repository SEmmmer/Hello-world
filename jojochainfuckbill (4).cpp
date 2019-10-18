
// Created by 杨靖华 on 2019/10/11.
#include "jojochainfuckbill (4).h"
#include <iostream>
#include <iomanip>
using namespace std;

int main4() {
    int b = 1;//identify a middle number i
    int a = 1;
//Now we start output the first line
    while (a <= 9) {
        while (b <= 9) {
            cout << a << '*' << b << '=' << setw(2) << a * b << " ";
            b = b + 1;
        }
        a = a + 1;
        b = a;
        cout << " " << endl;
    }
    return (0);

}