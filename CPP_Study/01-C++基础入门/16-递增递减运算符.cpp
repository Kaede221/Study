#include <iostream>
using namespace std;

int main() {
	/*
	这是一种很有意思的东西
	比如i++, 等效于i = i + 1
	*/
	int i = 0;
	int j = 0;
	i++;
	cout << i << endl;
	
	//上面的是后置自增, 会先运算, 后自增
	//前置自增就是先自增, 后运算

	//这个j会等于i + 1 = 2
	j = ++i;
	cout << j << endl;

	//这个则是先让j等于i = 2, 再让i += 1 -> i = 2
	j = i++;
	cout << j << endl;
	return 0;
}