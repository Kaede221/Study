#include <iostream>
using namespace std;

int main() {
	//while(条件){执行的语句}
	//这种循环一般用于写死, 运行程序的主窗口之类的东西 -> 不是直接while(true), 是有条件的死循环, 比如输入某个东西break这样子

	//我们可以用他来打印0~9的数字
	int num = 0;
	//条件就是num小于等于9, 这样子打印完成9以后, num变为10, 不符合条件, 自动退出
	while (num <= 9)
	{
		//输出num, 这里用空格分开, 不然不好看
		cout << num << " ";
		num++;
	}
	return 0;
}