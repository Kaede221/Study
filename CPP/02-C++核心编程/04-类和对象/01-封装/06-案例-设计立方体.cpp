#include <iostream>
using namespace std;

//需求 创建一个立方体类 Cube
//允许初始化长宽高, 能够获取体积和表面积
class Cube {
private:
	//私有化属性, 设置长宽高
	double height;
	double width;
	double length;
public:
	//提供一个初始化方法, 直接传入三个参数, 进而设置长宽高
	void initCube(double h, double w, double l) {
		height = h;
		width = w;
		length = l;
	}

	//随后, 给两个方法, 允许获取体积和表面积
	//这里都是基本的小学数学, 不多说了
	double getVolume() {
		return width * height * length;
	}
	double getSurface() {
		return 2 * (width * height + height * length + length * width);
	}
};

int main() {
	//创建一个立方体
	Cube c1{};
	//初始化这个立方体
	c1.initCube(1, 1, 1);

	//获取对应的体积 表面积
	cout << "Volume: " << c1.getVolume() << endl;
	cout << "Surface: " << c1.getSurface() << endl;

	//如果我这个立方体需要修改数据, 其实也是可以直接调用初始化方法的, 因为属性会自动覆盖掉的
	c1.initCube(10, 20, 30);
	cout << "Volume: " << c1.getVolume() << endl;
	cout << "Surface: " << c1.getSurface() << endl;
	return 0;
}