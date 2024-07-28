#include <iostream>
using namespace std;

//简单说, 就是推荐把成员属性都设置为私有, 根据自己的需要, 写对应的函数, 进而操作控制程序
class Student {
	//设置为私有
private:
	string name; //我希望可读可写
	int age = 18; //可读, 这里进行一下初始化, 因为我们无法访问, 也就是无法修改了
	string uid; //可写, 不可读

	//开始给一个钩子函数, 进而能够修改获取数据
	//这里就是要公共的了, 进而访问
public:
	//允许读写
	void setName(string _name) {
		name = _name;
	}
	string getName() {
		return name;
	}

	//允许读
	int getAge() {
		return age;
	}

	//允许写
	void setUID(string _id) {
		uid = _id;
	}
};

int main() {
	//实例化对象
	Student s1{};

	//通过函数, 设置名称(你无法直接设置 获取名称)
	s1.setName("Kaede Shimizu");
	s1.setUID("2107578350");

	//获取信息
	cout << "Name: " << s1.getName() << ", Age: " << s1.getAge() << endl;
	return 0;
}