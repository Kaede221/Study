#include <iostream>
using namespace std;

int main() {
	//�����������˵������Ķ�����, ����ÿ�����Զ���
	//���Կ������һ���������ж�
	//����������һ���ж��Ƿ���������
	if (true) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}

	//���ǿ�������Ԫ���������ݵ�д����
	//��ʽ���� ���� ? ����ʱ���� : ������ʱ����
	cout << (true ? "true" : "false") << endl;

	//�������ǿ��Կ����ж��������ݵĴ�С
	int a = 10, b = 20;
	cout << (a > b ? "a > b" : "a < b") << endl;;
	return 0;
}