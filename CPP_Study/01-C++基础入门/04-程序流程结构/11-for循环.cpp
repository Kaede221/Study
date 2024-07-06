#include <iostream>
using namespace std;

int main() {
	//这个东西是最常用的循环了
	//语法就是 for(起始表达式; 条件; 额外表达式){循环体}
	//注意 中间用分号分割
	//比如我现在要输出0~9
	for (int i = 0; i < 10; i++) {
		//直接输出i就好
		cout << i << " ";
	}

	//本质上 上面的for循环等效于下面这样子
	cout << endl; //换一下行

	int i = 0;
	//是的, for循环其实可以不写任何可选参数
	for (;;) {
		cout << i << " ";
		//如果if只有一个执行语句, 那么可以省略大括号
		if (i > 8)break;
		i++;
	}
	return 0;
}