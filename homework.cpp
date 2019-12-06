//
// Created by Shirakami Emmmer on 2019/11/22.
//
#include ".h/printID.h"
#include ".h/homework.h"
#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main() {
    printID();
    string str;
    char WTF;
    cout << "请输入一个字符串：" << endl;
    cin >> str;
    cout << "请输入一个字符" << endl;
    cin >> WTF;
    if (str.find(WTF) == string::npos) {
        cout << "在字符串 " << str << " 中找不到 " << WTF << " 这个字符 " << endl;
    } else {
        cout << WTF << " 第一次在字符串 " << str << " 出现的位置是：" << str.find(WTF);
    }


    return 0;
}
