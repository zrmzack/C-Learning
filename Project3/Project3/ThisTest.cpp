#include<iostream>
using namespace std;
class Student
{
public:
	string name;
	Student(string name) {
		this->name = name;
	};
	~Student() {
	
	};
	Student &addage(Student &stu) {
		this->name += stu.name;
		return *this;
	}
};
int main() {
	Student s("zrm");
	&s.addage(s).addage(s);
	cout << s.name << endl;

}