#include <iostream>
using namespace std;

//有三种权限:
//公共权限 私有权限 保护权限
class Student {
public:
	//public 就是公共的, 类内, 类外都是可以访问的
	int score;

	//可以提供方法, 用于改变类内的私有属性
	void changeName(string _name) {
		name = _name;
	}
	void showInfo() {
		cout << "Name: " << name << endl;
		cout << "score:" << score << endl;
	}
private:
	//私有权限, 类内可以访问, 类外不能访问
	string name;
protected:
	//和私有权限一样, 在继承部分会出现不一样的地方, 目前来说一样
	string phone;
};

int main() {
	Student s1{};

	//只能访问公共权限
	s1.score = 200;

	//通过方法, 修改名称
	s1.changeName("Kaede");
	s1.showInfo();

	//但是我们不能访问保护私有属性
	//s1.name = "100"; 成员已声明, 不可访问
	return 0;
}