/*5、设有一描述坐标点的类Point，其私有变量x和y代表一个点的(x, y)坐标值。
请编写程序实现以下功能：利用构造函数传递参数，在定义对象时将x、y坐标值
初始化为（60, 80）；利用公有成员函数void setPoint(int i, int j)将坐标值
修改为(60 + i, 80 + j)；利用公有成员函数display()输出修改后的坐标值。主
函数中通过定义对象，验证各个函数。*/
#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int px,int py);
	void setPoint(int i, int j);
	void display();
};
Point::Point(int px = 60, int py = 80)
{
	x = px;
	y = py;
}
void Point::setPoint(int i,int j)
{
	x = x + i;
	y = y + j;
}
void Point::display()
{
	cout << "变化后点的坐标为" << "(" << x << "," << y << ")";
}
int main() 
{
	Point Point1;
	Point1.setPoint(4, 8);
	Point1.display();
	return 0;
}