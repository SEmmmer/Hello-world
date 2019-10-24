//
// Created by 杨靖华 on 2019/10/18.
#include "8 to 10 to 8.h"
//2019114465杨靖华
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int x = 0;
    int y;
    int z = 0;
    char c;

    cout << "2019114465杨靖华" << endl;
    cout << "Please Choose " << '\n' << "a: 08 to 10 " << '\n' << "b: 10 to 08 " << endl;
    cin >> c;

    if (c == 'a') {
        goto eten;
    } else {
        if (c == 'b') {
            goto teight;
        }
    }

    eten:
    cout << "You are using a 8->10 translator " << endl;
    cout << "Please input a number" << endl;
    cin >> n;
    y = n % 10;
    while (y != 0) {
        n = n / 10;
        x = x + y * pow(8, z);
        z = z + 1;
        y = n % 10;
    }
    cout << "We get " << x << endl;

    teight:
    cout << "You are using a 10->8 translator " << endl;
    cout << "Please input a number" << endl;
    cin >> n;
    y = n % 8;
    while (y != 0) {
        n = n / 8;
        x = x + y * pow(10, z);
        z = z + 1;
        y = n % 8;
    }
    cout << "We get " << x << endl;

    return 0;
}