//
// Created by Shirakami Emmmer
//
#include ".h/printID.h"
#include ".h/homework.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//固定大小，很难受


void ArrRef(int (&arr)[5]) {
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

//使用模板通用化一些，对数组通用
template<size_t SIZE>
void fibBack(int (&arr)[SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}


int main(int argc, char *argv[]) {

    const int MAX_INDEX(5);

    int aIndex[MAX_INDEX] = {1, 3, 4, 5, 6};

    //如果改了数组大小MAX_INDEX的值，两个大小对不上就会有问题

    ArrRef(aIndex);

    //如果改了数组大小MAX_INDEX的值，也无所谓

    fibBack(aIndex);

    return 0;
}
