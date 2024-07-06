#include <iostream>
using namespace std;

int main() {
	//最常见的应该就是=号了吧 让=左边的变量等于右边的数据
	int a = 10;

	//我可以让a自增20 这个时候可以用+=
	//等效于a = a + 20
	a += 20;
	cout << a << endl;

	//其他的符号都差不多 只要知道每个符号代表什么运算就好
	a -= 2;
	cout << a << endl;

	a *= 4;
	cout << a << endl;

	a /= 2;
	cout << a << endl;

	a %= 2;
	cout << a << endl;
	return 0;
}