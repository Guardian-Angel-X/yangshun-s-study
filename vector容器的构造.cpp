#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//打印函数
void Print1(int v) {
	cout << v << " ";
}

void Print2(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it <<" ";
	}
	cout << endl;
}

//vector容器构造
void test01() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	for_each(v1.begin(), v1.end(), Print1);
	cout << endl;

	Print2(v1);

	//用区间的方式进行构造
	vector<int>v2(v1.begin()+1, v1.end()-1);
	Print2(v2);

	//n个elem进行构造
	vector<int>v3(10, 100);
	Print2(v3);

	//拷贝构造
	vector<int>v4(v3);
	Print2(v4);
}

int main() {
	test01();
}