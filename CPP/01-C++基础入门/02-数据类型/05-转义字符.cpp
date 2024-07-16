#include <iostream>
using namespace std;

int main() {
	//只需要记住一些特殊的转义符就好
	//比如回车 空格之类的东西
	cout << "警报: \a" << endl;
	cout << "换行: \n换行了" << endl;
	cout << "反斜杠: \\" << endl;

	//制表符会自动对齐字符 看起来更加美观一些
	cout << "制表符演示" << endl;
	cout << "Name\tAge" << endl;
	cout << "Kaede\t16" << endl;
	return 0;
}