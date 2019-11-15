
#include <stdio.h>

#include ".h/printID.h"
//template <typename T>
//T factory(T n) {
//    return n == 1 ? 1 : n + factory(n - 1);
//}

template<typename T>
T fbnq(T n) {
    return n == 1 ? 1 : n == 2 ? 2 : fbnq(n - 2) + fbnq(n - 1);
}


int main() {
    int n;
    std::cin >> n;
    printf("%d", fbnq(n));
    return 0;

}

