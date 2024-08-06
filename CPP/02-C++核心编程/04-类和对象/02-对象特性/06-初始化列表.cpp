#include <iostream>
using namespace std;

//简单说, 就是统一进行属性的初始化
//这里还是随便给一个类就好
class Student {
public:
	int mAge;
	string mName;
	float mHeight;

	//一般来说, 我们会使用构造函数进行初始化
	/*Student(int age, string name, float height) {
		mAge = age;
		mName = name;
		mHeight = height;
	}*/

	//另外就是初始化列表, 也是在构造函数后面写
	//这里前面不变, 只要给一个冒号, 后面给属性就好, 这样一行就可以完成了
	Student(int age, string name, float height) :mAge(age), mName(name), mHeight(height) {
		//里面可以写一些其他的东西
		cout << "初始化完成" << endl;
	}

	//给一个统一的函数
	void showInfo() {
		cout << "age = " << mAge << endl;
		cout << "name = " << mName << endl;
		cout << "height = " << mHeight << endl;
	}
};

int main() {
	//正常使用构造函数初始化对象
	//使用初始化列表语法不变
	Student s1(18, "Kaede", 175.5);
	s1.showInfo();
	return 0;
}