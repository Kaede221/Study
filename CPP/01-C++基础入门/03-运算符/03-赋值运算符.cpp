#include <iostream>
using namespace std;

int main() {
	//�����Ӧ�þ���=���˰� ��=��ߵı��������ұߵ�����
	int a = 10;

	//�ҿ�����a����20 ���ʱ�������+=
	//��Ч��a = a + 20
	a += 20;
	cout << a << endl;

	//�����ķ��Ŷ���� ֻҪ֪��ÿ�����Ŵ���ʲô����ͺ�
	a -= 2;
	cout << a << endl;

	a *= 4;
	cout << a << endl;

	a /= 2;
	cout << a << endl;

	a %= 2;
	cout << a << endl;
	return 0;
}