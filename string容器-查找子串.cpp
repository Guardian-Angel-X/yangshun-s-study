#include<iostream>
using namespace std;

int main() {
	string str = "hello world";

	//�����ִ�
	cout << str.substr(0, 5) << endl;
	
	//ʵ���÷�
	string email = "47974669@qq.com";
	int pos = email.find("@");
	cout << email.substr(0, pos) << endl;
}