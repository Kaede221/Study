#include <iostream>
using namespace std;

int main() {
	// �кܶ������εĸ�ʽ ����int short long, long long

	// ������ -32768 ~ 32767
	// ������Χ, ���ɸ���Ŷ
	short num1 = 32768;

	// ���� ����һЩ�� -> �������õ�һ��
	int num2 = 10;

	// ������
	long num3 = 10;

	long long num4 = 10;
	// �����ʵ����������һ���� �������ǵĴ�С�ǲ�һ����!
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	return 0;
}