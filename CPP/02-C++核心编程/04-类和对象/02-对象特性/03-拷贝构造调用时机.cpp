#include <iostream>
using namespace std;

/* ʲôʱ����õ��������캯����
* ʹ��һ���Ѿ������Ķ���, ����ʼ��һ���µĶ���
* ֵ���ݵķ�ʽ, ������������ֵ
* ��ֵ����
*/

//����, ��һ������
class Student {
public:
	int age;
	//Ĭ�Ϲ���, �в����Ĺ��캯��
	Student(int age) {
		this->age = age;
	}

	//��������
	Student(Student& s) {
		this->age = s.age;
	}

	~Student() {
		cout << "������������" << endl;
	}
};

//�������������ӽ��з���һ���µĶ���, ��ʵ����һ�������Ķ���
auto getStudent(int age) {
	return new Student(age);
}

int main() {
	Student s1(20);

	//�������캯�� �����һ���÷�
	Student s2(s1);

	//�������
	cout << s2.age << endl;

	//��ȡһ��Student
	//����ʹ��new������, ��Ҫʹ��ָ����н���
	Student* s3 = getStudent(30);
	return 0;
}

/* �ܽ�
��һ���Ѿ������õ�, ��ʼ��һ���µ�
��ֵ���ݵķ�ʽ��������ֵ
��ֵ�ķ�ʽ, ����һ���ֲ�����
*/