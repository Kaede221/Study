#include <iostream>
using namespace std;

/* 注意
* 只要你有一个类, 那么自动就有默认构造函数, 默认析构函数, 默认拷贝构造函数
* 前两个都是空实现, 最后的拷贝就是一个赋值
*
* 只要写了有参构造, 就不会提供默认构造, 但是提供拷贝构造函数
* 如果你定义了拷贝构造函数, 那么C++就不会提供其他的构造函数了(析构 构造都没有)
* 
* 记住就好, 需要理解的话可以看看下面的代码
*/

class Student {
private:
	//属性 提供默认值, 防止后续报错
	int mAge = 0;
public:
	//默认构造
	Student() {
		cout << "默认构造函数调用" << endl;
	}

	//有参构造
	Student(int age) {
		mAge = age;
		cout << "有参构造函数调用" << endl;
	}

	//自定义拷贝构造函数
	//如果没有, 那么没有cout, 但是有值拷贝, 把所有的属性进行等号赋值操作
	/*Student(const Student& s) {
		cout << "拷贝构造函数调用" << endl;
		mAge = s.mAge;
	}*/

	//析构函数
	~Student() {}

	//其他钩子函数, 用于外部访问属性
	int getAge() {
		return mAge;
	}

	void setAge(int age) {
		mAge = age;
	}
};

int main() {
	//使用区块进行区分, 因为作用域不同, 所以允许在不同区块内重名变量
	{
		Student s;
		//初始化年龄
		s.setAge(18);

		//调用拷贝构造函数
		Student s1(s);

		//看看年龄是否正确
		cout << "s1的年龄为" << s1.getAge() << endl;
	};

	//如果写了有参构造函数, 那么编译器不会再提供默认构造函数, 但是提供拷贝构造
	{
		//这里调用默认构造函数, 如果你没写默认构造函数, 由于提供了有参构造函数, 则会报错
		Student s;
		Student s2(s);
		cout << "默认构造函数中, 年龄为: " << s2.getAge() << endl;
	}
	return 0;
}