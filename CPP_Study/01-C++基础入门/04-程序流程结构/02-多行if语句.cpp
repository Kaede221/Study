#include <iostream>
using namespace std;

int main() {
	//��ʵ���Ǽ���һ������ else
	//�������, �պþ���һ�Ե�

	//����һ��, ����һ������, �ж�
	int num = 0;
	cin >> num;
	if (num > 10) {
		cout << "num > 10" << endl;
	}
	else {
		//���� ����if�������������»�ִ�е�����
		cout << "num <= 10" << endl;
	}
	return 0;
}