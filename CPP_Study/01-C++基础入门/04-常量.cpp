#include <iostream>
using namespace std;

//常量就是基本不变的量
//比如一周有7天, PI是3.1415926...

//定义的方法有两种 第一种就是使用define操作
#define WEEKDAYS 7

//第二种就是使用const修饰变量, 但是不允许修改了 等效于常量 更加推荐一些
const double PI = 3.14;

int main() {
	cout << "一周有" << WEEKDAYS << "天" << endl;
	cout << "圆周率大约为" << PI << endl;
	//无法修改 会报错的
	//PI = 3;
	return 0;
}