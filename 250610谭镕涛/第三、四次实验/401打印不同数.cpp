//1、打印不同的数：
//编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
//提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数。

#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	int a[10];
	int num;

	cout << "请输入十个整数" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		
		bool p = false;

		for (int j = 0; j < count; j++)
		{
			if (num == a[j])
			{
				p = true;
				break;
			}
		}

		if (p == false)
		{
			a[count] = num;
			count++;
		}
	}
	cout << "这十个数中不重复的数是" << endl;
	for (int k = 0; k < count; k++)
	{
		cout << a[k] << "\t";
	}
	return 0;
}