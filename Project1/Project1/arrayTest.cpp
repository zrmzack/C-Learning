#include <iostream>
using namespace std;

int main()
{
	int array[] = { 1,4,6,7,2 };

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << endl;
	}
	int start = 0;
	int end = sizeof(array) / sizeof(array[0]);
	cout <<"������Ĵ�С��"<<end << endl;




	system("pause");
}