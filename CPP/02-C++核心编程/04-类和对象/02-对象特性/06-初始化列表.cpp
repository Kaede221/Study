#include <iostream>
using namespace std;

//��˵, ����ͳһ�������Եĳ�ʼ��
//���ﻹ������һ����ͺ�
class Student {
public:
	int mAge;
	string mName;
	float mHeight;

	//һ����˵, ���ǻ�ʹ�ù��캯�����г�ʼ��
	/*Student(int age, string name, float height) {
		mAge = age;
		mName = name;
		mHeight = height;
	}*/

	//������ǳ�ʼ���б�, Ҳ���ڹ��캯������д
	//����ǰ�治��, ֻҪ��һ��ð��, ��������Ծͺ�, ����һ�оͿ��������
	Student(int age, string name, float height) :mAge(age), mName(name), mHeight(height) {
		//�������дһЩ�����Ķ���
		cout << "��ʼ�����" << endl;
	}

	//��һ��ͳһ�ĺ���
	void showInfo() {
		cout << "age = " << mAge << endl;
		cout << "name = " << mName << endl;
		cout << "height = " << mHeight << endl;
	}
};

int main() {
	//����ʹ�ù��캯����ʼ������
	//ʹ�ó�ʼ���б��﷨����
	Student s1(18, "Kaede", 175.5);
	s1.showInfo();
	return 0;
}