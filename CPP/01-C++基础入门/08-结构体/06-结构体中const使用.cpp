#include <iostream>
using namespace std;

//const��Ȼ���ǲ������޸ĵ�����
//��Ȼ, const�����������޸�
struct Student {
	string name = "";
	int age = 0;
};

//��Ϊָ�봫��, ���Լ����ڴ�
//ͬʱ��һ��const, ��ֹ�޸����������
void printStudent(const Student* s) {
	//����û���ǺŵĻ��´�����е�����, �����һ���ṹ������Ļ�, ��ô���Ƶ����ݻ�ǳ���
	//����ֵ���ݿ���, ���ǿ����������޴�
	cout << "Name: " << s->name << endl;
	cout << "Age: " << s->age << endl;

	//����ʹ��ָ��, ���п����޸�����
	//�������ǿ���ʹ��const������, ��ֹ�޸�����
	// �����������ᱨ��
	//s->age = 100;
}

int main() {
	Student s = { "Kaede", 18 };
	printStudent(&s);
	return 0;
}