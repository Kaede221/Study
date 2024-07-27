#include <iostream>
using namespace std;

int main() {
	//引用就是一个指针常量, 指针的指向不能修改, 但是内容值可以修改
	int a = 10;
	int& numberA = a;
	cout << "a = " << numberA << endl;

	//上面的, 等效于下面这样
	//指针常量
	int* const numberA_point = &a;
	cout << "a = " << *numberA_point << endl;

	//不过, 引用更加安全, 因为只能使用已经存在的变量, 不会存在野指针的情况
	return 0;
}