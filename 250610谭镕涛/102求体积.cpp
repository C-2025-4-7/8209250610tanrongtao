#include <iostream>
using namespace std;
int main()
{
	int r, h，V;
	const double PI = 3.14;
	cout << "请输入半径";
	cin >> r;
	cout << "请输入锥高";
	cin >> h;
	V = (1.0 / 3) * PI * (r *r) * h;
	cout << "圆锥的体积是" << V;
	return 0;
}


