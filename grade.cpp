//
// Created by 杨靖华 on 2019/10/11.
//本项目创建用于测试百分制转五分制

#include "grade.h"
#include <iostream>

using namespace std;

int main() {
    int a;
    int grade;

    cout << "Please enter a number which between 0 and 100." << endl;
    cin >> a;
    if (a > 100 || a < 0) {
        cout << "Please enter correct number!!" << endl;
        exit(1);
    }

    grade = a / 10;

    switch (grade) {
        case 10:
        case 9 :
            cout << "This is grade A" << endl;
            break;
        case 8 :
            cout << "This is grade B" << endl;
            break;
        case 7:
            cout << "This is grade C" << endl;
            break;
        case 6:
            cout << "This is grade D" << endl;
            break;
        default:
            cout << "This is grade E" << endl;
    }

    return (0);
}
