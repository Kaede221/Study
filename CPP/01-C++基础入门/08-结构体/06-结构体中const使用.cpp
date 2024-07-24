#include <iostream>
using namespace std;

//const自然就是不允许修改的内容
//当然, const不是在这里修改
struct Student {
	string name = "";
	int age = 0;
};

//改为指针传递, 可以减少内存
//同时给一个const, 防止修改里面的内容
void printStudent(const Student* s) {
	//这里没有星号的话会拷贝所有的属性, 如果是一个结构体数组的话, 那么复制的内容会非常大
	//所以值传递可以, 但是拷贝数据量巨大
	cout << "Name: " << s->name << endl;
	cout << "Age: " << s->age << endl;

	//但是使用指针, 就有可能修改内容
	//所以我们可以使用const来修饰, 防止修改内容
	// 下面这个代码会报错
	//s->age = 100;
}

int main() {
	Student s = { "Kaede", 18 };
	printStudent(&s);
	return 0;
}