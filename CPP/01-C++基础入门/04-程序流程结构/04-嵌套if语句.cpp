#include <iostream>
using namespace std;

int main() {
	//生活就是嵌套, 不断地嵌套, 重复
	// --K@eo|e
	//就拿游戏举例子吧, 输入一个分数, 判断评级是什么
	int rank = 100;
	//如果rank大于60的话
	if (rank > 60) {
		//再判断是否大于90
		if (rank > 90) {
			//再判断100
			if (rank >= 100) {
				//成立, 直接A+最高
				cout << "A+" << endl;
			}
			else {
				//否则就是90~100, 给一个A
				cout << "A" << endl;
			}
		}
		else {
			//这里是60~90的区间
			cout << "B" << endl;
		}
	}
	else {
		//这个就是小于等于60的情况了
		cout << "C" << endl;
	}
	return 0;
}