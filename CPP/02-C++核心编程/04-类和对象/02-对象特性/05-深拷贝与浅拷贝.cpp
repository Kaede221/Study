#include <iostream>
using namespace std;

/* ʲô��?
* ǳ����, ���Ǳ������ṩ��һ���򵥵ĸ�ֵ����
* ���, �����ڶ�������һ���µ��ڴ�ռ�, ���п�������
*/

class Stu {
public:
	int mAge = 0;
	string* mName = NULL;
	Stu() {
		cout << "Ĭ�Ϲ��캯������" << endl;
	}

	Stu(int age) {
		cout << "�вι��캯������" << endl;
		mAge = age;
	}

	//�ṩ����һ�����캯��
	Stu(int age, string name) {
		cout << "�вι��캯������" << endl;
		mAge = age;

		//ע��, ������Ҫ����һ���µ����ݳ���
		//ʹ�ö���, ������Ҫʹ��ָ��, �������涨��Ҳ��ָ��, ����Ϳ���ʹ��new�ؼ�����
		mName = new string(name);
	}

	~Stu() {
		cout << "������������" << endl;
		//����, ��Ҫ�Ѷ������ٵ������ͷŵ���
		//�ж��Ƿ�Ϊ�վͺ�
		//���������
		/* 
		��Ϊ, ԭ���ĵ�ַ�Ѿ����ͷ���
		����, ���ͷ�������һ��һ����ָ��, ���±���
		�������ǳ����������!
		*/
		/*if (mName != NULL) {
			delete mName;
			mName = NULL;
		}*/
	}

	//����, ������Ҫ�ֶ�дһ���������캯��
	Stu(const Stu& s) {
		cout << "�������캯������" << endl;
		mAge = s.mAge;
		//��������Ǹ�ָ��, ���ǲ�����ô��
		//mName = s.mName;

		//������Ҫ���
		mName = new string(*s.mName);
	}
};

int main() {
	//ǳ����������
	{
		Stu s1(18);
		cout << "s1 age = " << s1.mAge << endl;

		//�����ڶ�������
		//ʹ�ÿ�������, �������һ���򵥵�ǳ����
		Stu s2(s1);
		cout << "s2 age = " << s2.mAge << endl;

		//����������ʹ��һ��ָ��, ��Ҫ����һ���µ�����
		Stu s3(18, "Kaede");
		cout << "s3 age = " << s3.mAge << endl;
		cout << "s3 name = " << *s3.mName << endl;

		//��ʹ�ÿ�����һ��
		Stu s4(s3);
		cout << "s4 age = " << s4.mAge << endl;
		cout << "s4 name = " << *s4.mName << endl;
	}
	return 0;
}