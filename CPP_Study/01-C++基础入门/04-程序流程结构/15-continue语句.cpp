#include <iostream>
using namespace std;

int main() {
	//就像它的名字一样, 继续执行
	//简单说, 可以跳过本次循环, 进入下一轮循环
	//比如我不想让下面的代码输出3
	for (int i = 0; i < 10; i++) {
		//那么等于3的时候, 直接进入下一轮循环
		if (i == 3) {
			continue;
		}
		cout << i << endl;
	}

	// 或者我想要只输出偶数
	for (int i = 0; i < 10; i++) {
		if (i % 2 != 0) {
			continue;
		}
		cout << i << " ";
	}

	//总是 这个东西可以用来根据条件筛选数据
	return 0;
}