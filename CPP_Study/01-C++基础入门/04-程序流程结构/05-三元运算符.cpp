#include <iostream>
using namespace std;

int main() {
	//这个东西可以说是最常见的东西了, 几乎每个语言都有
	//可以快速完成一个条件的判断
	//比如下面是一个判断是否成立的语句
	if (true) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	//但是可以用三元运算符更快捷的写出来
	//格式就是 条件 ? 成立时返回 : 不成立时返回
	cout << (true ? "true" : "false") << endl;

	//于是我们可以快速判断两个数据的大小
	int a = 10, b = 20;
	cout << (a > b ? "a > b" : "a < b") << endl;;
	return 0;
}