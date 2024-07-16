#include <iostream>
using namespace std;

int main() {
	//学过电路都知道, 与或非
	//与就是and 同时成立才是真 或就是or 一个成立就是真
	cout << (true && true) << endl;
	cout << (true && false) << endl;

	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || false) << endl;

	//还有取反
	cout << !true << endl;
	//这个符号可以连用 不会报错 -> 不过两个!!在一起相当于没有变化
	cout << !!!!!!!!!!!!!!!!!!!!!!false;
	return 0;
}