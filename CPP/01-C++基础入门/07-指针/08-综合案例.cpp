#include <iostream>
using namespace std;

/* ��Ŀ����
��װһ������, ����ð������, ʵ�ֶ������������������
�����޷���ֵ -> ʹ��ָ��

���ȶ��庯��, ���ò���Ϊһ��ָ��, ��Ҫ��������ĵ�ַ
*/

void bubbleSwap(int* arr, int len) {
	//����϶���Ҫ���������׵�ַ, ��������ĳ���, ��Ȼ�����޷�ͳ��
	//ֱ�ӿ�ʼð������ͺ� ���һ��Ҫ��ס��
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			//�ж�һ��, ���j����j + 1, ��ô�������������־ͺ�
			if (arr[j] > arr[j + 1]) {
				//TODO ע������
				/* ע��
				����Ϊʲô����ֱ��ʹ���±���?
				��Ϊ�����õ�������Ԫ�ص�ָ���±��ʾ��
				*(p + i) = p[i]
				*/
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}

//�����һ������, ���ڲ鿴���������Ԫ��
void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	//����ʾ��
	int arr1[] = {10,9,5,1,7,6,4,3,2,8};

	//���鳤��
	int len = sizeof(arr1) / sizeof(arr1[0]);

	//���ú���
	bubbleSwap(arr1, len);

	//�鿴�Ƿ��������
	printArray(arr1, len);

	return 0;
}