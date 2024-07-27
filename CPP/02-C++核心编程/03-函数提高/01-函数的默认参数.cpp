#include <iostream>
using namespace std;

//这个就是标题说的那样, 我们可以给函数默认值
//比如我现在想要给一个输出函数, 可以输出传入的数据

//这里直接给一个a = 10就好, 等于后面就是默认值了
//不过注意, 有默认值的参数需要放在后面, 没有默认值的参数要放在前面, 否则会报错
//如果有一个位置有了默认参数, 那么从这开始, 后面的参数都需要有默认值
void printNumber(int a = 10) {
	cout << "a = " << a << endl;
}

//另外, 如果函数的声明有默认参数, 那么实现的时候不能有默认参数
void print(string text = "请输入内容");

int main() {
	//这样, 在调用函数的时候, 就不一定需要给参数了, 可以直接调用函数
	printNumber(20);
	printNumber();

	//调用
	print();
	print("Hello World");
	return 0;
}

//这里就不能有默认参数, 因为声明的时候已经给了 (15行)
void print(string text) {
	cout << text << endl;
}