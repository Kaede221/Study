#include <iostream>
using namespace std;

int main() {
	//���þ���һ��ָ�볣��, ָ���ָ�����޸�, ��������ֵ�����޸�
	int a = 10;
	int& numberA = a;
	cout << "a = " << numberA << endl;

	//�����, ��Ч����������
	//ָ�볣��
	int* const numberA_point = &a;
	cout << "a = " << *numberA_point << endl;

	//����, ���ø��Ӱ�ȫ, ��Ϊֻ��ʹ���Ѿ����ڵı���, �������Ұָ������
	return 0;
}