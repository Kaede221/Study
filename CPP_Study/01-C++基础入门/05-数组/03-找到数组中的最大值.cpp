#include <iostream>
using namespace std;

int main() {
	//需求就是名称那样子, 找到一个数组中最大的值
	int arr[] = { 123,234,345,987,654,432 };

	//其实可以直接遍历, 先初始化一个最大值, 然后依次判断, 如果大的话直接更新最大值就好
	//这里不建议设置一个固定的值, 比如0, 因为你不知道数组中的数据是否有比这个数据大的值
	int max_number = arr[0];
	for (int i = 1; i < (sizeof(arr) / sizeof(arr[0])); i++) {
		//这里使用一个三元运算符, 简单一些
		//什么? 你没看懂?
		//没事, 我再讲一遍: 如果arr第i个元素大于储存的最大值, 那么更新最大值为数组的第i个元素; 否则的话不变, 也就是等于自己
		max_number = arr[i] > max_number ? arr[i] : max_number;
	}
	cout << "最大值为: " << max_number << endl;
	return 0;
}