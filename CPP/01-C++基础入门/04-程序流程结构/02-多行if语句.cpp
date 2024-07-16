#include <iostream>
using namespace std;

int main() {
	//其实就是加了一个否则 else
	//如果否则, 刚好就是一对的

	//还是一样, 输入一个数字, 判断
	int num = 0;
	cin >> num;
	if (num > 10) {
		cout << "num > 10" << endl;
	}
	else {
		//否则 就是if不成立的条件下会执行的内容
		cout << "num <= 10" << endl;
	}
	return 0;
}