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
//		//ָ��ָ����½��Ķ���
//		Height = new int(height);
//		cout << "�ұ�������" << endl;
//	}
//	~Student() {
//		if (Height!=NULL)
//		{
//			delete Height;
//			Height = NULL;
//		}
//		cout << "�ұ���������" << endl;
//	}
//	Student(const Student &s) {
//		ageTest = s.ageTest;
//		//�������Զ������ Height=s.Height;
//		Height =new int(*s.Height);
//
//	}
//
//private:
//
//};
//int main() {
//	Student st1(20,160);
//	cout << st1.ageTest << "��" << *st1.Height << endl;
//	system("pause");
//	Student s2(st1);
//	cout << s2.ageTest <<"��"<<*s2.Height<< endl;
//	return 0;
//}
//
