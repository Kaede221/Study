#include <iostream>
using namespace std;

int main() {
	//水仙花数是一个三位数 它的每个位上的数字的三次方的和等于它本身
	//比如1^3 + 5^3 + 3^3 = 153
	//我们来尝试一下找到所有水仙花数(注意 三位数是从100~999)

	//初始化一个num, 默认开始就是100
	int num = 100;

	// 进入循环, 因为最大就是999, 所以小于1000就行(小于等于999也可以)
	while (num < 1000) {
		// 初始化变量
		int ge = 0;
		int shi = 0;
		int bai = 0;

		//获取每个位上的数据
		ge = num % 10;
		shi = num / 10 % 10;
		bai = num / 100 % 10;

		//判断是否为水仙花数 是的话打印
		if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num) {
			cout << num << " ";
		}

		//不管是不是, 我们让num自增一个
		num++;
	}
	return 0;
}