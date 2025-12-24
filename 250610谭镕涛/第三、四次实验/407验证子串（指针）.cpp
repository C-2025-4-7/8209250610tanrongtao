/*(1)编写函数检查字符串s1是否为字符串s2的子串，若是，返
回第一次匹配的下标，否则返回 - 1。在主程序中输入字符串
s1与s2，调用函数实现。
函数原型：int indexof(const char* s1, const char* s2);*/
#include<iostream>
using namespace std;
int indexof(const char* s1, const char* s2)
{
	int length1 = strlen(s1);
	int length2 = strlen(s2);

	if (length1 > length2)
	{
		return -1;
	}

	for (int i = 0; i <= length2 - length1; i++)
	{
		int j;
		for (j = 0; j < length1; j++)
		{
			if (s1[j] != s2[i + j])
			{
				break;
			}
		}

		if (j == length1)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	char s1[100], s2[100];
	int result;
	cout << "请输入字符串s1" << endl;
	cin.getline(s1, 100);
	cout << "请输入字符串s2" << endl;
	cin.getline(s2, 100);

	result = indexof(s1, s2);

	if (result != -1)
	{
		cout << "indexOf(" << "“" << s1 << "”, “" << s2 << ")” is " << result;
	}
	else
	{
		cout << "indexOf(" << "“" << s1 << "”, “" << s2 << ")” is " << -1;
	}
	return 0;
}