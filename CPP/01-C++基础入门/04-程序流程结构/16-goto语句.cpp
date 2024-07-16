#include <iostream>
using namespace std;

int main() {
	//这个东西可以无条件的跳转
	//只要标签存在, 跳转就会成功
	//但是不建议使用, 因为这个东西会扰乱代码结构
	goto FLAG;
	cout << "我本来应当被执行" << endl;
FLAG:
	cout << "这个是Flag" << endl;
	return 0;
}