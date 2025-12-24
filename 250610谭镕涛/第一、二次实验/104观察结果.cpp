#include <iostream>  
#include <iomanip>                                  
using namespace std;
int main()
{
	unsigned int testUnint = 0xfffe;//65534   
	cout << "output in unsigned int 1 type:"  << testUnint << endl;
	cout << "output in char type:!" << static_cast<char>(testUnint) << endl;
	cout << "output in short type:" << static_cast<short>(testUnint) << endl; 
	//为什么结果为-2？
	//答：short是16位有符号整数，0xfffe作为16位有符号数的补码表示是-2
	cout << "output in int type:" << static_cast<int> (testUnint) << endl;
	cout << "output in double type:" << static_cast<double>(testUnint) << endl;
	cout << "output in double type:" << setprecision(4) << static_cast<double>(testUnint) << endl;
	cout << "output in Oct unsigned int  type:" << oct << testUnint << endl;
	cout << "output in Hex unsigned int type:" << hex << testUnint << endl;                                           
	
	double num=3.14;
	cout << "double" << num << "转化成int:" << static_cast<int>(num) << endl;
	system("pause");
	return 0;
}
