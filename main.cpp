#include<iostream>
#include<iomanip>
#include <ctime>
#include ".h/printID.h"

template<size_t size>
void out(int (&array)[size]) {
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(10) << array[i];
        if ((i + 1) % 5 == 0)
            std::cout << std::endl;
    }
    std::cout << std::endl;
}

template<size_t size>
void random(int (&array)[size]) {
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;
    }
}

template<size_t size>
void merge(int arrayA[], int arrayB[], int (&arrayC)[size], int a, int b) {
    for (int i = 0; i < size / 2; ++i) {
        for (int j = 0; j < size / 2; ++j) {
            if (arrayA[i] > arrayB[j]) { arrayC[i] = arrayA[i]; }
            if(arrayB[j] > arrayA[i]){arrayC[i]}
        }
    }
}

int main() {
    const int N = 20;
    printID();
    std::cout << "";
    int arrayA[N];
    int arrayB[N];
    srand(static_cast<unsigned int>(time(nullptr)));
//    std::memset(arrayA, '\0', N * sizeof(int));
//    std::memset(arrayB, '\0', N * sizeof(int));
    random(arrayA);
    random(arrayB);
    std::sort(arrayA, arrayA + 20);
    std::sort(arrayB, arrayB + 20);
    int arrayC[2 * N];
    std::memset(arrayC, '\0', N * sizeof(int));
    merge(arrayA, arrayB, arrayC, N, N);
    out(arrayA);
    out(arrayB);
    out(arrayC);

}
