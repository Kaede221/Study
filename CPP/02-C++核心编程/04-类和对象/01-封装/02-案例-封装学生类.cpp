#include <iostream>
using namespace std;

//我们可以试着创建一个学生类, 然后实例化一些学生
class Student {
	//学生有一些属性, 比如姓名, 年龄(简单一些, 两个属性就好)
	/* 注意
	类里面的属性, 方法, 都是成员, 也就是成员属性, 成员变量
	行为就是成员函数, 成员方法
	*/
public:
	string name;
	int age;

	//行为, 获取学生信息
	void showInfo() {
		cout << "Name: " << name << ", age: " << age << endl;
	}

	//我们也可以通过一个行为, 给属性赋值
	void init(string _name, int _age) {
		name = _name;
		age = _age;
	}
};

int main() {
	//实例化对象, 创建一个学生
	Student s1{};

	//属性赋值
	s1.age = 10;
	s1.name = "Link";

	//调用函数
	s1.showInfo();

	//你可以创建无数多个学生
	//这里通过行为赋值, 通过函数操作这个对象
	Student s2{};
	s2.init("Kaede", 18);
	s2.showInfo();
	return 0;
}