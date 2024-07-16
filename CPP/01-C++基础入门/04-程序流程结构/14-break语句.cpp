#include <iostream>
using namespace std;

int main() {
	//break 主要用于跳出循环
	//比如我现在要说, 在第三次循环的时候跳出循环
	for (int i = 0; i < 10; i++) {
		// 如果等于三, 其实就是运行到第三轮的时候
		if (i == 3) {
			//直接break退出循环就好, 后面的内容就不会执行了
			break;
		}
		cout << i << endl;
	}

	//还有就是switch里面会用到
	int num = 2;
	switch (num)
	{
	case 1:cout << "1" << endl; break;
		//如果没有break, 那么会继续执行下面的代码
		//可以把num改成2试试看
	case 2:cout << "2" << endl;
	case 3:cout << "3" << endl;
	default:
		break;
	}
	return 0;
}