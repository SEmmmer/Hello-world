#include<iostream>
#include ".h/printID.h"

class A {
public:
    int i;
    int j;

    void f();
};

void A::f() {
    this->i = 20;
    printf("A::f()--&i=%p\n", &i);
    printf("A::f()--&j=%p\n", &j);
    printf("this=%p\n", this);
}


int main() {
    A a;
    a.f();
    printf("&a=%p", &a);
    return 0;
}