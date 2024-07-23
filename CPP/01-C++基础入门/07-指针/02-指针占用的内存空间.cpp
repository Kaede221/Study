#include <iostream>
using namespace std;

int main() {
	//指针也是一种数据类型
	//32位下, 不管指针指向的是int还是什么数据类型, 都是4个字节 -> 64位自然就是8字节了
	//因为指针指向的是一串内存, 一个十六进制的数据, 所以8/4个字节已经足够了
	cout << "int*的大小为: " << sizeof(int*) << endl;
	cout << "float*的大小为: " << sizeof(float*) << endl;
	cout << "bool*的大小为: " << sizeof(bool*) << endl;
	cout << "string*的大小为: " << sizeof(string*) << endl;
	return 0;
}