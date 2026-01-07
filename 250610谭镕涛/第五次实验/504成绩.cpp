/*4、建立一个对象数组，内放5个学生的（学号，成绩），
设立一个函数max，用指向对象的指针作函数参数，在max
函数中找出5个学生的最高成绩者，并输出其学号。*/
#include<iostream>
using namespace std;
class Student {
private:
	int num;
	int grade;
public:
	Student(int n, int g) :num(n), grade(g){}

	int getNum()
	{
		return num;
	}

	int getGrade()
	{
		return grade;
	}
};
int max(Student* arr,int len)
{
	int maxGrade = arr[0].getGrade();
	int maxNum = arr[0].getNum();
	for (int i = 1; i < len; i++)
	{
		if (arr[i].getGrade() > maxGrade)
		{
			maxGrade = arr[i].getGrade();
			maxNum = arr[i].getNum();
		}
	}
	cout << "成绩最高的学生的学号是" << maxNum;
	return 0;
}
int main()
{
	Student arr[5] =
	{
		Student(1,65),Student(2,73),Student(3,96),Student(4,79),Student(5,87)
	};
	max(arr, 5);
	return 0;
}