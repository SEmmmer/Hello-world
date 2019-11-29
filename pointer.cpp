//
// Created by Shirakami Emmmer on 2019/11/15.
//

#include ".h/pointer.h"
#include <iostream>
#include <iomanip>
#include ".h/printID.h"

template<typename T>
void outPut(T array, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << std::setw(4) << array[j][i];
        }
        std::cout << "" << std::endl;
    }
}


void dynamicCreate2Array() {
    int row = 0;
    int column = 0;
    std::cout << "请输入行和列：";
    std::cin >> row >> column;
    if (row <= 0 || column <= 0) { throw std::runtime_error("Fuck Negative"); }
    int i = 0;
    int **p = new int *[row]; //以p为二维指针生成一行一维指针的地址
    for (i = 0; i < row; i++) { p[i] = new int[column]; } //开辟列

    std::cout << "请输入数据：";
    for (i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            std::cin >> p[i][j];
        }
    }

    std::cout << "输出数据：" << std::endl;
    for (i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            std::cout << std::setw(3) << p[i][j];
        }
        printf("%s", "/n");
    }

    //释放开辟的资源
    for (i = 0; i < row; i++) {
        delete[] p[i];
        p[i] = nullptr;
    }
    delete[] p;
    p = nullptr;

}

int main() {
    int n = 0;
//    int *arrayX = nullptr;
//    printID();
//    printf("%s", "请输入想要方阵的阶数： ");
//    std::cin >> n;
//    arrayX = new int[n];
//    int **array = &arrayX;
//    memset(arrayX, '\0', sizeof(int) * n);
//    outPut(array, n);
    dynamicCreate2Array();
    return 0;
}
