//
// Created by dslht on 2016/7/31.
//

//#include <ostream>
#include <iostream>
#include "Point.h"


using namespace std;

/*Point::Point() {
    cout<<"Ĭ�Ϲ��캯��������"<<endl;
}*/

//���ָ�ֵ��ʽ
Point::Point(int a, int b) : x(a), y(b) {
//        x=a;b=y;
//    this->x =a; this->y = b;
}

void Point::Setxy(int a, int b) {

}

int Point::Getx() { return x; }

//��������
Point::~Point() {
    cout << "����������������" << endl;
}
