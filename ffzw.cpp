//
//

#include ".h/ffzw.h"
#include <iostream>
#include <iomanip>

//template<typename T>
class aMax {
private:
    static int find(int *array, int m, int n) {
        for (int i = 0; i < n; ++i) {
            if (m == array[i]) { return i; }
        }
        throw std::runtime_error("can't reach");
    }

    static int com(int a, int b) { return a > b ? a : b; }

public:
    static void out(const int *a, int n) {
        int m = 0;
        for (int i = 0; i < n; ++i) {
            m = com(m, a[i]);
        }
        std::cout << "Max = a[" << find(const_cast<int *>(a), m, n) << "] = " << m << std::endl;
    }
};


class aMin {
private:
    static int find(int *array, int o, int n) {
        for (int i = 0; i < n; ++i) {
            if (o == array[i]) { return i; }
        }
        throw std::runtime_error("can't reach");
    }

    static int com(int a, int b) { return a < b ? a : b; }

public:
    static void out(const int *a, int n) {
        int i = 0;
        int o = a[i];
        for (; i < n; ++i) {
            o = com(o, a[i]);
        }
        std::cout << "Min = a[" << find(const_cast<int *>(a), o, n) << "] = " << o << std::endl;
    }
};


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
    }//现在创建了两个数组
    std::cout << "请输入" << n << "个数" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }//成功为数组a赋值

    aMax::out(a, n);
    aMin::out(a, n);

    //以下为反向输出
    for (int l = 0; l < n; ++l) {
        if (isPrime(a[l])) { b[l] = a[l]; }
    }
    backOut(b, n);
    return 0;
}
