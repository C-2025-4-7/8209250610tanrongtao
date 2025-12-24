/*6、字符串中每个字母出现的次数：
请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
void count(const char s[], int counts[])
counts是一个有26个元素的整数数组。const[0]，const[1]，…，
const[25]分别记录a，b，…，z出现的次数。字母不分大小写，例
如字母A和字母a都被看作a。
编写测试程序，读入字符串并调用count函数，显示非零的次数。下面是程序的一个运行样例：*/
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
		counts[i] = 0;
	
	int size = strlen(s);
	
	for (int j = 0; j < size; j++)
	{
		char ch = tolower(static_cast<unsigned char>(s[j]));
		if (ch >= 'a' && ch <= 'z')
		{
			int idx = ch - 'a';
			counts[idx]++;
		}
	}
}
int main()
{
	char s[200];
	int counts[26];
	
	cout << "请输入字符串" << endl;
	cin.getline(s, 200);

	count(s, counts);

	for (int k = 0; k < 26; k++)
	{
		if (counts[k] != 0)
		{
			char c = 'a' + k;
			cout << c << "有" << counts[k] << "个" << endl;
		}
	}
	return 0;
}