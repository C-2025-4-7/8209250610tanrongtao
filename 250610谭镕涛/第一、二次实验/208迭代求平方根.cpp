#include <iostream>
using namespace std;
int main()
{
	double x, a,y,diff;
	cout << "请输入数字" << endl;
	cin >> a;
	
	bool is_negative = false;
	if (a < 0)
	{
		is_negative = true;
		a = -a;
	}

	if (a == 0) 
	{
		if (is_negative)
		{
			cout << "0的平方根是0i" << endl;
		}
		else 
		{
			cout << "0的平方根是0" << endl;
		}
		return 0;
	}
    
	x = a;
	
	do
	{
		y = (x + a / x) / 2;
        diff = y - x;
		if (diff < 0)
		{
			diff = -diff;
		}
		x = y;
	} while (diff > 1e-5);
	
	if (is_negative)
	{
		cout << "-" << a << "的平方根是±" << y << "i" << endl;
	}
	else 
	{
		cout << a << "的近似平方根是±" << y << endl;
	}

	return 0;
}
//思考：（1）如果输入 a 为负，在运行时会出现什么情况? 修改程序使之能处理任何的 a 值。 
// 答：输出随机结果；已实现
//(2）能否 | xn + 1 - xn | < 10 - 10或更小 ? 为什么 ? 请试一下。
//答：不能；原因未知
