#include <iostream>
using namespace std;

int main() {
	//就是把整个数组给他反过来
	//这个属于一个动态分析问题哩
	int arr1[] = { 1,2,3,4,5 };

	//最常见的就是通过下标不断移动来实现了
	//首先直接设定这个数组的起始下标, 以及结束下标的位置(长度-1)
	int start = 0, end = sizeof(arr1) / sizeof(arr1[0]) - 1;

	//给一个循环, 实现两个元素的互换
	while (start < end)
	{
		//实现元素互换
		//先临时储存第一个数据
		int temp = arr1[start];
		//把第一个数据改为末尾数据
		arr1[start] = arr1[end];
		//把末尾数据改为起始数据
		arr1[end] = temp;

		//更新下标
		start++;
		end--;
	}

	//打印修改后的array
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		cout << i << " ";
	}
	return 0;
}