//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[] = { 3,4,1,5,6,10 };
//	//总排序的轮数：数组个数-1
//	for (int  i = 0; i < 6-1; i++)
//	{
//		for (int j = 0; j < 6 - i-1; j++) {
//			if (arr[j] > arr[j+1]) {
//				int temp = arr[j + 1];
//				arr[j+1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}