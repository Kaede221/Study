#include <iostream>
using namespace std;

/* 
封装 可以把属性和行为, 作为一个整体, 用来表现一个具体的事物
*/

//比如, 我可以设计一个圆的类, 用来求这个圆的周长
//这里需要用到类的语法, class 其实和struct结构体的语法差不多, 比如下面这样子

//首先, PI, 这是一个常量, 可以直接写在外面
//这里可以用const define或者下面这个, 其实都是可以的
//auto可以用double代替
constexpr auto PI = 3.14159;

//自定义类, class 类名{};
class Circle {
	//圆有一个属性, 那就是半径
	//当然, 这里需要设置访问权限, 这里后面会介绍的
public:
	double rand;
	
	//还要写行为
	//比如, 我可以获取圆的周长
	double getLength() {
		return 2 * PI * rand;
	}
};

int main() {
	//有了类, 我们就可以直接通过类, 实例化这个圆了
	//实例化, 就是通过类创建对象
	Circle c1;

	//然后设置半径
	c1.rand = 10;

	//使用里面的方法
	cout << "圆的周长为: " << c1.getLength() << endl;
	return 0;
}