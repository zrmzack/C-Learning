#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
#include <stdio.h>
int main()
{
	/*cout <<"type : \t\t\t\t" <<"*********size*********"<< endl;
	cout <<"bool : \t\t\t\t" <<"��ռ�õ��ֽ�:"<< sizeof(bool)<<endl;
	cout << "\t\t���ֵ��" << (numeric_limits<bool>::max)()<< endl;
	cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
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
	//short int i;           // �з��Ŷ�����
	//short unsigned int j;  // �޷��Ŷ�����

	//j = 50000;

	//i = j;
	//cout << i << " " << j;

	//return 0;
	/*for (; ; )
	{
		printf("This loop will run forever.\n");
	}*/

	//int n[10]; // n ��һ������ 10 ������������

 // // ��ʼ������Ԫ��          
	//for (int i = 0; i < 10; i++)
	//{
	//	n[i] = i + 100; // ����Ԫ�� i Ϊ i + 100
	//}
	//cout << "Element" << setw(13) << "Value" << endl;

	//// ���������ÿ��Ԫ�ص�ֵ                     
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