#include <iostream>
using namespace std;

//其实就是一个排列组合
//我们都知道, 参数的有无, 返回值的有无是可选的
//所以直接就是2x2=4种情况

//有参数, 无返回值
void fun1(int a) {}

//有参数, 有返回值
int fun2(int a) {
	return a + 1;
}

//无参数, 无返回值
void fun3() {}

//无参数, 有返回值
string fun4() {
	return "Hello World";
}

int main() {
	//调用还是不变, 直接函数名(有无参数);
	fun1(10);
	cout << fun2(10) << endl;
	fun3();
	cout << fun4() << endl;
	return 0;
}