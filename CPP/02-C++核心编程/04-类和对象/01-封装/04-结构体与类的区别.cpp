#include <iostream>
using namespace std;

/* 开门见山
* 其实这两个没什么大的区别
* 唯一的区别, 就是两个的默认权限不一样, class默认是私有, struct默认是共有
*/
class MYCLASS {
	//这里不写任何权限
	int a;
};

struct MYSTRUCT
{
	int a;
};

int main() {
	//默认私有权限, 我们不能访问里面的a成员
	MYCLASS c1{};

	MYSTRUCT s{};
	//但是结构体默认共有, 可以直接访问
	s.a = 10;
	cout << "a = " << s.a << endl;
	return 0;
}