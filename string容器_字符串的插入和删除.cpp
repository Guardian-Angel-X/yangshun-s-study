#include<iostream>
using namespace std;

int main() {
	string str = "hello";

	//�����ַ���
	str.insert(1, "111");
	cout << str << endl;

	//ɾ���ַ���
	str.erase(1, 3);
	cout << str << endl;
}