#include <iostream>
using namespace std;

int main() {
	// 浮点型 就是小数而已 也是分为了很多种
	// float可以保存7位有效数字 后面建议给一个F, 保证类型不出问题
	// 如果没有F的话, 会默认使用双精度类型
	float num1 = 10.1F;
	cout << "单精度: " << num1 << ", 大小为" << sizeof(num1) << endl;
	double num2 = 3.1415926;
	cout << "双精度: " << num2 << ", 大小为" << sizeof(num2) << endl;

	// 不过你应该发现了, 只有六个有效数字, 如果要查看更多的有效数字, 是需要额外配置的
	// 反正, 默认情况下输出一个小数, 会默认显示6位有效数字

	// 还有一种表示小数的方法 科学计数法
	// 下面这个就是3*10^2次方
	float num3 = 3e2;
	cout << "num3 = " << num3 << endl;

	// 这个就是*0.1^2次方
	float num4 = 3e-2;
	cout << "num4 = " << num4 << endl;
	return 0;
}