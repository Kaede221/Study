#include <iostream>
using namespace std;

int main() {
	//���� ����Ҫ��һ�����������, ����Ϊ�������ߵݼ�������
	int arr1[] = { 1,5,9,8,7,5,3,2,6,4 };
	cout << "����ǰ: ";
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	//��ʵԭ����, �����Ȱ�һ�����ݺ����������ݶԱ�, ֻҪ��, �ͽ���
	//ÿ�αȽ�, ����ÿ�δ�����һ�ͺ�
	//*û������? ȥ��������ԭ���, �������ֽ���̫�鷳��
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]) - 1; i++) {
		//�ܹ����������ΪԪ�ظ���-1

		//�ڲ�ѭ���Ա�
		//��������Ԫ�ظ��� - ��ǰ���� - 1
		for (int j = 0; j < sizeof(arr1) / sizeof(arr1[0]) - i - 1; j++) {
			//�����һ�����ֱȽϴ�, ��ô����������Ԫ��
			if (arr1[j] > arr1[j + 1]) {

				//��������������
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}

	//��ӡ�ͺ�
	cout << "�����: ";
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		cout << arr1[i] << " ";
	}

	return 0;
}