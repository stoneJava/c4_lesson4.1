

#include <iostream>
#include "point.h"

using namespace std;
int main() {

    Point point;//定义对象 ，会调用默认构造函数
    cout<< point.Getx()<<endl;

    Point *p1 = new Point(); //指针
    cout << p1->Getx()<<endl;
    delete p1;

    Point *p2 ;
    p2= &point; //指向 point对象的指针, 引用采用“ . ”访问对象成员，指针采用 -> 运算符
    cout << p2 ->Getx()<<endl;
    delete (p2);

    Point &pr = point; //定义pr为Point类型 point对象的引用
    cout << pr.Getx()<<endl;


    Point point1(55,66);
    cout << point1.Getx()<<endl;

    return 0;

}