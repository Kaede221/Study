#include <iostream>
using namespace std;

//��˵, �����Ƽ��ѳ�Ա���Զ�����Ϊ˽��, �����Լ�����Ҫ, д��Ӧ�ĺ���, �����������Ƴ���
class Student {
	//����Ϊ˽��
private:
	string name; //��ϣ���ɶ���д
	int age = 18; //�ɶ�, �������һ�³�ʼ��, ��Ϊ�����޷�����, Ҳ�����޷��޸���
	string uid; //��д, ���ɶ�

	//��ʼ��һ�����Ӻ���, �����ܹ��޸Ļ�ȡ����
	//�������Ҫ��������, ��������
public:
	//�����д
	void setName(string _name) {
		name = _name;
	}
	string getName() {
		return name;
	}

	//�����
	int getAge() {
		return age;
	}

	//����д
	void setUID(string _id) {
		uid = _id;
	}
};

int main() {
	//ʵ��������
	Student s1{};

	//ͨ������, ��������(���޷�ֱ������ ��ȡ����)
	s1.setName("Kaede Shimizu");
	s1.setUID("2107578350");

	//��ȡ��Ϣ
	cout << "Name: " << s1.getName() << ", Age: " << s1.getAge() << endl;
	return 0;
}