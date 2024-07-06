#include <iostream>
using namespace std;

int main() {
	//就是常见的字符串了
	//有两种方法, 一种就是C语言格式的字符串
	//也就是用一串字符组成的东西 比如下面这样子
	// char 名称[] = "内容";
	char str1[] = "Hello World";
	cout << str1 << endl;

	//C++中的字符串就是直接用string了 推荐使用这个, 方便一些
	//注意 2019以后的版本就不需要包含string头文件了, 可以直接使用的
	string str2 = "Okok";
	cout << str2 << endl;
	return 0;
}