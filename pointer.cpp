//
// Created by Shirakami Emmmer on 2019/11/15.
//

#include ".h/pointer.h"
#include <iostream>

using namespace std;

int main() {
    int num;
    int i;
    cin >> num;
    for (i = 0; num > 0; ++i) {
        cout << num % 10;
        num /= 10;
    }
    cout << "\n" << i;
}
