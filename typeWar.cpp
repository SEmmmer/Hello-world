//
// Created by Shirakami Emmmer on 2019/11/14.
//

#include ".h/typeWar.h"
#include <iostream>
#include <string>
#include <map>

int main() {
    char str[] = {'a', 'b', 'p', 'c', 'p', 'l', 'e', 'a', '\0'};
    char *pStr = &str[0];
    int cmp;
    std::map<int, std::string> mapStudent;
    mapStudent[0] = "ale";
    mapStudent[1] = "apple";
    mapStudent[2] = "monkey";
    mapStudent[3] = "plea";
    std::map<int, std::string>::iterator iter;

    int j = 0;

    for (iter = mapStudent.begin(); iter != mapStudent.end(); iter++) {
        int nSize = mapStudent[iter->first].size();
        char *pStudent = &mapStudent[iter->first][0];
        j = 0;

        for (int i = 0; i < 8; ++i) {
            for (; j < nSize;) {
                cmp = memcmp((pStr + i), (pStudent + j), 1);
                if (cmp == 0) {
                    j++;
                    break;
                } else { break; }
            }
        }
        std::cout << j;
    }

}