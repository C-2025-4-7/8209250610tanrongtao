/*(2)编写一个函数将以字符串形式表示的一个
16进制数转换为10进制数，并在主函数中测
试。函数原型 int parseHex(const char* const hexString);
如：调用函数 parseHex(“A5”); 返回165*/
#include<iostream>
#include <ctype.h> 
using namespace std;
int parseHex(const char* const hexString)
{
    int result = 0;
    const char* p = hexString;

    while (*p != '\0') {
        char ch = toupper(*p);
        int value;

        if (ch >= '0' && ch <= '9') {
            value = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            value = ch - 'A' + 10;
        }
        else {
            return -1;
        }

        result = result * 16 + value;
        p++;
    }

    return result;
}

int main()
{
    char hexStr[20];
    int result;

    cout << "请输入16进制字符串：";
    cin >> hexStr;

    result = parseHex(hexStr);

    cout << "对应的10进制数是：" << result << endl;

    return 0;
}