//
// Created by Shirakami Emmmer on 2019/11/15.
//

#include ".h/gedebaHe.h"
#include <iostream>
#include <iomanip>
#include ".h/printID.h"

template <typename T>
T max(T a, T b) { return a > b ? a : b; }

template<typename T>
int findMax(T array, int m, int n) {
    for (int i = 0; i < n; ++i) {
        if (m == array[i]) { return i; }
    }
    throw std::runtime_error("can't reach");
}

template<typename T>
T min(T a, T b) { return a < b ? a : b; }

template<typename T>
int findMin(T array, int o, int n) {
    for (int i = 0; i < n; ++i) {
        if (o == array[i]) { return i; }
    }
    throw std::runtime_error("can't reach");
}

bool isPrime(int p) {
    for (int i = 2; i < p; ++i) {
        int n = p % i;
        if (n == 0) { return false; }
    }
    return true;
}

void backOut(const int *a, int n) {
    for (int i = n; i >= 0; i -= 1) {
        if (a[i] != 0) {
            std::cout << std::setw(10) << a[i];
        }
    }
}

void outMin(const int *a, int n) {
    int i = 0;
    int o = a[i];
    for (; i < n; ++i) {
        o = min(o, a[i]);
    }
    std::cout << "Min = a[" << findMin(a, o, n) << "] = " << o << std::endl;
}

void outMax(const int *a, int n) {
    int m = 0;
    for (int i = 0; i < n; ++i) {
        m = max(m, a[i]);
    }
    std::cout << "Max = a[" << findMax(a, m, n) << "] = " << m << std::endl;
}

int main() {
    int *a;
    int *b;//creat
    int n;
    std::cout << "你想输入几个数？" << std::endl;
    std::cin >> n;
    if (n <= 0) {
        std::cout << "error!" << std::endl;
        exit(1);
    } else {
        a = new int[n];
        b = new int[n];
        if (a == nullptr || b == nullptr) { return -1; }
    }

    std::cout << "请输入" << n << "个数" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    for (int l = 0; l < n; ++l) {
        if (isPrime(a[l])) { b[l] = a[l]; }
    }

    outMax(a, n);
    outMin(a, n);
    backOut(b, n);
    return 0;
}
