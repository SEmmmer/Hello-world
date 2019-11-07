//
//

#include "16to10test.h"
#include <iostream>
#include <string>
#include <cstring>

class FUCK {
public:
    int i;
    int j;
    const char *a = "guck";
};

struct FUCKAGAIN {
private:
    int i;
public:
    int j;
    const char a[10] = "guck";
} __attribute__((packed));

class GirlFriend {
};

class You {
    friend class YourFriend;

private:
    class MySuperPrivateData {
        friend class You;

        GirlFriend girlFriend;
    };

    MySuperPrivateData myData;
protected:
    int money;

    void f() {
        myData.girlFriend;
    }
};

class YourFriend {
public:
    void f() {
        You y;
        y.myData.girlFriend;
        y.money;
    }
};


class YourSon : public You {
public:
    void f() {
        this->money;
    }
};

int main() {
    int n = 0;
    // %d %i: int32_t
    // %zd:   unsigned any
    // %x:    hex
    // %o:    oct
    // %b:    bin
    // %.3f:  float
    // %.6lf  double
    // %s:    c string (char [] terminated with a '\0')
    // %p:    show void */char * as u/intptr_t
    // %%:    %

//    int a = 0;
//    int b = 0;
//    scanf("%d.%d", &a, &b);

    std::string s = "hello world";
//    const char cs[] = "hello world";
    const char cs[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    const char *pcs = cs;

    printf("%zd\n", sizeof(s));
    printf("%zd\n", sizeof(cs));
    printf("%zd\n", sizeof(pcs));
    printf("%zd\n", sizeof(FUCK));
    printf("%zd\n", sizeof(GirlFriend));

    printf("%s\n", cs);
    printf("%s\n", s.c_str());

    FUCKAGAIN fa;
    FUCK f;
    f.i;

    You y;
    YourSon son;
    son.f();

//    printf("%d,,,,%d\n", a, b);
//    scanf("%x", &n);
//    std::cin >> n;
//    std::cout << n;

    return 0;
}


