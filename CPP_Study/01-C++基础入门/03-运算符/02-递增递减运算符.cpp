#include <iostream>
using namespace std;

int main() {
	/*
	����һ�ֺ�����˼�Ķ���
	����i++, ��Ч��i = i + 1
	*/
	int i = 0;
	int j = 0;
	i++;
	cout << i << endl;
	
	//������Ǻ�������, ��������, ������
	//ǰ����������������, ������

	//���j�����i + 1 = 2
	j = ++i;
	cout << j << endl;

	//�����������j����i = 2, ����i += 1 -> i = 2
	j = i++;
	cout << j << endl;
	return 0;
}