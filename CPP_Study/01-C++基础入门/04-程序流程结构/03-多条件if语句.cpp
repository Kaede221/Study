#include <iostream>
using namespace std;

int main() {
	//就是有多次判断而已
	//直接上例子吧, 没什么说的
	int a = 10;
	if (a > 20) {
		cout << "a > 20" << endl;
	}
	else if (a > 10) {
		cout << "a > 10" << endl;
	}
	else if (a > 0) {
		cout << "a > 0" << endl;
	}
	else {
		cout << "a <= 0" << endl;
	}
	return 0;
}