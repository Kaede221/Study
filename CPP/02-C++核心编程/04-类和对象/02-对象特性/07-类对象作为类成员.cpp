#include <iostream>
using namespace std;

/* 简单说其实就是一个嵌套而已 */

//常见一些, 比如老师和学员
class Student {
public:
	int mAge = 0;
	string mName = "";
	Student() {}
	Student(int age, string name) :mAge(age), mName(name) {}
};

//老师可以有许多个学生, 这里还没有学到容器, 就假设只能有一个学生就好
class Teacher {
public:
	int mAge;
	string mName;
	//接下来, 是可以有学生这个属性的
	Student mStudent;
	//上面, 先会构建学生, 然后再创建老师, 相当于现有子类, 再有父类, 由小到大
	Teacher(int age, string name, Student& s) :mAge(age), mName(name), mStudent(s){}
};

int main() {
	//创建一个学生
	Student s1(18, "Kaede");
	//这样, 我们就可以先初始化一个老师, 然后设定学生了
	Teacher t1(24, "Joe", s1);

	//可以正常查看属性
	cout << "学生的名字: " << t1.mStudent.mName << endl;
	cout << "学生的年龄: " << t1.mStudent.mAge << endl;
	return 0;
}

/* 总结
* 现有子对象, 再有父对象
* 析构相反, 先销毁父对象 再销毁子对象
* 其实就是先有零件, 再组成一个车, 先拆掉汽车, 再扔掉零件
*/