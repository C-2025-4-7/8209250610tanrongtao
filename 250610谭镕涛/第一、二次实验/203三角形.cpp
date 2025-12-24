#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入三角形的三边长";
	cin >> a >> b >> c;
	if (a + b > c&&a + c > b&& b + c > a)
	{
		cout << "三角形的周长为" << (a + b + c)<<"\n";
		if (a == b || b == c || a == c)
		{
			cout << "该三角形是等腰三角形";
		}
		else cout << "该三角形不是等腰三角形";
	}
	else
	{
		cout << "该数据无法组成三角形";
	}
	return 0;
}