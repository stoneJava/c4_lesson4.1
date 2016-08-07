//
// Created by dslht on 2016/7/31.
//

//#include <ostream>
#include <iostream>
#include "Point.h"


using namespace std;

/*Point::Point() {
    cout<<"默认构造函数被调用"<<endl;
}*/

//三种赋值方式
Point::Point(int a, int b) : x(a), y(b) {
//        x=a;b=y;
//    this->x =a; this->y = b;
}

void Point::Setxy(int a, int b) {

}

int Point::Getx() { return x; }

//析构函数
Point::~Point() {
    cout << "析构函数被调用了" << endl;
}
