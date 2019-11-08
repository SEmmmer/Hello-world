//
// Created by Shirakami Emmmer on 2019/11/1.
//

//#include "new.h"
#include <iostream>
#include ".h/printID.h"


template<typename T>
bool isPrime(T p) {
    for (int i = 2; i < p; ++i) {
        int n = p % i;
        if (n == 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int p) {
    for (;;) {
        p = p + 1;
        if (isPrime(p)) {
            return p;
        }
    }
}

int main() {
    int n;
    printID();
    std::cout << "请输入一个数：";
    std::cin >> n;
    std::cout << n << " = ";
    int prime = 2;
    for (; n != prime;) {
        if (n % prime == 0) {
            n = n / prime;
            std::cout << prime << " * ";
        } else {
            prime = nextPrime(prime);
            if (prime == n) {
                std::cout << n << std::endl;
            }
        }

    }
    return 0;
}