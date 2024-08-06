#include <iostream>
using namespace std;

/* 什么是?
* 浅拷贝, 就是编译器提供的一个简单的赋值操作
* 深拷贝, 就是在堆区申请一个新的内存空间, 进行拷贝操作
*/

class Stu {
public:
	int mAge = 0;
	string* mName = NULL;
	Stu() {
		cout << "默认构造函数调用" << endl;
	}

	Stu(int age) {
		cout << "有参构造函数调用" << endl;
		mAge = age;
	}

	//提供另外一个构造函数
	Stu(int age, string name) {
		cout << "有参构造函数调用" << endl;
		mAge = age;

		//注意, 这里我要开辟一个新的数据出来
		//使用堆区, 这里需要使用指针, 所以上面定义也是指针, 这里就可以使用new关键字了
		mName = new string(name);
	}

	~Stu() {
		cout << "析构函数调用" << endl;
		//这里, 就要把堆区开辟的数据释放掉了
		//判断是否为空就好
		//结果报错了
		/* 
		因为, 原来的地址已经被释放了
		所以, 你释放了两个一摸一样的指针, 导致报错
		这个就是浅拷贝的问题!
		*/
		/*if (mName != NULL) {
			delete mName;
			mName = NULL;
		}*/
	}

	//所以, 我们需要手动写一个拷贝构造函数
	Stu(const Stu& s) {
		cout << "拷贝构造函数调用" << endl;
		mAge = s.mAge;
		//下面这个是个指针, 我们不能这么干
		//mName = s.mName;

		//所以需要深拷贝
		mName = new string(*s.mName);
	}
};

int main() {
	//浅拷贝的问题
	{
		Stu s1(18);
		cout << "s1 age = " << s1.mAge << endl;

		//创建第二个对象
		//使用拷贝构造, 这里就是一个简单的浅拷贝
		Stu s2(s1);
		cout << "s2 age = " << s2.mAge << endl;

		//假设我这里使用一个指针, 想要开辟一个新的数据
		Stu s3(18, "Kaede");
		cout << "s3 age = " << s3.mAge << endl;
		cout << "s3 name = " << *s3.mName << endl;

		//再使用拷贝试一试
		Stu s4(s3);
		cout << "s4 age = " << s4.mAge << endl;
		cout << "s4 name = " << *s4.mName << endl;
	}
	return 0;
}