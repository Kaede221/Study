#include <iostream>
using namespace std;

/* ���ż�ɽ
* ��ʵ������ûʲô�������
* Ψһ������, ����������Ĭ��Ȩ�޲�һ��, classĬ����˽��, structĬ���ǹ���
*/
class MYCLASS {
	//���ﲻд�κ�Ȩ��
	int a;
};

struct MYSTRUCT
{
	int a;
};

int main() {
	//Ĭ��˽��Ȩ��, ���ǲ��ܷ��������a��Ա
	MYCLASS c1{};

	MYSTRUCT s{};
	//���ǽṹ��Ĭ�Ϲ���, ����ֱ�ӷ���
	s.a = 10;
	cout << "a = " << s.a << endl;
	return 0;
}