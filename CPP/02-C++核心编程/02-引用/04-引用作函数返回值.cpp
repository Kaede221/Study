#include <iostream>
using namespace std;

//注意, 我们不能返回局部变量的引用
//函数的调用是可以作为左值的(就是等号左边的值)

//这里就是返回一个局部变量的引用
int& fun1() {
	int a = 0;
	return a;
}

int& fun2() {
	//我可以创建一个静态的变量
	//这个变量储存在全局区, 这些数据不会被系统释放
	static int a = 10;
	return a;
}

int main() {
	int& ref = fun1();
	//你会发现, 已经释放了, 值已经不对了
	//和指针其实是一样的
	cout << "ref = " << ref << endl;

	//第二种
	//这个就不会被释放了, 因为直接就是一个全局区
	int& ref2 = fun2();
	cout << "ref2 = " << ref2 << endl;

	//那么, 什么叫做, 作为左值呢?
	//我可以直接使用这个函数, 作为一个变量
	fun2() = 100;

	//因为函数值就是一个别名, 内存, 可以直接访问, 所以设置为100是成立的
	cout << "ref2 = " << ref2 << endl;
	return 0;
}