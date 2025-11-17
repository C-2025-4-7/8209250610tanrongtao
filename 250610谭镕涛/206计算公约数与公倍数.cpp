#include <iostream>
using namespace std;
int main()
{
	int a, b,c=1,result=0,result2;
    cout << "请输入第一个正整数";
	cin >> a;
	cout << "请输入第二个正整数";
	cin >> b;
	while (a>=c&&b>=c)
	{
		if (a % c == 0 && b % c == 0)
		{
			result = c;
		}
		c++;
	}

	result2 = a * b / result;
	cout << a << "与" << b << "的最大公约数是" << result<<"\n";
	cout << a << "与" << b << "的最小公倍数是" << result2;
	return 0;
}