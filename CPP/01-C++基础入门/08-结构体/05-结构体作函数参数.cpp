#include <iostream>
using namespace std;

//����һ����, ������ֵ���ݺ͵�ַ����
struct Student
{
	string name = "";
	int age = 0;
};

//���ǿ���дһ������, ����һ��ѧ��, ��ӡѧ������Ϣ
//���ﻹ���õ�ַ����, ͨ��
void printStudent(Student* stu) {
	cout << "����: " << stu->name << endl;
	cout << "����: " << stu->age << endl;

	//��Ȼ, ��ַ���ݿ����޸����������
	stu->age = 30;
}

//ֵ��������Ͳ���˵�˰�? ��ʵ����һ����, Ȼ��ʹ�õ�ʱ����ʹ�õ�����������
//���Ǹ�һ������, ������Լ�����һ��
void printStudent2(Student s) {
	cout << "����: " << s.name << endl;
	cout << "����: " << s.age << endl;
}

int main() {
	//����ѧ��
	Student s = { "������", 20 };

	//ʹ�õ�ַ���ݺ�����ӡ��Ϣ
	printStudent(&s);
	//ֵ���ݺ���
	printStudent2(s);
	return 0;
}