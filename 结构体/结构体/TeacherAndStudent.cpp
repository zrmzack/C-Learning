//#include<iostream>
//using namespace std;
//
//struct Student
//{
//	string sName;
//	int  score;
//
//};
//struct Teacher
//{
//	string tName;
//	Student sArray[5];
//};
//
//void allocateSpace(Teacher tArray[],int len) 
//{
//	string nameallocate = "123";
//	for (int  i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameallocate[i];
//	}
//}
//int main()
//{
//	Teacher tArray[3];
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//}