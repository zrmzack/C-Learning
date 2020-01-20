//#include<iostream>
//using namespace std;
//class Student
//{
//	
//public:
//	int ageTest;
//	int* Height;
//	Student(int age,int height) {
//		ageTest = age;
//		//指针指向该新建的堆区
//		Height = new int(height);
//		cout << "我被创建了" << endl;
//	}
//	~Student() {
//		if (Height!=NULL)
//		{
//			delete Height;
//			Height = NULL;
//		}
//		cout << "我被销毁了了" << endl;
//	}
//	Student(const Student &s) {
//		ageTest = s.ageTest;
//		//编译器自动会加上 Height=s.Height;
//		Height =new int(*s.Height);
//
//	}
//
//private:
//
//};
//int main() {
//	Student st1(20,160);
//	cout << st1.ageTest << "和" << *st1.Height << endl;
//	system("pause");
//	Student s2(st1);
//	cout << s2.ageTest <<"和"<<*s2.Height<< endl;
//	return 0;
//}
//
