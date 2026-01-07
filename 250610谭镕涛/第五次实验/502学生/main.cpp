//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
#include "student.h"
using namespace std;
int main()
{
	Student stud1;                //定义对象
	stud1.set_value(7, "tcg", 'm');
	stud1.display();              //执行stud对象的display函数
	return 0;
}
