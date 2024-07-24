#include <iostream>
using namespace std;

/* 项目需求
封装一个函数, 利用冒泡排序, 实现对整型数组的升序排序
函数无返回值 -> 使用指针

首先定义函数, 设置参数为一个指针, 需要传入数组的地址
*/

void bubbleSwap(int* arr, int len) {
	//这里肯定需要传入数组首地址, 还有数组的长度, 不然长度无法统计
	//直接开始冒泡排序就好 这个一定要记住了
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			//判断一下, 如果j大于j + 1, 那么交换这两个数字就好
			if (arr[j] > arr[j + 1]) {
				//TODO 注意事项
				/* 注意
				这里为什么可以直接使用下标呢?
				因为这里用的是数组元素的指针下标表示法
				*(p + i) = p[i]
				*/
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}

//这里给一个函数, 用于查看数组里面的元素
void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	//数组示例
	int arr1[] = {10,9,5,1,7,6,4,3,2,8};

	//数组长度
	int len = sizeof(arr1) / sizeof(arr1[0]);

	//调用函数
	bubbleSwap(arr1, len);

	//查看是否排序完成
	printArray(arr1, len);

	return 0;
}