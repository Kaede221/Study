#include <iostream>
using namespace std;

/* 对象是可以初始化的
生活中的手机之类的东西, 都是可以进行出厂设置的
类也不例外, 可以手动进行初始化
为了初始化, 就需要用到这两种函数了

另外, 这两个函数会被函数自动调用, 你可以不写, 编译器会自动提供一个默认的构造和析构函数, 但是是空实现
*/

//一样, 随便给一个类
class Student {
private:
	//这里还是给一些属性
	string name;
	int age;

public:
	//这个就是构造函数了, 类名(){} 没有返回值, 也没有void
	//但是可以有参数, 可以重载本函数
	//创建对象的时候, 自动调用, 而且只会调用一次
	Student(string name, int age) {
		//可以在这里, 实现对学生对象的初始化
		//这里使用了this, 意思是指向本对象, 这样可以解决重名变量的问题, 你只需要了解就好, 也可以使用其他变量
		this->age = age;
		this->name = name;
		cout << "构造完成, Name: " << this->name << ", age: " << this->age << endl;
	}

	//还有析构函数, 和上面的区别就是有一个波浪符号
	//只是析构函数不能有参数, 在对象销毁之前, 会自动调用一次这个函数, 你可以看到程序结束前会输出这些东西
	~Student() {
		cout << "类被销毁, 析构函数调用" << endl;
	}
};

int main() {
	//创建对象, 自动调用
	//由于不存在空实现, 所以需要初始化, 直接用大括号包裹就好
	Student s{ "Kaede", 18 };
	return 0;
}