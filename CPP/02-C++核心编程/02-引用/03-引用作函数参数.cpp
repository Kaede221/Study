#include <iostream>
using namespace std;

//ͨ������, ��������ʽ��������ʵ�ʲ���
//�ŵ��ǿ��Լ�ָ��, ����Ҫָ����

//���ﻹ��һ����ͨ�Ľ����������ݵĺ���
void swap0(int a, int b) {
	int t = a;
	a = b;
	b = t;
}

//ʹ�õ�ַ����
//��ַ, ��Ҫʹ��ָ����н���
void swap1(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

//���ô���
void swap2(int& a, int& b) {
	//Ȼ��Ϳ���ֱ��ʹ��a��b��, ��Ϊʹ�õ���һ������, ��ַ��ʵ��һ����
	int t = a;
	a = b;
	b = t;
}

int main() {
	//����
	int a = 10;
	int b = 20;
	swap0(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap1(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//���õ�ʱ�����ֱ��д������, �͵�һ�εĴ�����һģһ����
	swap2(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//��ʵ�����ϻ���ָ��Ĵ���, ֻ�������ü�����һ����
	return 0;
}