#include <iostream>
using namespace std;

//我们要在堆区开辟内存, 需要用new
//当然, 我们也可以手动释放这个内存

//直接写一个函数, 返回一个开辟的整型数据
//这里auto其实是偷懒了, 等效于int*, auto会自动识别返回类型
auto func() {
	//new返回的是数据的指针
	return new int(100);
}

auto func2() {
	//我想要创建整型的数组, 返回
	//这里注意, 使用的是中括号, 代表数组有10个元素, 返回的就是连续内存空间的首地址
	return new int[10];
}

int main() {
	int* p = func();
	cout << "p = " << *p << endl;

	//我们可以手动释放这个数据
	//使用delete关键字就好, delete 变量名;
	delete p;
	// 可能不会报错, 但是绝对没东西, 而且程序异常退出, 因为内存已经释放了, 再次访问就是非法操作
	//cout << "p = " << *p << endl;

	//获取创建好的数组
	//其实获取的就是一个首地址而已
	int* arr = func2();

	//遍历还是和之前一样的
	for (int i = 0; i < 10; i++) {
		//可以先赋值, 不然你看到的就是默认的一个奇怪的数据
		arr[i] = i * i;
	}

	//查看数据
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	//数组的释放, 需要有一个中括号, 告诉他是一个数组
	delete[] arr;

	//再次试一试查看数据
	//程序异常退出了
	/*for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}
	return 0;*/
}