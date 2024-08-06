#include <iostream>
using namespace std;

/* 什么时候会用到拷贝构造函数呢
* 使用一个已经创建的对象, 来初始化一个新的对象
* 值传递的方式, 给函数参数传值
* 以值返回
*/

//正常, 给一个对象
class Student {
public:
	int age;
	//默认构造, 有参数的构造函数
	Student(int age) {
		this->age = age;
	}

	//拷贝构造
	Student(Student& s) {
		this->age = s.age;
	}

	~Student() {
		cout << "析构函数调用" << endl;
	}
};

//甚至可以这样子进行返回一个新的对象, 其实就是一个拷贝的对象
auto getStudent(int age) {
	return new Student(age);
}

int main() {
	Student s1(20);

	//拷贝构造函数 最常见的一个用法
	Student s2(s1);

	//输出年龄
	cout << s2.age << endl;

	//获取一个Student
	//这里使用new来构架, 需要使用指针进行接收
	Student* s3 = getStudent(30);
	return 0;
}

/* 总结
用一个已经创建好的, 初始化一个新的
用值传递的方式给函数传值
以值的方式, 返回一个局部对象
*/