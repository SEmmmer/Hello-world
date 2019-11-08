//
//

#include "../.h/duck.h"
#include <iostream>
#include <string>

class Hello {
public:
    void fuck() {
        std::cout << "Do you like Van yo si" << std::endl;
    }
};

class Man {
public:
    void fuck() {
        std::cout << "Man fuck" << std::endl;
    }
};

class Woman {
public:
    void fuck() {
        std::cout << "Woman fuck" << std::endl;
    }
};

class CannotFuck {

};

template<typename T>
T max(T a, T b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

template<typename Fuckable>
void doFuck(Fuckable f) {
    f.fuck();
}

int main() {
//    int a;
//    int b;
//    std::cin >> a >> b;
//    int c = max(a, b);
//
//    double d;
//    double e;
//    double f;
//    std::cin >> d >> e;
//    f = max(d, e);
//
//    char x;
//    char y;
//    char z;
//    std::cin >> x >> y;
//    z = max(x, y);
//
//    std::string fuck = "Hello World";
//    std::string you = "Hello";
//    std::cout << max(fuck,you);
//

// SFINAE

    Hello a;
    Man man;
    Woman woman;

//    CannotFuck laji;

    doFuck(a);
    doFuck(man);
    doFuck(woman);
//    doFuck(laji);

//    max(laji, laji);

    return 0;
}
