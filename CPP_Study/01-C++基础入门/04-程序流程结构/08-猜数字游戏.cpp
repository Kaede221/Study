#include <iostream>
using namespace std;

int main() {
	// ����һ��С��Ϸ ϵͳ�Զ���һ�������
	// ��һ��%100, ��֤������0~99
	// ������Ҫ1~100, ֱ��+1�ͺ���
	// ������������ʵ��α���, Ӧ����42�Ͷ���, ��Ҫ������Ļ���Ҫ��������, ����û�б�Ҫ
	int num = rand() % 100 + 1;
	cout << num << endl;
	while (true) {
		//��ʼ����ҵ�����
		int user = 0;
		cout << "�²¿��Ƕ���: ";
		cin >> user;

		//ֱ����if�жϾͺ�
		if (user > num) {
			cout << "����!" << endl;
		}
		else if (user < num) {
			cout << "С��!" << endl;
		}
		else {
			cout << "�¶���!" << endl;
			//�����Ժ�, ֱ���˳�ѭ���ͺ�
			break;
		}
	}
	return 0;
}