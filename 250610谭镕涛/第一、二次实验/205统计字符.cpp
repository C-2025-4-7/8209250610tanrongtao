#include<iostream>
using namespace std;
int main()
{
	char c;
	int eng = 0, num = 0, space = 0, els = 0;
	cout << "请输入一段字符"<<'\n';
	while ((c = cin.get()) != '\n')
	{
		if (c >= '0' && c <= '9')
		{
			num++;
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			eng++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else
		{
			els++;
		}
	}
	cout << "数字有" << num << "个"<<'\n';
	cout << "英文有" << eng << "个" << '\n';
	cout << "空格有" << space << "个" << '\n';
	cout << "其他字符有" << els << "个";
	return 0;
}