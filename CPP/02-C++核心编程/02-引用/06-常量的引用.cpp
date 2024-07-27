#include <iostream>
using namespace std;

//普通的打印函数
void print(const int &num) {
	cout << "num = " << num << endl;
	//我们如果在这里修改参数的话, 直接是不会报错的, 这样容易出现一些意外, 比如我修改了不应该修改的数据
	//num = 1000;

	//所以需要给一个const, 防止修改数据
}

int main() {
	//可以用来修饰形式参数, 防止误操作
	int a = 10;
	//int& ref = 10; 这句话不可以, 因为10不是已经存在的内容
	//但是可以给一个const
	const int& ref = 10;
	//其实等效于先创建一个变量, 储存为10, 然后给一个引用, 指向这个原名(只不过原名是编译器的, 自己看不到)
	//而且, 这个时候我们不能修改
	//ref = 20;

	//主要还是用于修饰形参
	print(a);
	return 0;
}