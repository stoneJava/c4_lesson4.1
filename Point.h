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
        cout<<"Ĭ�Ϲ��캯��������"<<endl;
    };

    Point(int a, int b);

    void Setxy(int a, int b);

    void Move(int a, int b);

    void Display();

    int Getx();

    /**
     * �������и��������嶨����Ĭ��Ϊ����������inline��
     * ��ѭ����䡢switch��亯������˵��Ϊ���������⣬������������������
     * Ϊ����������
     * �������������ڳ����е�һ�ε��ô˺�����������֮ǰ���塣
     */
    int Gety(){
        return y;
    }

    virtual ~Point();;
};


#endif //C4_LESSON4_1_POINT_H
