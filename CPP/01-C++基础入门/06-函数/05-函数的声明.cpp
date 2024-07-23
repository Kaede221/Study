#include <iostream>
using namespace std;

/*
简单说, 就是在函数定义之前, 声明这个函数
用处就是可以在代码的任何地方调用这个函数
*/

//声明函数一般写在最上面
//没有代码实现, 只有形参列表和函数名, 返回类型
int get_max(int a, int b);

int main() {
	//如果没有声明, 你会发现报错了, 找不到这个函数
	//所以我们就需要手动声明这个函数了
	cout << get_max(10, 20) << endl;
	return 0;
}

//我可以把这个函数定义在main后面
int get_max(int a, int b) {
	//获取大一点的数据
	return a > b ? a : b;
}

//当然, 声明是可以写在后面的, 而且一个声明可以写多次
//但是实现只能实现一次, 否则会出现冲突报错的情况
int get_max(int a, int b);