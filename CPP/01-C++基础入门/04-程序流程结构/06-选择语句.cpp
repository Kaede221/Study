#include <iostream>
using namespace std;

int main() {
	//��ʵ���Ƕ�����if�������汾
	//ʹ���������ӷ���һЩ ֱ��ʹ��switch�ͺ�
	//��ʽ����switch(���ʽ){case:���1:���...break;}

	//������������������һ��1~7������, ����ܼ�
	int day = 1;
	cin >> day;

	//��һ��%, ��ֹ����7���ϵ�����
	//�����ҶԴ�������Ż�, ���%7Ϊ0�Ļ�, ��ôֱ�ӻ᷵��һ��7, �൱������
	//��Ȼ, ��û�и�����صĴ������
	switch (day % 7 ? day % 7 : 7)
	{
		//�����break�Ǳ���Ҫд��, ��Ȼ�ж������������ִ��
		//break��Ҫ�����������ṹ�õ�
	case 1:
		cout << "��һ" << endl; break;
	case 2:
		cout << "�ܶ�" << endl; break;
	case 3:
		cout << "����" << endl; break;
	case 4:
		cout << "����" << endl; break;
	case 5:
		cout << "����" << endl; break;
	case 6:
		cout << "����" << endl; break;
	case 7:
		cout << "����" << endl; break;
	default:
		cout << "û�����ѡ��!" << endl; break;
	}
	/*
	switchȱ��, ����ֻ���ж����� �ַ�������
	�ŵ����ִ��Ч�ʸ�, �ṹ�Ƚ�����
	*/
	return 0;
}