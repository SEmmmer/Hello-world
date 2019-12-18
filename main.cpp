#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;

template<typename T>
void out(T *array, int m) {
    for (int i = 0; i < 10 + m; ++i) {
        cout << std::setw(4) << *(array + i);
    }
}//用指针输出数组

int main() {
    int m = 0;
    cout << "向左移动的位数：";
    cin >> m;
    cout << "请输入十个数：" << endl;
    int *array = new int[m + 10];
    for (int i = 0; i < 10; ++i) {
        cin >> *(array + i);
    }//用指针给数组赋值
    out(array, m);



    delete[](array);
    array = nullptr;
    return 0;
}