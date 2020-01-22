#include<iostream>
using namespace std;

class Person
{

public: 
	int x;
	int y;
public:
	Person();

private:

};

Person::Person()
{
	x = 10;
	y = 10;
}
Person operator+(Person& p1, Person& p2) 
{
	Person temp;
	temp.x = p1.x + p2.x;
	temp.y = p1.y + p2.y;
	return temp;
}
ostream &operator<<(ostream &cout, Person& p) {
	cout << p.x << endl;
	cout << p.y << endl;
	return cout;
}

void test() {
	Person p1;
	Person p2;
	Person p3 = p1 + p2;
	cout << p3.x << endl;
	cout << p3.y << endl;
}
void test2() {
	Person p;
	cout<<p;
}

int main() {
	test2();
}