#include<iostream>      
using namespace std;
int main()  
{
	int k=0, j=1;
	int i = k + 1;   //未定义k
	cout << i++ << endl;
	//int i = 1;     //重定义i
	cout << j++ << endl;
	cout << "Welcome to C++!"<< endl;     
	return 0;         
}
