//
#include "../.h/calculation.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <cmath>
#include <functional>
#include "../.h/printID.h"

#if __cplusplus < 201703L

int main() {
    printf("不是 C++17 你还想运行我？\n");
}

#else

// interface
template<typename T>
class Op {
public:
    virtual T calculate(T lhs, T rhs) = 0;

    virtual char getOp() = 0;
};

template<typename T>
class Addition : public Op<T> {
public:
    T calculate(T lhs, T rhs) override {
        return lhs + rhs;
    }

    char getOp() override {
        return '+';
    }
};

template<typename T>
class Subtract : public Op<T> {
public:
    T calculate(T lhs, T rhs) override {
        return lhs - rhs;
    }

    char getOp() override {
        return '-';
    }
};

template<typename T>
class Mult : public Op<T> {
public:
    T calculate(T lhs, T rhs) override {
        return lhs * rhs;
    }

    char getOp() override {
        return '*';
    }
};

template<typename T>
class Div : public Op<T> {
private:
    void check(T rhs) {
        if (rhs == 0) {
            throw std::runtime_error("FUCK 0");
        }
    }

public:
    T calculate(T lhs, T rhs) override {
        check(rhs);
        return lhs / rhs;
    }

    char getOp() override {
        return '/';
    }
};

template<typename T>
class Pow : public Op<T> {
public:
    T calculate(T lhs, T rhs) override {
        if (lhs < 0) {
            throw std::runtime_error("FUCK negative");
        }
        return std::pow(lhs, rhs);
    }

    char getOp() override {
        return '^';
    }
};

template<typename T>
class Question {//定义一个问题class
private:
    T lhs;
    T rhs;
    Op<T> *op;//访问op的接口取得一个运算符号的地址
    T ans;

public://做赋值运算，用于输出
    Question(T lhs, T rhs, Op<T> *op) : lhs(lhs), rhs(rhs), op(op) {
        ans = op->calculate(lhs, rhs);
    }

    T getLhs() const {
        return lhs;
    }

    T getRhs() const {
        return rhs;
    }

    char getOp() const {
        return op->getOp();
    }

    T getAns() const {
        return ans;
    }
};

template<typename T>
auto getSupportedOps() {//根据运算的个数给出一个向量的长度
    std::vector<Op<T> *> SUPPORTED_OPS{
            new Addition<T>(),
            new Subtract<T>(),
            new Mult<T>(),
            new Div<T>(),
            new Pow<T>(),
    };
    return SUPPORTED_OPS;
}

template<typename T>
T burnNumber() {//生成随机数
    T num = static_cast<T>(1 + rand() % (10));
    return num;
}

template<typename T>
//根据运算个数（向量长度）随机生成运算符
Op<T> *burnOp() {
    auto ops = getSupportedOps<T>();
    int n = rand() % (ops.size());
    return ops[n];
}

template<typename T>
Question<T> burnQuestion() {//生成并返回之前的问题（用class返回）
    return {burnNumber<T>(), burnNumber<T>(), burnOp<T>()};
}

template<typename T>
T burnConclusion() {
    auto q1 = burnQuestion<T>();//自动类型，给一个class
    std::cout << "请计算 " << q1.getLhs() << q1.getOp() << q1.getRhs() << " = ";//取得这个变量里的运算
    return q1.getAns();//取得变量里的答案
}

template<typename A, typename B>
struct isSameType {
    constexpr static bool value = false;
};

template<typename A>
struct isSameType<A, A> {//判断两个类型是否相等
    constexpr static bool value = true;
};

template<typename T>
void doQuestion() {
    if constexpr (!isSameType<T, int>::value && !isSameType<T, double>::value) {
        throw std::runtime_error("FUCK non-int and non-double");
    }

    T answer;
    T trueAnswer;

    trueAnswer = burnConclusion<T>();
    std::cin >> answer;

    if (trueAnswer == answer) {
        std::cout << "答案正确！" << std::endl;
    } else {
        std::cout << "答案错误！正确答案是：" << trueAnswer << std::endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    printID();

    doQuestion<double>();
    doQuestion<int>();

//    auto f = [](auto a) { return a + 1;};
    // std::function<?(?)>
    // template<typename T>
    // T _(T)

    // lambda function
//    std::cout << [](auto a) { return a + 1;}(1) << std::endl;
//    std::cout << [](auto a) { return a + 1;}(1.1) << std::endl;

//    auto doOp = [](auto a, auto b, auto op) { return op(a, b); };
//    auto add = [](auto a, auto b) { return a + b; };
//    auto sub = [](auto a, auto b) { return a - b; };
//    auto mul = [](auto a, auto b) { return a * b; };
//    auto div = [](auto a, auto b) { return a / b; };
//
//    std::cout << doOp(1.0, 2.0, add) << std::endl;
//    std::cout << doOp(1, 2.0, sub) << std::endl;
//    std::cout << doOp(1.0, 2, mul) << std::endl;
//    std::cout << doOp(1, 2, div) << std::endl;

    return 0;
}

#endif
