#include <iostream>
using namespace std;

/*
值传递就是函数调用的时候, 把实参的数值传入形参
如果形参发生了变化, 并不会影响原来的参数
*/

//首先随便给一个函数
//我想交换两个数据
void swap(int num1, int num2) {
	//看看交换前
	//这里的\n是代表换行的意思
	cout << "交换前\nnum1 = " << num1 << "\nnum2 = " << num2 << endl;

	//实现交换
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后\nnum1 = " << num1 << "\nnum2 = " << num2 << endl;
	//返回值不需要的时候, 不需要return
}

int main() {
	//给两个数据
	int a = 10;
	int b = 20;
	swap(a, b);
	// 输出时, 你或许发现已经成功交换了, 但是我们再看一下a和b
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//你会发现没有任何变化, 两个数据没有被交换
	//目前见过的传参函数, 都是值传递

	/* 为什么没有变化
	上面的代码, 其实等效于下面这样子(省略int之类的东西):
		a = 10;
		b = 20;
		num1 = a;
		num2 = b;
		交换num1, num2
		输出num1, num2
		输出a, b
	所以你会发现, 根本没有任何变化
	*/
	return 0;
}