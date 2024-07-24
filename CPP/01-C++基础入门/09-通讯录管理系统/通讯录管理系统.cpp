#include <iostream>
#define MAX 1000 //�����趨�������, ����ά��
using namespace std;

//����, ����ʵ�������ʼ�˵��Ĺ���
//����һ���������, û�з���ֵ, û�в���
void showMenu() {
	//����˳������
	system("cls");
	cout << "# ͨѶ¼����ϵͳ #" << endl;
	cout << "=== 1. �����ϵ��" << endl;
	cout << "=== 2. ��ʾ��ϵ��" << endl;
	cout << "=== 3. ɾ����ϵ��" << endl;
	cout << "=== 4. ������ϵ��" << endl;
	cout << "=== 5. �޸���ϵ��" << endl;
	cout << "=== 6. �����ϵ��" << endl;
	cout << "=== 0. �˳�ͨѶ¼" << endl;
	cout << "# ͨѶ¼����ϵͳ #" << endl;
}

//�����ϵ�˵Ľṹ��
struct Person
{
	//����
	string mName = "";
	//����
	string mAge = "";
	//�Ա�
	string mSex = "";
	//�绰
	string mPhone = "";
	//��ַ
	string mAddress = "";
};

//���ͨѶ¼�Ľṹ��
struct AddressBook
{
	//ͨѶ¼�������ϵ�˵�����
	Person personArr[MAX];
	//��ϵ�˵ĸ���
	int mSize = 0;
};

//����һЩ����, ��Ȼ�޷�ʹ��
void addPerson(AddressBook* addressbook);
void showPerson(AddressBook* ab);
void deletePerson(AddressBook* ab);
void findPerson(AddressBook* ab);
void editPerson(AddressBook* ab);
void clearPerson(AddressBook* ab);

int main() {
	//�趨һ��ѡ��ı���, ������ȡ�û���ѡ��
	int select = 0;

	//����ͨѶ¼
	AddressBook addressbook;
	//��ʼ����Ա����(��ʵҲ����, �Դ���)
	addressbook.mSize = 0;

	//ѭ��
	while (true) {
		//��ʾ�˵�
		showMenu();

		//��ȡ����
		cout << "> ";
		cin >> select;

		//��������, ����Ӧ�ø�ʲô
		switch (select)
		{
		case 0: //�˳�
			cout << "��ӭ�´�ʹ��!" << endl;
			system("pause");
			return 0;
			break;
		case 1: //���
			addPerson(&addressbook);
			break;
		case 2: //��ʾ
			showPerson(&addressbook);
			break;
		case 3: //ɾ��
			deletePerson(&addressbook);
			break;
		case 4: //����
			findPerson(&addressbook);
			break;
		case 5: //�޸�
			editPerson(&addressbook);
			break;
		case 6: //���
			clearPerson(&addressbook);
			break;
		default:
			break;
		}
	}
	return 0;
}

//�����ϵ�˵ĺ���
void addPerson(AddressBook* addressbook) {
	//�����ж�, ͨѶ¼�Ƿ�����
	if (addressbook->mSize >= MAX) {
		cout << "ͨѶ¼����, �޷����" << endl;
		return;
	}

	//�����������, �������м���
	//�Ȼ�ȡ���е�����
	string name;
	cout << "��������: ";
	cin >> name;
	//�������
	addressbook->personArr[addressbook->mSize].mName = name;

	//�Ա�
	string sex;
	cout << "�����Ա�: ";
	cin >> sex; addressbook->personArr[addressbook->mSize].mSex = sex;

	//����
	string age;
	cout << "����������: ";
	cin >> age;
	addressbook->personArr[addressbook->mSize].mAge = age;

	//�绰
	string phone;
	cout << "������绰: ";
	cin >> phone;
	addressbook->personArr[addressbook->mSize].mPhone = phone;

	//סַ
	string address;
	cout << "�������ͥסַ: ";
	cin >> address;
	addressbook->personArr[addressbook->mSize].mAddress = address;

	//����ͨѶ¼����
	addressbook->mSize++;
	cout << "��ӳɹ�" << endl;
	system("pause");
}

