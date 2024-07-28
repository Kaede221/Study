#include <iostream>
using namespace std;

//���� ����һ���������� Cube
//�����ʼ�������, �ܹ���ȡ����ͱ����
class Cube {
private:
	//˽�л�����, ���ó����
	double height;
	double width;
	double length;
public:
	//�ṩһ����ʼ������, ֱ�Ӵ�����������, �������ó����
	void initCube(double h, double w, double l) {
		height = h;
		width = w;
		length = l;
	}

	//���, ����������, �����ȡ����ͱ����
	//���ﶼ�ǻ�����Сѧ��ѧ, ����˵��
	double getVolume() {
		return width * height * length;
	}
	double getSurface() {
		return 2 * (width * height + height * length + length * width);
	}
};

int main() {
	//����һ��������
	Cube c1{};
	//��ʼ�����������
	c1.initCube(1, 1, 1);

	//��ȡ��Ӧ����� �����
	cout << "Volume: " << c1.getVolume() << endl;
	cout << "Surface: " << c1.getSurface() << endl;

	//����������������Ҫ�޸�����, ��ʵҲ�ǿ���ֱ�ӵ��ó�ʼ��������, ��Ϊ���Ի��Զ����ǵ���
	c1.initCube(10, 20, 30);
	cout << "Volume: " << c1.getVolume() << endl;
	cout << "Surface: " << c1.getSurface() << endl;
	return 0;
}