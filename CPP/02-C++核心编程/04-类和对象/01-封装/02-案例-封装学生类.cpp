#include <iostream>
using namespace std;

//���ǿ������Ŵ���һ��ѧ����, Ȼ��ʵ����һЩѧ��
class Student {
	//ѧ����һЩ����, ��������, ����(��һЩ, �������Ծͺ�)
	/* ע��
	�����������, ����, ���ǳ�Ա, Ҳ���ǳ�Ա����, ��Ա����
	��Ϊ���ǳ�Ա����, ��Ա����
	*/
public:
	string name;
	int age;

	//��Ϊ, ��ȡѧ����Ϣ
	void showInfo() {
		cout << "Name: " << name << ", age: " << age << endl;
	}

	//����Ҳ����ͨ��һ����Ϊ, �����Ը�ֵ
	void init(string _name, int _age) {
		name = _name;
		age = _age;
	}
};

int main() {
	//ʵ��������, ����һ��ѧ��
	Student s1{};

	//���Ը�ֵ
	s1.age = 10;
	s1.name = "Link";

	//���ú���
	s1.showInfo();

	//����Դ����������ѧ��
	//����ͨ����Ϊ��ֵ, ͨ�����������������
	Student s2{};
	s2.init("Kaede", 18);
	s2.showInfo();
	return 0;
}