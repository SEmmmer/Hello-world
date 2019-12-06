//
// Created by Shirakami Emmmer on 2019/11/15.
//

#include ".h/pointer.h"
#include <iostream>
#include <iomanip>
#include ".h/printID.h"


int main() {

    int row = 0;
    int column = 0;
    std::cout << "请输入生成方阵阶数";
    std::cin >> row;
    column = row;
    if (row <= 0 || column <= 0) { throw std::runtime_error("Fuck Negative"); }
    int i = 0;
    int **p = new int *[row]; //以p为二维指针生成一行一维指针的地址
    for (i = 0; i < row; i++) { p[i] = new int[column]; } //开辟列



    std::cout << "输出数据：" << std::endl;
    for (i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            std::cout << std::setw(3) << p[i][j];
        }
        printf("%s", "/n");
    }






    //释放内存
    for (i = 0; i < row; i++) {
        delete[] p[i];
        p[i] = nullptr;
    }
    delete[] p;
    p = nullptr;
    return 0;
}
