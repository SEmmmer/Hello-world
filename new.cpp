//
// Created by Shirakami Emmmer on 2019/11/1.
//

#include "new.h"
#include <iostream>
template <typename T>
bool isPrime(T p) {
    for (int i = 2; i < p; ++i) {
        int n = p % i;
        if (n != 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int p) {
    for (;;) {
        p = p + 1;

        if (isPrime(p)){
            return p;
        }
    }
}

int nextPrime() {
    return nextPrime(1);
}

int main() {
    return 0;
}