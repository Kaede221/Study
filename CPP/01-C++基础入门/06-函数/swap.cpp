#include "swap.h" //����ͷ�ļ�

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}