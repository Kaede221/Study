#include <iostream>
using namespace std;

int main() {
	//ָ��Ҳ��һ����������
	//32λ��, ����ָ��ָ�����int����ʲô��������, ����4���ֽ� -> 64λ��Ȼ����8�ֽ���
	//��Ϊָ��ָ�����һ���ڴ�, һ��ʮ�����Ƶ�����, ����8/4���ֽ��Ѿ��㹻��
	cout << "int*�Ĵ�СΪ: " << sizeof(int*) << endl;
	cout << "float*�Ĵ�СΪ: " << sizeof(float*) << endl;
	cout << "bool*�Ĵ�СΪ: " << sizeof(bool*) << endl;
	cout << "string*�Ĵ�СΪ: " << sizeof(string*) << endl;
	return 0;
}