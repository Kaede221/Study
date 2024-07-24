#include <iostream>
using namespace std;

//其实和之前的int数组相比, 就是改了一下类型而已
//数组里面存放的是自定义的数据类型

//这里直接定义一个结构体出来
struct Student
{
	//你可以在这里给一些初始化数据
	string name = "";
	int age = 0;
};

int main() {
	//结构体数组, 和普通的数组差不多, 但是初始化的时候有一些不一样就是了
	//其实就是嵌套一下, 就可以定义结构体了
	Student arr1[] = {
		{"Name 1", 100},
		{"Name 2", 80},
		{"Name 3", 70}
	};

	//随后和数组一样, 只是这次数组里面的元素是一个结构体就是了
	//还是直接遍历
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		cout << "姓名: " << arr1[i].name << ", 年龄: " << arr1[i].age << endl;
	}
	return 0;
}