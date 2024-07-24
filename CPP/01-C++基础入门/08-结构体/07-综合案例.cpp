#include <iostream>
using namespace std;

/* 需求
设计一个学生的结构体, 有年龄, 名称
创建一个结构体数组, 储存5个学生
通过冒泡排序, 将学生按照年龄升序排序, 最后打印数组的内容
*/

struct Student
{
	string name = "";
	int age = 0;
};

int main() {
	//给一个数组, 储存学生
	Student stuArray[] = {
		{"Kaede", 16},
		{"Jack", 18},
		{"Lucky", 20},
		{"Joen", 16},
		{"Poine", 14}
	};

	//获取数组长度
	int len = sizeof(stuArray) / sizeof(stuArray[0]);

	//对数组进行冒泡排序
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			//这里判断的是数组的元素的年龄, 所以需要仔细判断一下
			if (stuArray[j].age > stuArray[j + 1].age) {
				Student temp = stuArray[j];
				stuArray[j] = stuArray[j + 1];
				stuArray[j + 1] = temp;
			}
		}
	}

	//随后输出看看是否成功了
	for (int i = 0; i < len; i++) {
		cout << "Name: " << stuArray[i].name << ", Age: " << stuArray[i].age << endl;
	}
	return 0;
}