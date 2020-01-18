#include<iostream>
using namespace std;
void buble(int *arr,int len) {
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
			
		}
	}
}
void printArray(int *arr,int len) {
	for (int  i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	
	int arr[] = { 1,3,5,2,4,6,9,8,0 };
	buble(arr, sizeof(arr) / sizeof(arr[0]));
	printArray(arr, sizeof(arr) / sizeof(arr[0]));
	

}