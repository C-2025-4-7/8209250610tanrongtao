#include <iostream>
using namespace std;
int main()
{
	float price = 0.8, result, average;
	int num = 2, sum = 0,day = 0;
	while (num <= 100)
	{
		sum = sum + num;
		day++; 
		num = 2 * num;
	}
	result = price*sum;
	average = result / day;
	cout << "结果为" << average<<"元";
	return 0;
}