//
// Created by 杨靖华 on 2019/10/11.
//

#include "homework1.h"
#include <iostream>
using namespace std;

int main(){
    int y=0;
    int m=0;
    int d=0;
    int num=0;
    cout<<"hello,this is a calculator of date"<<endl;
    cout<<"please enter year,month and day"<<endl;
    cin>>y>>m>>d;
    switch (m){
        case 12:;num=num+30;
        case 11:;num=num+31;
        case 10:;num=num+30;
        case 9:;num=num+31;
        case 8:;num=num+31;
        case 7:;num=num+30;
        case 6:;num=num+31;
        case 5:;num=num+30;
        case 4:;num=num+31;
        case 3:;num=num+28;
        case 2:;num=num+31;
        case 1:;num=num+0;
    }
    num=num+d;
    if((y%4==0 && y%100!=0) || (y%400==0)){
        num=num+1;
    }
    cout<<"Today is the "<<num<<" day of "<<y<<endl;
}