#include <iostream>
using namespace std;

//还是一样的, 可以有值传递和地址传递
struct Student
{
	string name = "";
	int age = 0;
};

//我们可以写一个函数, 传入一个学生, 打印学生的信息
//这里还是用地址传递, 通用
void printStudent(Student* stu) {
	cout << "姓名: " << stu->name << endl;
	cout << "年龄: " << stu->age << endl;

	//当然, 地址传递可以修改里面的内容
	stu->age = 30;
}

//值传递这里就不多说了吧? 其实都是一样的, 然后使用的时候还是使用点来调用属性
//还是给一个函数, 你可以自己调用一下
void printStudent2(Student s) {
	cout << "姓名: " << s.name << endl;
	cout << "年龄: " << s.age << endl;
}

int main() {
	//创建学生
	Student s = { "旅行者", 20 };

	//使用地址传递函数打印信息
	printStudent(&s);
	//值传递函数
	printStudent2(s);
	return 0;
}