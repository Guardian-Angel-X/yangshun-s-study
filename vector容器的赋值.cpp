#include<iostream>
#include<vector>
using namespace std;

void Print(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int>v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	Print(v1);

	vector<int>v2 = v1;
	Print(v2);

	vector<int>v3(v1);
	Print(v3);

	vector<int>v4(v3.begin(), v3.end());
	Print(v4);

	vector<int>v5(10, 100);
	Print(v5);

}


int main() {
	test01();
}