#include <iostream>
using namespace std;

int main() {
	//����ؼ��� ���Կ���һ������ռ�õ��ڴ�ռ��Ƕ���
	//���Ե�����ʹ��, ������Է�����, Ҳ���Էű���
	short num1 = 10;
	cout << "short�ڴ�ռ�: " << sizeof(num1) << endl;
	cout << "short�ڴ�ռ�: " << sizeof(short) << endl;
	cout << "int�ڴ�ռ�: " << sizeof(int) << endl;
	cout << "long�ڴ�ռ�: " << sizeof(long) << endl;
	cout << "long long�ڴ�ռ�: " << sizeof(long long) << endl;
	// short < int <= long <= long long , ������Ҫ����Ҫ��ϵͳ����
	return 0;
}