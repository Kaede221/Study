#include <iostream>
using namespace std;

//就是通过指针, 访问结构体的成员属性
struct Student
{
	string name = "";
	int age = 0;
};

int main() {
	//创建学生的结构体变量
	Student s = { "Kaede", 18 };

	//让指针指向这个变量, 这个时候, 指针的类型必须是匹配的
	Student* p = &s;

	//尝试访问
	//注意, 结构体的访问, 指针的话, 需要使用箭头来访问属性
	//其他的就没什么变化了
	cout << "Name: " << p->name << ", Age: " << p->age << endl;

	//修改也是一样的
	p->age = 20;
	cout << "修改后Age: " << p->age << endl;
	return 0;
}