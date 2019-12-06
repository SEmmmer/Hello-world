//
// Created by Shirakami Emmmer on 2019/11/22.
//
#include ".h/printID.h"
#include ".h/Fibonacci.h"
#include <iostream>
#include <iomanip>

template<typename T>
void out(T matrix, int row, int column) {
    for (int i = 0; i < row - 1; ++i) {
        for (int j = 0; j < column - 1; ++j) {
            std::cout << std::setw(6) << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

template<typename T>
int aveOfC(T *p, int row, int column, int st) {
    int sum = 0;
    for (int i = 0; i < row; ++i) {
        sum += p[i][st];
    }
    return sum / (column - 2);
}

//squareNum
int main() {
    printID();
    int num = 0;
    printf("%s", "人数是：");
    std::cin >> num;
    int column = 5;
    int row = num + 1;
    int **p = new int *[row];
    for (int i = 0; i < row; ++i) { p[i] = new int[column]; }//生成了一个方阵
    printf("%s", "请输入分别 学号 和 科目 1 2 3 的成绩\n");
    for (int j = 0; j < row - 1; ++j) {
        for (int i = 0; i < column - 1; ++i) {
            std::cin >> p[j][i];
        }
    }
    printf("%s", "   学号  科目1  科目2  科目3 \n");

    out(p, row, column);
    for (int k = 0; k < row - 1; ++k) {
        std::cout << "学生 " << p[k][0] << " 的平均成绩为：" << (p[k][1] + p[k][2] + p[k][3]) / 3 << std::endl;

    }
    int st = 1;
    for (; st < num + 1; ++st) {
        std::cout << "科目" << st << " 的平均分是：" << aveOfC(p, row, column, st) << std::endl;

    }


    return 0;
}
