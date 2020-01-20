#include <iostream>
using namespace std;
//值传递
void swap0(int a,int b) {
	int temp = a;
	a = b;
	b = a;
}


//地址传递
void swap1(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//引用传递
void swap2(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a0 = 10;
	int b0 = 20;
	int a1 = 10;
	int b1 = 20;
	int a2 = 10;
	int b2 = 20;
	swap0(a0, b0);
	swap1(&a1, &b1);
	swap2(a2, b2);
	cout << a0 << endl;
	cout << b0 << endl;
	cout << a1 << endl;
	cout << b1 << endl;
	cout << a2 << endl;
	cout << b2 << endl;

}