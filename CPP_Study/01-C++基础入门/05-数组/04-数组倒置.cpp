#include <iostream>
using namespace std;

int main() {
	//���ǰ������������������
	//�������һ����̬����������
	int arr1[] = { 1,2,3,4,5 };

	//����ľ���ͨ���±겻���ƶ���ʵ����
	//����ֱ���趨����������ʼ�±�, �Լ������±��λ��(����-1)
	int start = 0, end = sizeof(arr1) / sizeof(arr1[0]) - 1;

	//��һ��ѭ��, ʵ������Ԫ�صĻ���
	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		//����ʱ�����һ������
		int temp = arr1[start];
		//�ѵ�һ�����ݸ�Ϊĩβ����
		arr1[start] = arr1[end];
		//��ĩβ���ݸ�Ϊ��ʼ����
		arr1[end] = temp;

		//�����±�
		start++;
		end--;
	}

	//��ӡ�޸ĺ��array
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		cout << i << " ";
	}
	return 0;
}