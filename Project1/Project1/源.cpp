#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
#include <stdio.h>
int main()
{
	/*cout <<"type : \t\t\t\t" <<"*********size*********"<< endl;
	cout <<"bool : \t\t\t\t" <<"所占用的字节:"<< sizeof(bool)<<endl;
	cout << "\t\t最大值：" << (numeric_limits<bool>::max)()<< endl;
	cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
	return 0;*/

	/*typedef int love;
	love x = 429496797;
	cout << x << endl;
	cout << sizeof(x) << endl;*/

	/*enum color {red, green, blue} c;
	c = blue;
	cout << c  ;*/

	/*bool x = 3;
	cout << x;*/
	//short int i;           // 有符号短整数
	//short unsigned int j;  // 无符号短整数

	//j = 50000;

	//i = j;
	//cout << i << " " << j;

	//return 0;
	/*for (; ; )
	{
		printf("This loop will run forever.\n");
	}*/

	//int n[10]; // n 是一个包含 10 个整数的数组

 // // 初始化数组元素          
	//for (int i = 0; i < 10; i++)
	//{
	//	n[i] = i + 100; // 设置元素 i 为 i + 100
	//}
	//cout << "Element" << setw(13) << "Value" << endl;

	//// 输出数组中每个元素的值                     
	//for (int j = 0; j < 10; j++)
	//{
	//	cout << setw(7) << j << setw(13) << n[j] << endl;
	//}

	//return 0;

	int x = 20;
	int *ip;
	ip = &x;
	cout << ip << endl;
	cout << *ip << endl;
}