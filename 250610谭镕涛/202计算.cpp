#include <iostream>
using namespace std;
int main()
{
	float x;
	float result;
	cin >> x;
	if (x > 0 && x < 1)
	{
		result = 3 - 2 * x;
	}
	else if (x >= 1 && x < 5)
	{
		result = 2.0 / (4 * x) + 1;
	}
	else if(x >= 5 && x < 10)
	{
		result = x * x;
	}
	else
	{
		result = 0;
	}
	cout << result;
	return 0;
}
//输入0.2，1，5，0的结果分别为2.6，1.5，25，0