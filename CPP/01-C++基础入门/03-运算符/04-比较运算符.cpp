#include <iostream>
using namespace std;

int main() {
	/*
	顾名思义吧 其实就是大于小于等于不等于这些
	这个...我是感觉没什么说的, 就是一些基本的比较
	*/
	//这里给一个小括号, 提高优先级 不然按照顺序会出错的
	cout << (1 > 2) << endl;
	cout << (1 < 2) << endl;
	cout << (10 == 10) << endl;
	cout << !(10 == 10) << endl;
	cout << (10 >= 5) << endl;
	return 0;
}