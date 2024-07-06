#include <iostream>
using namespace std;

int main() {
	/*
	- 标识符就是变量名之类的东西 
	首先, 标识符不能是关键字
	其次, 标识符开头不能是一个数字
	开头可以是字母或者下划线
	当然, 标识符中的字符是区分大小写的
	*/
	int a = 10;
	int A = 20;
	cout << "a = " << a << ", A = " << A << endl;

	//int int = 10; 不成立

	int _b = 30;
	cout << "_b = " << _b << endl;
	
	// 非要数字开头, 可以先给一个下划线
	int _1num = 1;
	cout << _1num << endl;
	return 0;
}