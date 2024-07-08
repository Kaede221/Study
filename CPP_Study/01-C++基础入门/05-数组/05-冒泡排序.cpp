#include <iostream>
using namespace std;

int main() {
	//比如 我想要把一个无序的数组, 排列为递增或者递减的数组
	int arr1[] = { 1,5,9,8,7,5,3,2,6,4 };
	cout << "排序前: ";
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		cout << arr1[i] << " ";
	}
	cout << endl;

	//其实原理差不多, 就是先把一个数据和其他的数据对比, 只要大, 就交换
	//每次比较, 但是每次次数减一就好
	//*没看懂吧? 去网上搜搜原理吧, 我用文字讲的太麻烦了
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]) - 1; i++) {
		//总共排序的论述为元素个数-1

		//内层循环对比
		//次数等于元素个数 - 当前轮数 - 1
		for (int j = 0; j < sizeof(arr1) / sizeof(arr1[0]) - i - 1; j++) {
			//如果第一个数字比较大, 那么交换这两个元素
			if (arr1[j] > arr1[j + 1]) {

				//交换这两个东西
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;
			}
		}
	}

	//打印就好
	cout << "排序后: ";
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		cout << arr1[i] << " ";
	}

	return 0;
}