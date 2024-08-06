#include <iostream>
using namespace std;

/* 构造函数可以进行分类
* 按照参数分类: 有参构造和无参构造
* 按照类型分类: 普通构造和拷贝构造
*/

/* 调用方法
* 可以通过括号, 显示, 隐式转换进行调用
*/

class Student {
public:
	//普通构造函数
	//无参构造, 也是默认构造
	Student() {
		cout << "构造函数" << endl;
	}
	//有参构造
	Student(string str) {
		cout << "有参构造" << endl;
	}
	Student(int number) {
		cout << "有参构造, number = " << number << endl;
	}

	//拷贝构造函数
	//什么叫做拷贝? 其实就是复制的意思
	//注意, 这里必须要有const, 还需要按照引用的格式传入
	Student(const Student& s) {
		//拷贝一般是用来拷贝同样的一个对象
		//在这里, 一般就是直接让传入的属性为自己的属性
		//直接设置对应的属性就好
		//不过这个类没有属性, 所以就不需要了
		cout << "拷贝构造" << endl;
	}
};

/* 注意事项
默认构造函数的时候, 不要加小括号, 因为编译器会理解为函数的声明, 没有语法错误, 你无法发现这个错误
*/

int main() {
	//默认构造函数调用
	Student s1;
	//括号调用
	//里面可以有参数, 可以是另外一个对象, 也可以是空的
	Student s2("Kaede");

	//不要这样调用, 因为这样的话, 编译器会理解为函数的声明, 没有语法错误
	Student s3();
	Student s4(s2);

	//显示法
	Student s5 = Student("Lain"); //有参构造

	//当然, 我们可以使用new来创建
	//但是这里, 需要用一个指针来接收
	Student* s6 = new Student("Kaede");

	//还有一种匿名对象
	//创建运行后, 立刻销毁对象
	Student("K");
	//但是, 不可以拷贝构造
	//Student(s5); //重定义错误, 编译器直接是不会报错的, 只有运行才会出现问题

	//当然, 还有一种, 隐式转换法
	Student s7 = 20;
	return 0;
}