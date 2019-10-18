//
// Created by 杨靖华 on 2019/10/18.
#include "loop5.h"
//2019114465杨靖华
#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    cout << "2019114465杨靖华" << endl;
    cout << "********** New Game **********" << endl;
    cout << "     1. scissors " << endl;
    cout << "     2. stone " << endl;
    cout << "     3. cloth " << endl;
    cout << "******************************" << endl;
    cout << "Please input the code of A and B" << endl;

    cin >> a >> b;
    switch (a) {
        case 1:
            switch (b) {
                case 1:
                    cout << "D R A W" << endl;
                    break;
                case 2:
                    cout << "B WIN" << endl;
                    break;
                default:
                    cout << "A WIN" << endl;
            }
            break;
        case 2:
            switch (b) {
                case 1:
                    cout << "A WIN" << endl;
                    break;
                case 2:
                    cout << "D R A W" << endl;
                    break;
                default:
                    cout << "B WIN" << endl;
            }
            break;
        case 3:
            switch (b) {
                case 1:
                    cout << "B WIN" << endl;
                    break;
                case 2:
                    cout << "A WIN" << endl;
                    break;
                default:
                    cout << "D R A W" << endl;
            }
        default:
            cout << "error" << endl;
    }


    return 0;
}