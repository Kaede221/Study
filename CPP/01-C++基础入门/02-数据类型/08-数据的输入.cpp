#include <iostream>
using namespace std;

int main() {
	//其实很简单, 直接使用cin就好, 会放到一个变量里面
	//可以获取整形 小数 字符(串) 布尔

	//给一个初始化
	int a = 0;
	cout << "给a赋值 >> ";

	//直接用cin就好 其他类型都是一摸一样的
	cin >> a;
	cout << "a的数值为: " << a << endl;

	string s1 = "";
	cout << "输入随便输入些什么 >> ";
	cin >> s1;
	cout << s1 << endl;

	// 布尔类型的话, 只要不是0, 其他输入的东西都是1, 也就是true
	return 0;
}