#include <iostream>
#define MAX 1000 //这里设定最大人数, 方便维护
using namespace std;

//首先, 我们实现输出开始菜单的功能
//就是一个输出函数, 没有返回值, 没有参数
void showMenu() {
	//这里顺便清屏
	system("cls");
	cout << "# 通讯录管理系统 #" << endl;
	cout << "=== 1. 添加联系人" << endl;
	cout << "=== 2. 显示联系人" << endl;
	cout << "=== 3. 删除联系人" << endl;
	cout << "=== 4. 查找联系人" << endl;
	cout << "=== 5. 修改联系人" << endl;
	cout << "=== 6. 清空联系人" << endl;
	cout << "=== 0. 退出通讯录" << endl;
	cout << "# 通讯录管理系统 #" << endl;
}

//设计联系人的结构体
struct Person
{
	//姓名
	string mName = "";
	//年龄
	string mAge = "";
	//性别
	string mSex = "";
	//电话
	string mPhone = "";
	//地址
	string mAddress = "";
};

//设计通讯录的结构体
struct AddressBook
{
	//通讯录保存的联系人的数组
	Person personArr[MAX];
	//联系人的个数
	int mSize = 0;
};

//声明一些函数, 不然无法使用
void addPerson(AddressBook* addressbook);
void showPerson(AddressBook* ab);
void deletePerson(AddressBook* ab);
void findPerson(AddressBook* ab);
void editPerson(AddressBook* ab);
void clearPerson(AddressBook* ab);

int main() {
	//设定一个选择的变量, 进而获取用户的选择
	int select = 0;

	//创建通讯录
	AddressBook addressbook;
	//初始化人员个数(其实也不用, 自带了)
	addressbook.mSize = 0;

	//循环
	while (true) {
		//显示菜单
		showMenu();

		//获取输入
		cout << "> ";
		cin >> select;

		//根据输入, 决定应该干什么
		switch (select)
		{
		case 0: //退出
			cout << "欢迎下次使用!" << endl;
			system("pause");
			return 0;
			break;
		case 1: //添加
			addPerson(&addressbook);
			break;
		case 2: //显示
			showPerson(&addressbook);
			break;
		case 3: //删除
			deletePerson(&addressbook);
			break;
		case 4: //查找
			findPerson(&addressbook);
			break;
		case 5: //修改
			editPerson(&addressbook);
			break;
		case 6: //清空
			clearPerson(&addressbook);
			break;
		default:
			break;
		}
	}
	return 0;
}

//添加联系人的函数
void addPerson(AddressBook* addressbook) {
	//首先判断, 通讯录是否满了
	if (addressbook->mSize >= MAX) {
		cout << "通讯录已满, 无法添加" << endl;
		return;
	}

	//否则允许添加, 正常运行即可
	//先获取所有的属性
	string name;
	cout << "输入姓名: ";
	cin >> name;
	//添加数据
	addressbook->personArr[addressbook->mSize].mName = name;

	//性别
	string sex;
	cout << "输入性别: ";
	cin >> sex; addressbook->personArr[addressbook->mSize].mSex = sex;

	//年龄
	string age;
	cout << "请输入年龄: ";
	cin >> age;
	addressbook->personArr[addressbook->mSize].mAge = age;

	//电话
	string phone;
	cout << "请输入电话: ";
	cin >> phone;
	addressbook->personArr[addressbook->mSize].mPhone = phone;

	//住址
	string address;
	cout << "请输入家庭住址: ";
	cin >> address;
	addressbook->personArr[addressbook->mSize].mAddress = address;

	//更新通讯录人数
	addressbook->mSize++;
	cout << "添加成功" << endl;
	system("pause");
}

//显示联系人函数
void showPerson(AddressBook* ab) {
	//先判断是否为空
	if (ab->mSize == 0) {
		cout << "通讯录为空!" << endl;
		system("pause");
		return;
	}
	for (int i = 0; i < ab->mSize; i++) {
		cout << "姓名: " << ab->personArr[i].mName << "\t";
		cout << "性别: " << ab->personArr[i].mSex << "\t";
		cout << "年龄: " << ab->personArr[i].mAge << "\t";
		cout << "电话: " << ab->personArr[i].mPhone << "\t";
		cout << "住址: " << ab->personArr[i].mAddress << "\t" << endl;;
	}
	system("pause");
}

//检测联系人是否存在
//传入通讯录和查找的名称
static int isExist(AddressBook* ab, string name) {
	//本质就是遍历
	for (int i = 0; i < ab->mSize; i++) {
		//如果找到了的话
		if (ab->personArr[i].mName == name) {
			return i;
		}
	}
	//没找到的话, 返回-1
	return -1;
}

//删除联系人
void deletePerson(AddressBook* ab) {
	//通过名称来检测是否存在
	//这里先在外面实现另外一个方法. 检测联系人是否存在, 如果存在, 返回位置, 不存在返回-1
	cout << "输入删除联系人姓名: ";
	string name;
	cin >> name;
	//获取状态
	int ret = isExist(ab, name);
	if (ret == -1) {
		cout << "查无此人" << endl;
		system("pause");
		return;
	}

	//找到了, 开始覆盖, 其实就是让后面的内容往前面移动一次
	for (int i = 0; i < ab->mSize; i++) {
		ab->personArr[i] = ab->personArr[i + 1];
	}
	//同时更新数量
	ab->mSize--;
	cout << "删除成功!" << endl;
	system("pause");
}

//查找联系人
void findPerson(AddressBook* ab) {
	cout << "请输入姓名: ";
	string name;
	cin >> name;
	//获取状态码
	int ret = isExist(ab, name);
	//通过名称查找就好
	if (ret == -1) {
		//没找到
		cout << "查无此人" << endl;
		system("pause");
		return;
	}
	//否则就是找到了
	//直接输出就好
	cout << "姓名: " << ab->personArr[ret].mName << "\t";
	cout << "性别: " << ab->personArr[ret].mSex << "\t";
	cout << "年龄: " << ab->personArr[ret].mAge << "\t";
	cout << "电话: " << ab->personArr[ret].mPhone << "\t";
	cout << "住址: " << ab->personArr[ret].mAddress << "\t" << endl;
	system("pause");
}

//修改联系人
void editPerson(AddressBook* ab) {
	cout << "请输入姓名: ";
	string name;
	cin >> name;

	//判断是否存在
	int ret = isExist(ab, name);
	if (ret == -1) {
		cout << "查无此人" << endl;
		system("pause");
		return;
	}
	//找到了的话, 就再次获得输入就好
	string sex;
	string age;
	string phone;
	string address;

	cout << "输入姓名: ";
	cin >> name;
	cout << "输入性别: ";
	cin >> sex;
	cout << "输入年龄: ";
	cin >> age;
	cout << "输入电话: ";
	cin >> phone;
	cout << "输入地址: ";
	cin >> address;

	ab->personArr[ret].mName = name;
	ab->personArr[ret].mSex = sex;
	ab->personArr[ret].mAge = age;
	ab->personArr[ret].mPhone = phone;
	ab->personArr[ret].mAddress = address;

	cout << "修改完成!" << endl;
	system("pause");
}

//清空联系人
void clearPerson(AddressBook* ab) {
	//直接就是清空联系人
	//我们其实直接把通讯录的人数设置为0就可以了, 实现逻辑上的清空
	cout << "你确定吗? (Y/N)" << endl;
	string choice;
	cin >> choice;
	if (choice != "N") {
		ab->mSize = 0;
		cout << "已清空!" << endl;
		system("pause");
	}
	else {
		system("pause");
	}
	return;
}