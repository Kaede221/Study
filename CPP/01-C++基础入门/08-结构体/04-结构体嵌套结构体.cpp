#include <iostream>
using namespace std;

//�����, ��ʦ���Թ�����ѧ��
//������Ҫ������ʦ, ѧ�����ֽṹ��

//�ȵ���ѧ��, ������ʦ�޷�ʹ��
struct Student
{
	string name = "";
	int age = 0;
};

struct Teacher
{
	int id = 0;
	string name = "";
	int age = 0;
	Student stu;
};

int main() {
	//����һ����ʦ
	Teacher t;
	t.age = 40;
	t.id = 10086;
	t.name = "Ӵ��";

	//ѧ��Ҳ�ǿ���ͨ�����������
	t.stu.name = "ѧ������";
	t.stu.age = 18;

	//�����������
	cout << "��ʦ����: " << t.name << endl;
	cout << "��ʦID: " << t.id << endl;
	cout << "��ʦ����: " << t.age << endl;
	cout << "ѧ������: " << t.stu.name << endl;
	cout << "ѧ������: " << t.stu.age << endl;
	return 0;
}