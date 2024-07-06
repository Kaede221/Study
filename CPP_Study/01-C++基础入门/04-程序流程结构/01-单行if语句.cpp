#include <iostream>
using namespace std;

int main() {
	//就是一个条件判断
	//比如我允许用户输入一个数字
	int num = 0;
	cout << "输入一个数字: ";
	cin >> num;
	cout << "输入的数据为: " << num << endl;

	//语法就是if(条件){成立执行的语句}
	//根据用户输入数据的大小判断
	if (num > 10) {
		cout << "输入的数据大于10" << endl;
	}

	cout << "不管是否满足都会执行" << endl;

	//注意 if语句不要有分号 不然相当于没写
	if (true);
	{
		cout << "这是一个单独的代码块" << endl;
	}
	return 0;
}