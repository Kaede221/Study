#include <iostream>
using namespace std;

int main() {
	//����һ�������ж�
	//�����������û�����һ������
	int num = 0;
	cout << "����һ������: ";
	cin >> num;
	cout << "���������Ϊ: " << num << endl;

	//�﷨����if(����){����ִ�е����}
	//�����û��������ݵĴ�С�ж�
	if (num > 10) {
		cout << "��������ݴ���10" << endl;
	}

	cout << "�����Ƿ����㶼��ִ��" << endl;

	//ע�� if��䲻Ҫ�зֺ� ��Ȼ�൱��ûд
	if (true);
	{
		cout << "����һ�������Ĵ����" << endl;
	}
	return 0;
}