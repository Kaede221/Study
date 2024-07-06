#include <iostream>
using namespace std;

int main() {
	//就是char 但是只能储存单个字符
	//使用的是单引号 这个要注意
	//只需要记住, a是97, A是65就好 剩下的都是可以自己计算的
	char c1 = 'A';

	//char 只占用一个字节的大小
	cout << "c1 = " << c1 << ", " << sizeof(c1) << endl;

	//储存方式是按照数字来储存 是一个整数
	//所以是可以参与数学计算的哦
	cout << "c1 + 5 = " << c1 + 5 << endl;

	//这里插一嘴, 可以强制转换, 把int转换为char
	cout << (char)80 << endl;
	return 0;
}