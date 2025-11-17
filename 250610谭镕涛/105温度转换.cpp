#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a, b;
	cout << "请输入华氏温度";
	cin >> a;
	b = (a - 32) * (5.0 / 9);
	cout << "转化后的摄氏温度为:" <<fixed<< setprecision(2) << b << "℃";
	return 0;
}