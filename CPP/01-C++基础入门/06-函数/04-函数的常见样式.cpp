#include <iostream>
using namespace std;

//��ʵ����һ���������
//���Ƕ�֪��, ����������, ����ֵ�������ǿ�ѡ��
//����ֱ�Ӿ���2x2=4�����

//�в���, �޷���ֵ
void fun1(int a) {}

//�в���, �з���ֵ
int fun2(int a) {
	return a + 1;
}

//�޲���, �޷���ֵ
void fun3() {}

//�޲���, �з���ֵ
string fun4() {
	return "Hello World";
}

int main() {
	//���û��ǲ���, ֱ�Ӻ�����(���޲���);
	fun1(10);
	cout << fun2(10) << endl;
	fun3();
	cout << fun4() << endl;
	return 0;
}