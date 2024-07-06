#include <iostream>
using namespace std;

int main() {
	// 有很多种整形的格式 比如int short long, long long

	// 短整型 -32768 ~ 32767
	// 超出范围, 会变成负数哦
	short num1 = 32768;

	// 整形 更大一些了 -> 这个是最常用的一个
	int num2 = 10;

	// 更大了
	long num3 = 10;

	long long num4 = 10;
	// 输出其实看起来都是一样的 但是他们的大小是不一样的!
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	return 0;
}