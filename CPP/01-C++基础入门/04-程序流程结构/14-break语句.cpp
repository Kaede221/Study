#include <iostream>
using namespace std;

int main() {
	//break ��Ҫ��������ѭ��
	//����������Ҫ˵, �ڵ�����ѭ����ʱ������ѭ��
	for (int i = 0; i < 10; i++) {
		// ���������, ��ʵ�������е������ֵ�ʱ��
		if (i == 3) {
			//ֱ��break�˳�ѭ���ͺ�, ��������ݾͲ���ִ����
			break;
		}
		cout << i << endl;
	}

	//���о���switch������õ�
	int num = 2;
	switch (num)
	{
	case 1:cout << "1" << endl; break;
		//���û��break, ��ô�����ִ������Ĵ���
		//���԰�num�ĳ�2���Կ�
	case 2:cout << "2" << endl;
	case 3:cout << "3" << endl;
	default:
		break;
	}
	return 0;
}