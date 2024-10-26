#include<iostream>
using namespace std;

int main() {
	string str = "hello world";

	//查找字串
	cout << str.substr(0, 5) << endl;
	
	//实用用法
	string email = "47974669@qq.com";
	int pos = email.find("@");
	cout << email.substr(0, pos) << endl;
}