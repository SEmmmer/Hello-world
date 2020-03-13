//
// Created by Shirakami Emmmer on 2019/11/3.
//

#include ".h/leeCode-680.h"
#include <iostream>
#include <string>


int main() {
    std::string str;
    std::cin >> str;
    int length = str.length();
    std::cout << "length = " << length << std::endl;
    char *lsh = nullptr;
    char *rsh = nullptr;
    lsh = &str[0];
    rsh = &str[length - 1];

    int time = 0;
    for (; *lsh != *rsh; lsh++, rsh--) {
        if (memcmp(lsh, rsh, 1) != 0) {
            if (memcmp(lsh + 1, rsh, 1) == 0) {
                lsh += 1;
            } else if (memcmp(lsh, rsh - 1, 1) == 0) {
                rsh -= 1;
            }
            time += 1;
            if (time == 2) {
                std::cout << str << " 不是回文字符串" << std::endl;
                return 0;
            }
        }
    }
    std::cout << str << " （最多去掉一个字母后）是回文字符串" << std::endl;
    return 0;
}