#include <iostream>
using namespace std;

int main() {
	//�������Ƕ��, ���ϵ�Ƕ��, �ظ�
	// --K@eo|e
	//������Ϸ�����Ӱ�, ����һ������, �ж�������ʲô
	int rank = 100;
	//���rank����60�Ļ�
	if (rank > 60) {
		//���ж��Ƿ����90
		if (rank > 90) {
			//���ж�100
			if (rank >= 100) {
				//����, ֱ��A+���
				cout << "A+" << endl;
			}
			else {
				//�������90~100, ��һ��A
				cout << "A" << endl;
			}
		}
		else {
			//������60~90������
			cout << "B" << endl;
		}
	}
	else {
		//�������С�ڵ���60�������
		cout << "C" << endl;
	}
	return 0;
}