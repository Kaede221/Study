#include <iostream>
using namespace std;

//我们这里直接定义一个加法函数
//传入两个整数，返回相加的结果
int add(int num1, int num2) {
	return num1 + num2;
}

int main() {
	//然后我们就可以直接调用这个函数了
	//直接就是: 函数名(参数);
	//你会发现直接运行是没有效果的，因为返回了，你没有使用返回值
	add(10, 20);

	//这里需要输出才可以
	cout << "10 + 20 = " << add(10, 20) << endl;

	//或者你可以通过一个变量保存这个数据，然后输出
	int sum = add(20, 30);
	cout << "20 + 30 = " << sum << endl;

	/*
	这里传入的20, 30其实是函数参数的真实值
	而函数定义的时候, 那个num1, num2其实是形参, 因为他们没有一个准确的值, 只有在运行的时候, 才会传入一个值
	实参的值会直接传递给形参, 按照位置进行传递
	*/
	return 0;
}