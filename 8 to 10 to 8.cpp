//
// Created by 杨靖华 on 2019/10/18.
#include "8 to 10 to 8.h"
//2019114465杨靖华
#include <iostream>
#include <cmath>

template<typename Q>
Q etot(Q a) {
    Q mod;
    Q out = 0;
    Q n = 0;

    while (a > 0) {
        mod = a % 10;
        a = a / 10;
        out += static_cast<int>(mod * pow(8.0, static_cast<double>(n)));
        n += 1;
    }
    return out;
}

template<typename B>
B ttoe(B a) {
    B mod;
    B out = 0;
    B n = 0;

    while (a > 0) {
        mod = a % 8;
        a = a / 8;
        out += static_cast<int>(mod * pow(10.0, static_cast<double>(n)));
        n += 1;
    }
    return out;
}

int main() {
    int n;
    std::cout << "2019114465杨靖华" << std::endl;
    std::cout << "输入一个8进制数字: ";
    std::cin >> n;
    std::cout << "该数字转化为10进制为： " << etot(n) << std::endl;
    std::cout << "请输入一个10进制数字： ";
    std::cin >> n;
    std::cout << "该数字转化为8进制为： " << ttoe(n) << std::endl;

    return 0;
}