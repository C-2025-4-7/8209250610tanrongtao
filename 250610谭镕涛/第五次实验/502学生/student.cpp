//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h"  
#include<string>
using namespace std;
void Student::set_value(int nu, string na, char se)
{
    num = nu;
    name = na;
    sex = se;
}
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
