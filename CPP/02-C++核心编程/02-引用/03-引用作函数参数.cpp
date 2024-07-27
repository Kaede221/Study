#include <iostream>
using namespace std;

//通过引用, 可以让形式参数修饰实际参数
//优点是可以简化指针, 不需要指针了

//这里还是一个普通的交换两个数据的函数
void swap0(int a, int b) {
	int t = a;
	a = b;
	b = t;
}

//使用地址传递
//地址, 需要使用指针进行接收
void swap1(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

//引用传递
void swap2(int& a, int& b) {
	//然后就可以直接使用a和b了, 因为使用的是一个别名, 地址其实是一样的
	int t = a;
	a = b;
	b = t;
}

int main() {
	//测试
	int a = 10;
	int b = 20;
	swap0(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap1(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//调用的时候可以直接写入数据, 和第一次的代码是一模一样的
	swap2(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//其实本质上还是指针的传递, 只是用引用简化了这一步骤
	return 0;
}