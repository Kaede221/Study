#include <iostream>
using namespace std;

int main() {
	//����char ����ֻ�ܴ��浥���ַ�
	//ʹ�õ��ǵ����� ���Ҫע��
	//ֻ��Ҫ��ס, a��97, A��65�ͺ� ʣ�µĶ��ǿ����Լ������
	char c1 = 'A';

	//char ֻռ��һ���ֽڵĴ�С
	cout << "c1 = " << c1 << ", " << sizeof(c1) << endl;

	//���淽ʽ�ǰ������������� ��һ������
	//�����ǿ��Բ�����ѧ�����Ŷ
	cout << "c1 + 5 = " << c1 + 5 << endl;

	//�����һ��, ����ǿ��ת��, ��intת��Ϊchar
	cout << (char)80 << endl;
	return 0;
}