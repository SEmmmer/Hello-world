//
// Created by Shirakami Emmmer on 2019/11/15.
//

#include ".h/pointer.h"
#include <iostream>
#include <iomanip>
#include ".h/printID.h"


int main() {
    printID();
    const int M = 100;
    int x[M][M];
    for (int l = 0; l < M; ++l) {
        for (int i = 0; i < M; ++i) {
            x[i][l] = 0;
        }
    }
    int m = 0;
    std::cout << "请输入m的值：";
    std::cin >> m;
    int num = (m * m + m) / 2;
    int base = 1;
    int position = m;
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < M; ++j) {
            if (base > num) { continue; }
            if ((j) % position == 0 && j > 0) {
                position--;
                break;
            }
            x[i][j] = base++;
        }
    }

    int y[M][M];
    for (int n = 0; n < M; ++n) {
        for (int i = 0; i < M; ++i) {
            y[M - 1 - n][i] = x[i][n];
        }
    }

    for (int k = 0; k < M; ++k) {
        for (int i = 0; i < M; ++i) {
            if (y[k][i] == 0) { continue; }
            std::cout << std::setw(4) << y[k][i];
        }
        if (M - k <= m) { std::cout << std::endl; }
    }
    printf("%s", "============================\n");

    for (int i1 = 0; i1 < M; ++i1) {
        if (M - i1 <= m) {
            std::cout << std::setw(3 * m) << " ";
        }
        for (int i = 0; i < M; ++i) {
            if (y[i1][i] == 0) { continue; }
            std::cout << std::setw(6) << y[i1][i];
        }
        if (M - i1 <= m) {
            m -= 1;
            std::cout << std::endl;
        }
    }

    return 0;
}
