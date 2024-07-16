#include <iostream>
using namespace std;

int main() {
	//这个关键字 可以看到一个变量占用的内存空间是多少
	//可以当函数使用, 里面可以放类型, 也可以放变量
	short num1 = 10;
	cout << "short内存空间: " << sizeof(num1) << endl;
	cout << "short内存空间: " << sizeof(short) << endl;
	cout << "int内存空间: " << sizeof(int) << endl;
	cout << "long内存空间: " << sizeof(long) << endl;
	cout << "long long内存空间: " << sizeof(long long) << endl;
	// short < int <= long <= long long , 反正主要还是要看系统类型
	return 0;
}