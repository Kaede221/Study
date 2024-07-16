#include <iostream>
using namespace std;

int main() {
	//就是true或者false, 真或者假
	//其实也可以用1或者0来代替
	//只占用一个字节
	bool flag = true;

	// 你可以看到, 其实就是1
	cout << "flag = " << flag << endl;

	flag = false;
	cout << "flag = " << flag << endl;
	cout << "大小: " << sizeof(flag) << endl;
	return 0;
}