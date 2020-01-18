//#include<iostream>
//using namespace std;
//
//int main() 
//{
//	int arr[] = { 1,2,4,5,3,8 };
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0])-1;
//	cout << "print before array" << endl;
//	for (int i = 0; i < end+1; i++)
//	{
//		cout << arr[i] << endl;
//	}
//		while (start < end)
//		{
//				int temp = arr[start];
//				arr[start] = arr[end];
//				arr[end] = temp;
//				start++;
//				end--;
//		}
//	cout << "print before array" << endl;
//	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}