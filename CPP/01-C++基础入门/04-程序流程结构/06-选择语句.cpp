#include <iostream>
using namespace std;

int main() {
	//其实就是多条件if的升级版本
	//使用起来更加方便一些 直接使用switch就好
	//格式就是switch(表达式){case:结果1:语句...break;}

	//比如我现在允许输入一个1~7的数据, 输出周几
	int day = 1;
	cin >> day;

	//给一个%, 防止输入7以上的数据
	//这里我对代码进行优化, 如果%7为0的话, 那么直接会返回一个7, 相当于周天
	//当然, 我没有负数相关的处理操作
	switch (day % 7 ? day % 7 : 7)
	{
		//这里的break是必须要写的, 不然判断完后会继续往后执行
		//break主要是用于跳出结构用的
	case 1:
		cout << "周一" << endl; break;
	case 2:
		cout << "周二" << endl; break;
	case 3:
		cout << "周三" << endl; break;
	case 4:
		cout << "周四" << endl; break;
	case 5:
		cout << "周五" << endl; break;
	case 6:
		cout << "周六" << endl; break;
	case 7:
		cout << "周天" << endl; break;
	default:
		cout << "没有这个选项!" << endl; break;
	}
	/*
	switch缺点, 就是只能判断整数 字符串类型
	优点就是执行效率高, 结构比较明了
	*/
	return 0;
}