//#include<iostream>
//using namespace std;
//int main()
//{
////const 修视指针(常量指针)
//	int a = 10;
//	int b = 10;
//	//指针指向了a的内存地址
//	//指针指向的值不可以改变，指针的指向可以改变
//	const int* p = &a;
//	//*p = 20;改变了指针的值
//	p = &b;
//
////const 修视常量   (指针常量)
//	//指针的指向不可以改，指针的值可以改
//	int* const p2 = &a;
//		* p2 = 100;//指针的值可以改变
//		//p2 = &b; (指针的指向不可以改变)
//
//
////const 修视常量和指针
//		const int* const p3 = &a;
//		//指针的指向和指针的值都不可以改变
//
//}