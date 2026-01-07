//student.h                (这是头文件，在此文件中进行类的声明)
#include <string>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int nu, string na, char se);
private:
	int num;
	string name;
	char sex;
};

