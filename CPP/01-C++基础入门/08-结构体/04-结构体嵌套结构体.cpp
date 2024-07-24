#include <iostream>
using namespace std;

//最常见的, 老师可以管理多个学生
//所以需要定义老师, 学生两种结构体

//先得有学生, 否则老师无法使用
struct Student
{
	string name = "";
	int age = 0;
};

struct Teacher
{
	int id = 0;
	string name = "";
	int age = 0;
	Student stu;
};

int main() {
	//创建一个老师
	Teacher t;
	t.age = 40;
	t.id = 10086;
	t.name = "哟西";

	//学生也是可以通过点来定义的
	t.stu.name = "学生姓名";
	t.stu.age = 18;

	//可以正常输出
	cout << "老师姓名: " << t.name << endl;
	cout << "老师ID: " << t.id << endl;
	cout << "老师年龄: " << t.age << endl;
	cout << "学生姓名: " << t.stu.name << endl;
	cout << "学生年龄: " << t.stu.age << endl;
	return 0;
}