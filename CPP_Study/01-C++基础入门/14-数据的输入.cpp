#include <iostream>
using namespace std;

int main() {
	//��ʵ�ܼ�, ֱ��ʹ��cin�ͺ�, ��ŵ�һ����������
	//���Ի�ȡ���� С�� �ַ�(��) ����

	//��һ����ʼ��
	int a = 0;
	cout << "��a��ֵ >> ";

	//ֱ����cin�ͺ� �������Ͷ���һ��һ����
	cin >> a;
	cout << "a����ֵΪ: " << a << endl;

	string s1 = "";
	cout << "�����������Щʲô >> ";
	cin >> s1;
	cout << s1 << endl;

	// �������͵Ļ�, ֻҪ����0, ��������Ķ�������1, Ҳ����true
	return 0;
}