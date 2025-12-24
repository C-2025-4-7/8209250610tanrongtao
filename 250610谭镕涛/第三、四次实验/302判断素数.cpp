//2.   编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
//bool is_prime(int num), 如果num是素数函数返回true，否则返回false；
//利用函数is_prime找出前200个素数，并按每行10个输出：
//2     3      5      7    11    13    17    19    23    29
#include <iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
    if (num <= 1) return false;   
    if (num == 2) return true;    
    if (num % 2 == 0) return false; 
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main()
{
    int count = 0;
    int i=2;
    while (count < 200)
    {
        if (is_prime(i))
        {
            cout << i << "\t";
            count++;
            if (count % 10 == 0)
            {
                cout << endl;
            }
        }
        i++;
    }
    return 0;
}