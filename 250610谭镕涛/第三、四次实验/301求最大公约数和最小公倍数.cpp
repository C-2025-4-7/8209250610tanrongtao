//1、输入自然数m和n，
//（1）求他们的最大公约数（或称最大公因数）。
//要求输入、输出在主函数中进行，求公约数由函数实现。
//（2）在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
#include <iostream>
using namespace std;
void calculate(int a, int b,int& gcd,int& lcm)
{
	int c = 1,result=1;
	while (a >= c && b >= c)
	{
		if (a % c == 0 && b % c == 0)
		{
			result = c;
		}
		c++;
	}
	gcd = result;
	lcm = a * b / gcd;
	
}

int main()
{
	int m, n,gcd,lcm;
	cout << "请输入第一个正整数" << endl;
	cin >> m;
	cout << "请输入第二个正整数"<<endl;
	cin >> n;
	calculate(m, n,gcd,lcm);
	
	cout << m << "与" << n << "的最大公约数是:" << gcd<<endl;
	cout << m << "与" << n << "的最小公倍数是:" << lcm<<endl;
}

