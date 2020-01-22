//#include<iostream>
//using namespace std;
//
//class building {
//
//	friend void goodGay(building&building01);
//public:
//	building() {
//		sittingRoom = "客厅";
//		bedRoom = "卧室";
//	}
//
//public:
//	string sittingRoom;
//
//private:
//	string bedRoom;
//
//};
//
//void goodGay(building &building01) {
//	cout << "好基友访问中" << building01.sittingRoom << endl;
//	cout << "好基友访问中" << building01.bedRoom << endl;
//}
//
//
//
//void test01() {
//	building building01;
//	goodGay(building01);
//}
//
//int main() {
//	test01();
//}