//��ʾ��ϵ�˺���
void showPerson(AddressBook* ab) {
	//���ж��Ƿ�Ϊ��
	if (ab->mSize == 0) {
		cout << "ͨѶ¼Ϊ��!" << endl;
		system("pause");
		return;
	}
	for (int i = 0; i < ab->mSize; i++) {
		cout << "����: " << ab->personArr[i].mName << "\t";
		cout << "�Ա�: " << ab->personArr[i].mSex << "\t";
		cout << "����: " << ab->personArr[i].mAge << "\t";
		cout << "�绰: " << ab->personArr[i].mPhone << "\t";
		cout << "סַ: " << ab->personArr[i].mAddress << "\t" << endl;;
	}
	system("pause");
}

//�����ϵ���Ƿ����
//����ͨѶ¼�Ͳ��ҵ�����
static int isExist(AddressBook* ab, string name) {
	//���ʾ��Ǳ���
	for (int i = 0; i < ab->mSize; i++) {
		//����ҵ��˵Ļ�
		if (ab->personArr[i].mName == name) {
			return i;
		}
	}
	//û�ҵ��Ļ�, ����-1
	return -1;
}

//ɾ����ϵ��
void deletePerson(AddressBook* ab) {
	//ͨ������������Ƿ����
	//������������ʵ������һ������. �����ϵ���Ƿ����, �������, ����λ��, �����ڷ���-1
	cout << "����ɾ����ϵ������: ";
	string name;
	cin >> name;
	//��ȡ״̬
	int ret = isExist(ab, name);
	if (ret == -1) {
		cout << "���޴���" << endl;
		system("pause");
		return;
	}

	//�ҵ���, ��ʼ����, ��ʵ�����ú����������ǰ���ƶ�һ��
	for (int i = 0; i < ab->mSize; i++) {
		ab->personArr[i] = ab->personArr[i + 1];
	}
	//ͬʱ��������
	ab->mSize--;
	cout << "ɾ���ɹ�!" << endl;
	system("pause");
}

//������ϵ��
void findPerson(AddressBook* ab) {
	cout << "����������: ";
	string name;
	cin >> name;
	//��ȡ״̬��
	int ret = isExist(ab, name);
	//ͨ�����Ʋ��Ҿͺ�
	if (ret == -1) {
		//û�ҵ�
		cout << "���޴���" << endl;
		system("pause");
		return;
	}
	//��������ҵ���
	//ֱ������ͺ�
	cout << "����: " << ab->personArr[ret].mName << "\t";
	cout << "�Ա�: " << ab->personArr[ret].mSex << "\t";
	cout << "����: " << ab->personArr[ret].mAge << "\t";
	cout << "�绰: " << ab->personArr[ret].mPhone << "\t";
	cout << "סַ: " << ab->personArr[ret].mAddress << "\t" << endl;
	system("pause");
}

//�޸���ϵ��
void editPerson(AddressBook* ab) {
	cout << "����������: ";
	string name;
	cin >> name;

	//�ж��Ƿ����
	int ret = isExist(ab, name);
	if (ret == -1) {
		cout << "���޴���" << endl;
		system("pause");
		return;
	}
	//�ҵ��˵Ļ�, ���ٴλ������ͺ�
	string sex;
	string age;
	string phone;
	string address;

	cout << "��������: ";
	cin >> name;
	cout << "�����Ա�: ";
	cin >> sex;
	cout << "��������: ";
	cin >> age;
	cout << "����绰: ";
	cin >> phone;
	cout << "�����ַ: ";
	cin >> address;

	ab->personArr[ret].mName = name;
	ab->personArr[ret].mSex = sex;
	ab->personArr[ret].mAge = age;
	ab->personArr[ret].mPhone = phone;
	ab->personArr[ret].mAddress = address;

	cout << "�޸����!" << endl;
	system("pause");
}

//�����ϵ��
void clearPerson(AddressBook* ab) {
	//ֱ�Ӿ��������ϵ��
	//������ʵֱ�Ӱ�ͨѶ¼����������Ϊ0�Ϳ�����, ʵ���߼��ϵ����
	cout << "��ȷ����? (Y/N)" << endl;
	string choice;
	cin >> choice;
	if (choice != "N") {
		ab->mSize = 0;
		cout << "�����!" << endl;
		system("pause");
	}
	else {
		system("pause");
	}
	return;
}