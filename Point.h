//
// Created by Milena on 21.02.2026.
//


#ifndef _11_02_POINT_H
#define _11_02_POINT_H
#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:

    Point();
    Point(int x, int y);


    ///екземплярні  методи, визиваються на об'єктах, об'єкти потрапляють в метод через константний вказівник this

    Point operator +(const Point& obj) const;////це перевантаження/перегрузка оператора у методі класу   obj1+obj2 Point+Point
    Point operator+ (int numb)const;//////  obj+5  Point+int  в методі

    Point operator +=(int rs);////це перевантаження/перегрузка оператора у методі класу
    ////Point&  operator =(const Point& obj);   ///не обов'язково перевизначати , нам підходить за замовчуванням, побітове копіювання

    ///////Логічні оператори   ==  !=        >, <,>=,<=
    bool operator ==(const Point& obj);
    bool operator >(const Point& obj);


    //////Всі інші Логічні оператори  на дз   <, !=, <=, >=  !!!!!!!!!!!!!!!!!!!

    //Point operator -(const Point& obj)const;   ////////DZ!!!!!
    //Point operator /(const Point& obj)const;	////////DZ!!!!!
    //Point operator *(const Point& obj)const;	////////DZ!!!!!


    /*Point operator -=(int rs);     ////////DZ!!!!!
    Point operator /=(int rs);       ////////DZ!!!!!
    Point operator *=(int rs);*/     ////////DZ!!!!!

    void Show()  const;

    int GetX()  const;
    int GetY()  const;


    ////Перегрузка оператору перетворення(Конвертація) типу

    operator int();//// Point ----->int
    operator double();/////Point----->double   !!!!!! допишіть

    /////Перегрузка інкременту префіксна форма, допускає повторне використання оператора   Point&    ++a     a=a+1

    Point& operator ++();/////   унарна оператор не приймає параментів , перегрузка методом

    /////Перегрузка інкременту постфіксна форма, не допускає повторне використання оператора

    Point operator ++(int i);

    /////  -- Decrement   префіксна форма/постфіксна форма  DZ!!!!!!!!!!!!!!!!!!!!!!!!//


    // ДЗ

    bool operator >=(const Point& obj);
    bool operator <(const Point& obj);
    bool operator <=(const Point& obj);
    bool operator !=(const Point& obj);

    Point operator -(const Point& obj)const;
    Point operator /(const Point& obj)const;
    Point operator *(const Point& obj)const;

    Point operator -=(int rs);
    Point operator /=(int rs);
    Point operator *=(int rs);

    Point operator --();  //префиксна
    Point operator --(int i);  //постфиксна




};


#endif //_11_02_POINT_H