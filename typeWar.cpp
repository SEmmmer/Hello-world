//
// Created by Shirakami Emmmer on 2019/11/14.
//

#include ".h/typeWar.h"
#include <iostream>

class wangRuiZhi {
public:
    void longNeck() {
        std::cout << "脖子长不需要理由" << std::endl;
    }

    void niShiHanHan() {
        lengthOfNeck();
    }

private:

    void lengthOfNeck() {
        std::cout << "真实长度为" << length << "cm" << std::endl;

    }

    int length = 18;

};

class xieGirlFriend {
public:
    void name() {
        std::cout << "大家好我是谢松灿的女朋友 蔡徐坤" << std::endl;
    }

    bool iLikeItToo = true;
private:
};

class xieSongCan {
public:
    void kingOfH() {
        std::cout << "黄腔之王谢松灿！" << std::endl;
    }

    bool keYi(bool n) {
        if (n) {
            return iLikeIt;
        }
    }

private:
    bool iLikeIt = true;
};

class wangBingJie {
public:
    void hH() {
        std::cout << "吾乃江东小霸王炳杰傻逼。" << std::endl;
    }
};

void fuck(bool n) {
    if (n) {
        std::cout << "They fuck together." << std::endl;
    }
}

int main() {
    wangBingJie wangBingJie;
    xieGirlFriend saKi;
    xieSongCan xieSongCan;
    wangRuiZhi wangRuiZhi;

    wangRuiZhi.longNeck();
//    wangRuiZhi.niShiHanHan();

    wangBingJie.hH();
    std::cout << "" << std::endl;
    xieSongCan.kingOfH();
    saKi.name();
    fuck(xieSongCan.keYi(saKi.iLikeItToo));
    return 0;
}