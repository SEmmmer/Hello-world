
#include <iostream>
#include <iomanip>
//#include <random>
#include <ctime>
#include ".h/printID.h"


//using Random = std::default_random_engine;
//template <typename T>
//using Range = std::uniform_int_distribution<T>;

void out(int *array, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << std::setw(4) << array[i];
        if ((i + 1) % 5 == 0) { std::cout << "" << std::endl; }//换行
    }
    std::cout << "" << std::endl;
}

template<typename T>
T sort(T array, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (array[j] < array[j + 1])
                std::swap(array[j], array[j + 1]);
        }
    }
    return array;
}

int binarySearch(const int *array, int n, int aNum) {
    int lhs = 0;
    int rhs = n;
    int mid = n / 2;

    for (;;) {
        if (aNum == array[mid]) {
            return mid;
        } else if (aNum > array[mid]) {
            rhs = mid;
            mid = (rhs + lhs) / 2;
        } else if (aNum < array[mid]) {
            lhs = mid;
            mid = (lhs + rhs) / 2;
        }
        if (lhs == rhs) { throw std::runtime_error("not found"); }
    }
}

int main() {
//    Random e(time(nullptr));
//    Range<int> u(0, 99);
    srand(static_cast<unsigned int>(time(nullptr)));
    printID();
    int *array;
    int n;
    std::cout << "请输入需要的长度n：";
    std::cin >> n;
    if (n <= 0) {
        throw std::runtime_error("FUCK negative");
    } else {
        array = new int[n];
    }//创建一个数组

    for (int i = 0; i < n; ++i) {
        array[i] = rand() % 100;
    }

    std::cout << "输入的数组为：" << std::endl;
    out(array, n);
    //现在使用冒泡排序法排序数组

    array = sort(array, n);
    std::cout << "排序后的数组为:" << std::endl;
    out(array, n);

    int aNum;
    std::cout << "请输入一个数字：";
    std::cout.flush();
    if (scanf("%d", &aNum) != 1) {
        throw std::runtime_error("Fuck non-int");
    }
    //输入一个待比较的数字


    try {
        int index = binarySearch(array, n, aNum);
        std::cout << aNum << " 在第 " << index + 1 << " 的位置 " << std::endl;
    } catch (std::exception &e) {
        std::cout << "找不到这个数: " << e.what() << std::endl;
    }

    delete[] array;
    array = nullptr;
    return 0;
}
