
#include <iostream>
#include <iomanip>
#include <ctime>
#include ".h/printID.h"

template<typename T>
void out(T array, int p) {
    for (int i = 0; i < p; ++i) {
        std::cout << std::setw(8) << *(array++);
        if ((i + 1) % 10 == 0) { std::cout << std::endl; }
    }
}


int main() {
    printID();
    srand(static_cast<unsigned int>(time(nullptr)));
    const int N = 30;
    int array[N];

    for (int &i : array) {
        i = 1 + rand() % 100;
    }//随机数赋值成功

    out(array, N);
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;//5 classes

    for (int j = 0; j < N; ++j) {
        if (*(array + j) < 60) { E++; continue; }
        if (*(array + j) < 70) { D++; continue; }
        if (*(array + j) < 80) { C++; continue; }
        if (*(array + j) < 90) { B++; continue; }
        if (*(array + j) < 100) { A++; continue; }
    }
    std::cout << "学生成绩如下：" << std::endl;
    std::cout << "分数段 90-100 ：" << A << std::endl;
    std::cout << "分数段 80-89 ：" << B << std::endl;
    std::cout << "分数段 70-79 ：" << C << std::endl;
    std::cout << "分数段 60-69 ：" << D << std::endl;
    std::cout << "60 分以下 ：" << E << std::endl;
    return 0;
}