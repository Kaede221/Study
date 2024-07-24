#include <iostream>
using namespace std;

//结构体, 就是用户可以自定义的数据类型
//和class比较相似, 但是也不完全一样
//你可以创建无数个结构体

//下面我会创建一个学生的结构体, 或者说数据类型
//众所周知, 学生是有一些特定属性的 这个就是大括号里面写的东西了
struct Student
{
	//成员列表
	//其实就是属性, 不要赋值, 直接给出来就好
	string name;
	int age;
	int score;
}s3;

int main() {
	//随后, 我们就可以通过学生这个类型, 创建具体的学生了
	//有三种创建学生的方法 其实和列表之类的差不多, 都是数据类型 名称 = 内容
	Student s1;
	//通过一个point来获取, 修改内容
	s1.age = 10;
	s1.name = "张三";
	s1.score = 100;
	cout << s1.name << " " << s1.age << " " << s1.score << endl;

	//第二种就是直接初始化结构体的内容
	//这里需要按照顺序来走
	Student s2 = {"旅行者", 20, 99};
	cout << s2.name << " " << s2.age << " " << s2.score << endl;

	//第三种就是, 定义的时候, 直接创建变量
	//你可以回到定义, 看看后面有一个s3存在
	//不过这个不常用, 因为看到定义一般不会看后面有没有东西
	s3.age = 10;
	s3.name = "哟西";
	s3.score = 80;
	cout << s3.name << " " << s3.age << " " << s3.score << endl;

	return 0;
}