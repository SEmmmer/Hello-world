#include <iostream>
#include <iomanip>
#include ".h/printID.h"

using std::cout;
using std::endl;
using std::cin;

template<typename T>
void out(T *array, int m) {
    for (int i = 0; i < m; ++i) {
        cout << std::setw(4) << *(array + i);
    }
}//用指针输出数组
template<typename T>
int sumI(T *array, int n) {
    int sum = 0;
    sum = array[n - 1] + array[n] + array[n + 1] + array[n + 2];
    return sum;
}

int main() {
    printID();
    int m = 0;
    cout << "一组数据的长度：";
    cin >> m;
    cout << "请输入 " << m << " 个数：" << endl;
    int *array = new int[3 + m];
    for (int i = 0; i < m; ++i) {
        cin >> *(array + i);
    }
    for (int i = m; i < 3 + m; ++i) {
        *(array + i) = *(array - m + i);
    }
    //用指针给数组赋值
    cout << "输入的数组是：" << endl;
    out(array, m);

    int *array2 = new int[m];
    for (int j = 0; j < m; ++j) {
        *(array2 + j) = sumI(array, j + 1);
    }
    cout << "\n相邻四个数求和的结果分别是：" << endl;
    out(array2, m);
    for (int k = 0; k < m; ++k) {
        if (array2[k] >= array2[k + 1])
            array2[k + 1] = array2[k];
    }
    cout << "\n求和中的最大值是：" << endl;
    cout << std::setw(4) << array2[m - 1];
    for (int l = 0; l < m; ++l) {
        if (sumI(array, l + 1) == array2[m - 1]) {
            cout << "\n参与求和的四个数是：" << endl;
            cout << std::setw(4) << array[l];
            cout << std::setw(4) << array[l + 1];
            cout << std::setw(4) << array[l + 2];
            cout << std::setw(4) << array[l + 3];
        }
    }

    delete[](array);
    delete[](array2);
    array = nullptr;
    array2 = nullptr;
    return 0;
}