#include <iostream>
using namespace std;
int main()
{
	char num;
	cout << "请输入一个字符";
	cin >> num;
	if (num >= 'a' && num <= 'z')
	{
		cout <<"转换结果为：" << (char)(num - 32) << endl;
	}
	else
	{
		int ascii = num + 1;
		cout <<"转换结果为：" << ascii << endl;
	}
	return 0;
}