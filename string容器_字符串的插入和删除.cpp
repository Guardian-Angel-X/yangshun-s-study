#include<iostream>
using namespace std;

int main() {
	string str = "hello";

	//²åÈë×Ö·û´®
	str.insert(1, "111");
	cout << str << endl;

	//É¾³ı×Ö·û´®
	str.erase(1, 3);
	cout << str << endl;
}