#include <iostream>
using namespace std;

/* ����
���һ��ѧ���Ľṹ��, ������, ����
����һ���ṹ������, ����5��ѧ��
ͨ��ð������, ��ѧ������������������, ����ӡ���������
*/

struct Student
{
	string name = "";
	int age = 0;
};

int main() {
	//��һ������, ����ѧ��
	Student stuArray[] = {
		{"Kaede", 16},
		{"Jack", 18},
		{"Lucky", 20},
		{"Joen", 16},
		{"Poine", 14}
	};

	//��ȡ���鳤��
	int len = sizeof(stuArray) / sizeof(stuArray[0]);

	//���������ð������
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			//�����жϵ��������Ԫ�ص�����, ������Ҫ��ϸ�ж�һ��
			if (stuArray[j].age > stuArray[j + 1].age) {
				Student temp = stuArray[j];
				stuArray[j] = stuArray[j + 1];
				stuArray[j + 1] = temp;
			}
		}
	}

	//�����������Ƿ�ɹ���
	for (int i = 0; i < len; i++) {
		cout << "Name: " << stuArray[i].name << ", Age: " << stuArray[i].age << endl;
	}
	return 0;
}