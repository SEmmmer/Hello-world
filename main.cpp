
#include <iostream>
#include <iomanip>
#include ".h/printID.h"

template<typename T>
void out(T array, int n) {
    for (int k = 0; k < n + 1; ++k) {
        std::cout << std::setw(10) << array[k];
        if ((k + 1) % 5 == 0) {
            std::cout << "" << std::endl;
        }
    }
}

int main() {
    int n;
    double *array;
    printID();
    std::cout << "请输入一个大于15的，5的倍数: ";
    std::cin >> n;
    if (n % 5 != 0 || n < 15) {
        std::cout << "error!";
        exit(1);
    } else {
        array = new double[n + 1];
        if (array == nullptr) { return -1; }
    }

    std::cout << "请输入 " << n << " 个数据" << std::endl;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];//组装一个数组 最后一个暂未赋值
        sum += array[i];
    }
    out(array, n - 1);
    double ave = sum / n;
    array[n] = ave;

    double *array2;
    array2 = new double[n + 1];
    array2[n] = array[n];
    int left = 0;
    int right = n - 1;

    for (int j = 0; j < n; ++j) {
        if (array[j] < array[n]) {
            array2[right] = array[j];
            right -= 1;
        } else {
            array2[left] = array[j];
            left += 1;
        }
    }

    std::cout << "调整后的数据为：" << std::endl;
    out(array2, n);
    delete[]array;
    delete[]array2;
    array = nullptr;
    array2 = nullptr;
    return 0;
}

