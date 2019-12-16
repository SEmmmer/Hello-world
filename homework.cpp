//
// Created by Shirakami Emmmer
//
#include ".h/printID.h"
#include ".h/homework.h"
#include <iostream>
#include <iomanip>
#include <cmath>

template<typename T>
void out(T array, int p) {
    for (int i = 0; i < p; ++i) {
        std::cout << std::setw(10) << *(array++);
    }
    std::cout << std::endl;
}

double factorial(int n) {
    if (n < 0) { throw std::runtime_error("fuck"); }
    if (n == 0) { return 1; }
    return n * factorial(n - 1);
}

template<typename T>
void calculate(T array, int n, int x) {
    double temp = 0.0;
    for (int i = 0; i < n; ++i) {
        temp = pow(static_cast<double >(x), static_cast<double >(i + 1)) / factorial(i + 1);
        *array = temp;
        array++;
    }
    out(array, n);
}

template<typename T>
double sum(T array, int n) {
    double sum = 0.0;
    for (int i = 0; i < n; ++i) { sum += *array++; }
    return sum;
}

int main() {
    printID();
    int n = 0;
    int x = 0;
    std::cout << "n,x";
    std::cin >> n;
    std::cin >> x;
    double *p = new double[n];
    for (int i = 0; i < n; ++i) {
        p[i] = i + 1;
    }
    out(p, n);
    calculate(p, n, x);


    return 0;
}

