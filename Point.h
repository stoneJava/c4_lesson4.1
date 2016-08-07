//
// Created by dslht on 2016/7/31.
//

#ifndef C4_LESSON4_1_POINT_H
#define C4_LESSON4_1_POINT_H

#include <iostream>
using namespace std;

class Point {
private:
    int x =6,y;
public:
    Point(){ ///
        cout<<"默认构造函数被调用"<<endl;
    };

    Point(int a, int b);

    void Setxy(int a, int b);

    void Move(int a, int b);

    void Display();

    int Getx();

    /**
     * 在声明中给出函数体定义则默认为内联函数（inline）
     * 出循环语句、switch语句函数不能说明为内联函数外，其他函数都可以声明
     * 为内联函数。
     * 内联函数必须在程序中第一次调用此函数的语句出现之前定义。
     */
    int Gety(){
        return y;
    }

    virtual ~Point();;
};


#endif //C4_LESSON4_1_POINT_H
