#include <iostream>
using namespace std;

int main() {
	// 简单说, 和while循环对比, 就是先执行一次语句, 再判断条件
	// 语法就是do{代码}while(条件);
	// 比如这样子:
	do {
		cout << "不管条件, 反正执行一次" << endl;
	} while (false);

	//不过实话说, 这个东西用的极少, 几乎用不到就对了
	//只要你掌握语法就好
	
	//上面的代码相当于while循环一次
	while (true)
	{
		cout << "1111" << endl;
		break;
	}
	return 0;
}