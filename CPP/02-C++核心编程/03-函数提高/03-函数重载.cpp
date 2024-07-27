#include <iostream>
using namespace std;

//允许同一个函数名, 根据参数的不同, 来实现多次复用
/* 函数重载的满足条件
1. 都在同一个作用域下面(目前都是全局作用域)
2. 函数名称相同
3. 函数参数类型不同, 个数不同或者顺序不同
注意, 返回类型不能发生变化, 否则无法重载, 因为会发生歧义的情况
包括, 一个函数参数没有默认值, 一个函数有默认值, 这样无法重载
反正考虑能否区分就知道了, 规则就是这么一条, 不能区分就不行, 能区分就可以
*/

void func(int) {
	cout << "func int" << endl;
}

//同一个名称, 但是参数的类型不同
void func(string) {
	cout << "func string" << endl;
}

void func(int, int) {
	cout << "func int int" << endl;
}

//引用也是可以重载的
void func1(int& a) {
	cout << "int& a" << endl;
}

//但是如果这样子呢?
void func1(const int& a) {
	cout << "const int& a" << endl;
}

int main() {
	//这样就可以通过同一个函数名调用了
	func(1000);
	func("Hello");

	//个数不同
	func(10, 20);

	//引用 这里如果是常量, 那么自动调用const的那个函数
	//其实等效于创建一个变量, 然后让a指向那个空间, 所以合法
	func1(10);
	int a = 10;
	//变量的话, 传入的就是一个变量, 没有const 因为引用需要访问一个合法的内存空间
	func1(a);
	return 0;
}