/*3、需要求3个长方柱的体积，请编一个基于对象的程
序。数据成员包括length(长)、width(宽)、height(高
)。要求用成员函数实现以下功能：
(1)由键盘分别输入3个长方柱的长、宽、高；
(2)计算长方柱的体积；
(3)输出3个长方柱的体积。
请编程序，上机调试并运行。*/
#include<iostream>
using namespace std;
class cuboid{
private:
	int height;
	int width;
	int length;
	int volume;
public:
	void Set()
	{
		cout << "请依次输入长、宽、高"<<endl;
		cin >> length >> width >> height;
	}
	void Calculate()
	{
		volume = height * width * length;
	}
	void ShowVolume()
	{
		cout << "该长方体的体积为" << volume<<endl;
	}
};

int main()
{
	cuboid cu1;
	cout << "第一个长方体"<<endl;
	cu1.Set();
	cu1.Calculate();
	cu1.ShowVolume();
	cuboid cu2;
	cout << "第二个长方体" << endl;
	cu2.Set();
	cu2.Calculate();
	cu2.ShowVolume();
	cuboid cu3;
	cout << "第三个长方体" << endl;
	cu3.Set();
	cu3.Calculate();
	cu3.ShowVolume();
}