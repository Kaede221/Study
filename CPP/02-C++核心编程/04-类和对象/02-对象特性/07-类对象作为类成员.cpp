#include <iostream>
using namespace std;

/* ��˵��ʵ����һ��Ƕ�׶��� */

//����һЩ, ������ʦ��ѧԱ
class Student {
public:
	int mAge = 0;
	string mName = "";
	Student() {}
	Student(int age, string name) :mAge(age), mName(name) {}
};

//��ʦ����������ѧ��, ���ﻹû��ѧ������, �ͼ���ֻ����һ��ѧ���ͺ�
class Teacher {
public:
	int mAge;
	string mName;
	//������, �ǿ�����ѧ��������Ե�
	Student mStudent;
	//����, �Ȼṹ��ѧ��, Ȼ���ٴ�����ʦ, �൱����������, ���и���, ��С����
	Teacher(int age, string name, Student& s) :mAge(age), mName(name), mStudent(s){}
};

int main() {
	//����һ��ѧ��
	Student s1(18, "Kaede");
	//����, ���ǾͿ����ȳ�ʼ��һ����ʦ, Ȼ���趨ѧ����
	Teacher t1(24, "Joe", s1);

	//���������鿴����
	cout << "ѧ��������: " << t1.mStudent.mName << endl;
	cout << "ѧ��������: " << t1.mStudent.mAge << endl;
	return 0;
}

/* �ܽ�
* �����Ӷ���, ���и�����
* �����෴, �����ٸ����� �������Ӷ���
* ��ʵ�����������, �����һ����, �Ȳ������, ���ӵ����
*/