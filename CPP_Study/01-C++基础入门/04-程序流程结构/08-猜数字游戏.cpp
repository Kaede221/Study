#include <iostream>
using namespace std;

int main() {
	// 这是一个小游戏 系统自动给一个随机数
	// 给一个%100, 保证区间是0~99
	// 我们需要1~100, 直接+1就好啦
	// 这里的随机数其实是伪随机, 应该是42就对了, 需要真随机的话需要设置种子, 这里没有必要
	int num = rand() % 100 + 1;
	cout << num << endl;
	while (true) {
		//初始化玩家的输入
		int user = 0;
		cout << "猜猜看是多少: ";
		cin >> user;

		//直接用if判断就好
		if (user > num) {
			cout << "大了!" << endl;
		}
		else if (user < num) {
			cout << "小了!" << endl;
		}
		else {
			cout << "猜对了!" << endl;
			//对了以后, 直接退出循环就好
			break;
		}
	}
	return 0;
}