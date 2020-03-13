//
// Created by Shirakami Emmmer on 2019/11/3.
//

#include ".h/leeCode-680.h"
#include <iostream>
#include <string>


int main() {
    std::string str;
    std::cin >> str;
    char *lhs = &str[0];
    char *rhs = &str[str.length() - 1];
    int time = 0;

    for (; *lhs != *rhs; lhs++, rhs--) {
        if (memcmp(lhs, rhs, 1) != 0) {
            if (memcmp(lhs + 1, rhs, 1) == 0) {
                lhs += 1;
            } else if (memcmp(lhs, rhs - 1, 1) == 0) {
                rhs -= 1;
            }
            time += 1;
            if (time == 2) {
                std::cout << str << " （去掉一个字符后也）不是回文字符串" << std::endl;
                return 0;
            }
        }
    }
    std::cout << str << " （最多去掉一个字符后）是回文字符串" << std::endl;
    return 0;
}