

#include ".h/jojochainfuckbill.h"
#include <iostream>
#include <string>

class Math {
    friend std::istream &operator>>(std::istream &, Math &);

    friend std::ostream &operator<<(std::ostream &, const Math &);

public:
    Math(int num = 0) : dat(num) {}

    bool operator>(const Math &other) {
        return this->dat > other.dat;
    }

    bool operator<(const Math other) {
        return !(*this > other);
    }

private:
    int dat;
};

std::istream &operator>>(std::istream &istream, Math &math) {
    istream >> math.dat;
    return istream;
}

std::ostream &operator<<(std::ostream &ostream, const Math &math) {
    ostream << math.dat;
    return ostream;
}


int main() {
    Math s1;
    Math s2;

    std::cin >> s1;

    std::cout << s1 << s2;
//    operator<<(operator<<(std::cout, s1), s2);

//    s2.Compare(Math(s1), Math(s2));

    if (s2 > s1) {
        std::cout << "s2 > s1" << std::endl;
    } else {
        std::cout << "s1 > s2" << std::endl;
    }

    return 0;

};