//
// Created by Shirakami Emmmer on 2019/11/22.
//
#include ".h/printID.h"
#include ".h/Fibonacci.h"
#include <iostream>
#include <iomanip>


int fibonacci(int n) {
    if (n == 1 || n == 2) {
        return 1;
    } else if (n >= 3) {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
    std::__throw_runtime_error("fuck negative");
}

void out(int *array, int n) {
    for (int i = 0; i < n + 1; ++i) {
        if (array[i] == 0) { continue; }
        std::cout << std::setw(8) << array[i];
        if ((i + 1) % 20 == 0) { std::cout << "" << std::endl; }//换行
    }
    std::cout << "" << std::endl;
}

template<typename T>
T sort(T array, int n) {
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < n; ++j) {
            if (array[j] > array[j + 1])
                std::swap(array[j], array[j + 1]);
        }
    }
    return array;
}

template<typename T>
int countZero(T array, int n) {
    int repeat = 0;
    for (int i = 0; i < n + 1; ++i) {
        if (array[i] == 0) {
            repeat += 1;
            continue;
        }
    }
    return repeat;
}

template<typename T>
T remove(T array, int n, double ave) {
    for (int i = 0; i < n + 1; ++i) {
        if (array[i] < ave) {
            array[i] = 0;
        }
    }
    return array;
}

template<typename T>
T elimination(T array, int n) {
    int a = array[0];
    for (int i, j = 1; i < n + 1 && j < n + 1;) {
        if (array[j] == a) {
            j++;
        } else if (a != array[j]) {
            array[i] = array[j];
            a = array[j];
            i++;
        }
    }
    for (int k = n - 1; k > 0; k -= 1) {
        if (array[n] == array[k]) {
            array[n] = 0;
            break;
        }
    }
    for (int l = n - 2; l > 0; l -= 1) {
        if (array[n - 1] == array[l]) {
            array[n - 1] = 0;
            break;
        }
    }
    return array;
}

int main() {
    printID();
    int *array;
    int n;
    std::cout << "请输入希望的数组长度： ";
    std::cin >> n;
    if (n <= 0) {
        std::__throw_runtime_error("fuck negative 2");
    } else {
        array = new int[n + 1];
    }//生成了一个空的数组

    for (int i = 0; i < n; ++i) {
        array[i] = fibonacci(i + 1);
    }//赋值斐波那契
    std::cout << "整理前的数组：" << std::endl;
    out(array, n);
    std::cout << "请输入要插入的数字： ";
    std::cin >> array[n];
    array = sort(array, n);
    std::cout << "整理后的数组：";
    std::cout << "" << std::endl;
    out(array, n);
    array = elimination(array, n);
    std::cout << "查重整理后的数组： " << std::endl;
    out(array, n);//输出整理
    int num = countZero(array,n);
    double sum = 0;
    for (int j = 0; j < n + 1; ++j) {
        sum += array[j];
    }
    double ave = sum / (n - num + 1);
    array = remove(array, n, ave);
    std::cout << "平均数为：" << ave << std::endl;
    std::cout << "删除后的： " << std::endl;
    out(array, n);


    delete[]array;
    array = nullptr;
    return 0;
}
