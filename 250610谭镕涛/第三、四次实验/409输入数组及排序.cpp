/*(3) 主程序中建立一动态数组（使用new），数组元素及元
素个数由键盘输入，动态调试观察指针及指针指向的内容；
设计一个函数对数组由小到大排序；主程序中用指针方式输
出数组元素；最后释放数组内存（delete）。*/
#include<iostream>
using namespace std;
void bubble(int list[], int size)
{
	int temp = 0;
	bool changed = true;
	do
	{
		changed = false;
		for(int j=0;j<size-1;j++)
			if (list[j] > list[j + 1])
			{
				temp = list[j + 1];
				list[j + 1] = list[j];
				list[j] = temp;
				changed = true;
			}
	} while (changed);
}

int main()
{
	int size;
	cout << "请输入数组元素个数" << endl;
	cin >> size;
	int* arr = new int[size];

	cout << "请输入数组元素" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	bubble(arr, size);

	for (int j = 0; j < size; j++)
	{
		cout << *(arr+j) << '\t';
	}

	delete[] arr;

	return 0;
}