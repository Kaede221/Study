#include <iostream>
using namespace std;

int main() {
	//ѧ����·��֪��, ����
	//�����and ͬʱ���������� �����or һ������������
	cout << (true && true) << endl;
	cout << (true && false) << endl;

	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || false) << endl;

	//����ȡ��
	cout << !true << endl;
	//������ſ������� ���ᱨ�� -> ��������!!��һ���൱��û�б仯
	cout << !!!!!!!!!!!!!!!!!!!!!!false;
	return 0;
}