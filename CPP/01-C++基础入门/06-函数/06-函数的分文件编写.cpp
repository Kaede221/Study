#include <iostream>
using namespace std;

//直接引入需要的头文件即可
//然后就可以直接使用swap了
#include "swap.h"

//我们需要写一个h头文件 swap.h
//还有一个cpp的源文件 swap.cpp
//在头文件里面写函数的声明
//在源文件中写函数的定义

//函数的声明
//void swap(int a, int b);
//函数的定义
//void swap(int a, int b) {
//	int t = a;
//	a = b;
//	b = t;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

int main() {
	swap(10, 20);
	return 0;
}