#include <iostream>
using namespace std;

//ֱ��������Ҫ��ͷ�ļ�����
//Ȼ��Ϳ���ֱ��ʹ��swap��
#include "swap.h"

//������Ҫдһ��hͷ�ļ� swap.h
//����һ��cpp��Դ�ļ� swap.cpp
//��ͷ�ļ�����д����������
//��Դ�ļ���д�����Ķ���

//����������
//void swap(int a, int b);
//�����Ķ���
//void swap(int a, int b) {
//	int t = a;
//	a = b;
//	b = t;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

int main() {
	swap(10, 20);
	return 0;
}