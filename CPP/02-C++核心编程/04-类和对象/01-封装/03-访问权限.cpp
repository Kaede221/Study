#include <iostream>
using namespace std;

//������Ȩ��:
//����Ȩ�� ˽��Ȩ�� ����Ȩ��
class Student {
public:
	//public ���ǹ�����, ����, ���ⶼ�ǿ��Է��ʵ�
	int score;

	//�����ṩ����, ���ڸı����ڵ�˽������
	void changeName(string _name) {
		name = _name;
	}
	void showInfo() {
		cout << "Name: " << name << endl;
		cout << "score:" << score << endl;
	}
private:
	//˽��Ȩ��, ���ڿ��Է���, ���ⲻ�ܷ���
	string name;
protected:
	//��˽��Ȩ��һ��, �ڼ̳в��ֻ���ֲ�һ���ĵط�, Ŀǰ��˵һ��
	string phone;
};

int main() {
	Student s1{};

	//ֻ�ܷ��ʹ���Ȩ��
	s1.score = 200;

	//ͨ������, �޸�����
	s1.changeName("Kaede");
	s1.showInfo();

	//�������ǲ��ܷ��ʱ���˽������
	//s1.name = "100"; ��Ա������, ���ɷ���
	return 0;
}