#include <iostream>
using namespace std;

int main() {
	//����true����false, ����߼�
	//��ʵҲ������1����0������
	//ֻռ��һ���ֽ�
	bool flag = true;

	// ����Կ���, ��ʵ����1
	cout << "flag = " << flag << endl;

	flag = false;
	cout << "flag = " << flag << endl;
	cout << "��С: " << sizeof(flag) << endl;
	return 0;
}