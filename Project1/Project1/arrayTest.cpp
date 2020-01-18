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
	cout <<"该数组的大小是"<<end << endl;




	system("pause");
}