#include <iostream>
using namespace std;

//����ͨ��ָ��, ���ʽṹ��ĳ�Ա����
struct Student
{
	string name = "";
	int age = 0;
};

int main() {
	//����ѧ���Ľṹ�����
	Student s = { "Kaede", 18 };

	//��ָ��ָ���������, ���ʱ��, ָ������ͱ�����ƥ���
	Student* p = &s;

	//���Է���
	//ע��, �ṹ��ķ���, ָ��Ļ�, ��Ҫʹ�ü�ͷ����������
	//�����ľ�ûʲô�仯��
	cout << "Name: " << p->name << ", Age: " << p->age << endl;

	//�޸�Ҳ��һ����
	p->age = 20;
	cout << "�޸ĺ�Age: " << p->age << endl;
	return 0;
}