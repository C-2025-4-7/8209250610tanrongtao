/*4、合并两个排列好的数组：
编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
使用size1 + size2次比较实现函数。编写测试程序，提示用户输入两个排列好的数组，并显示
合并以后的数组。下面是一个运行样例。注意，输入数据的第一个数字是数组的元素数，而不
是数组的一部分。假定数组大小不超过80。*/
#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	while (i < size1 && j < size2)
	{
		if (list1[i] <= list2[j])
		{
			list3[k++] = list1[i++];
		}
		else 
		{
			list3[k++] = list2[j++];
		}
	}
	while (i < size1) 
	{
		list3[k++] = list1[i++];
	}
	while (j < size2) 
	{
		list3[k++] = list2[j++];
	}
}

int main()
{
	int size1, size2,size3;
	cout << "注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。" << endl;
	cout << "请输入第一个排列后的数组（先输入元素个数，再输入元素）:" << endl;
	cin >> size1;
	int* list1 = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	cout << "请输入第二个排列后的数组（先输入元素个数，再输入元素）:" << endl;
	cin >> size2;
	int* list2 = new int[size2];
	for (int j = 0; j < size2; j++)
	{
		cin >> list2[j];
	}

	size3 = size1 + size2;
	int* list3 = new int[size3];

	merge(list1, size1, list2, size2, list3);

	cout << "合并后的数组为：" << endl;
	int count = 0;
	for (int k = 0; k < size3; k++)
	{
		cout << list3[k] << "\t";
		count++;
		
		if (count % 10 == 0)
		{
			cout << endl;
		}
	}
	delete[] list1, list2, list3;
	return 0;
}
