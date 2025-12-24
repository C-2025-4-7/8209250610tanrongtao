#include<iostream>
using namespace std;
int main()
{
	double num1, num2, result;
	char op;
	cout << "请输入第一个数字";
	cin >> num1;
	cout << "请输入运算符";
	cin >> op;
	cout << "请输入第二个数字";
	cin >> num2;

	switch (op)
	{
	case '+':
	{
		result = num1 + num2;
		cout << "结果为" << result;
		break;
	}
	case '-':
	{
		result = num1 - num2;
		cout << "结果为" << result;
		break;
	}
	case '*':
	{
		result = num1 * num2;
		cout << "结果为" << result;
		break;
	}
	case '/':
	{
		if (num2 == 0)
		{
			cout << "错误，除数不得为零";
		}
		else
		{
			result = num1 / num2;
			cout << "结果为" << result;
		}
		break;
	}
	case'%':
	{
		if (num2 == 0)
		{
			cout << "错误，除数不得为零";
		}
		else
		{
			result = int(num1) % int(num2);
			cout << "结果为" << result;
		}
		break;
	}
	default:
	{
		cout << "错误，非法运算符";
	}
	}
	return 0;
}