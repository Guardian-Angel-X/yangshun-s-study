#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
#include<string>
#include<ctime>
using namespace std;

class Person
{
public:
	Person(string name, int score)
	{
		this->ysr_name = name;
		this->ysr_score = score;
	}

	string ysr_name;
	int ysr_score;
};

//初始化学生
void Student(vector<Person>&v)
{
	for (int i = 0; i < 5; i++)
	{
		string nameseed = "ABCDE";
		string name = "学生";
		name += nameseed[i];

		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}

//打分并得到平均数
void setScore(vector<Person>&v)
{
	
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>Score;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;  //一个60~100的随机数
			Score.push_back(score);
		}

		////测试
		//for (deque<int>::iterator dit = Score.begin(); dit != Score.end(); dit++)
		//{
		//	cout << *dit ;
		//}
		//cout << endl;

		sort(Score.begin(), Score.end());

		Score.pop_back();
		Score.pop_front();

		//计算平均数
		int sum = 0;
		for (deque<int>::iterator dit = Score.begin();dit != Score.end();dit++)
		{
			sum += *dit;
		}
		int average = sum / Score.size();

		it->ysr_score = average;
	}
}

int main()
{
	//生成随机数种子
	srand((unsigned int)time(NULL));

	//创建学生容器
	vector<Person> student;

	//向容器中加入学生
	Student(student);

	//给学生打分并得到平均数
	setScore(student);

	//输出学生和得分
	for (vector<Person>::iterator it = student.begin(); it != student.end(); it++)
	{
		cout << "姓名：" << it->ysr_name << "分数： " << it->ysr_score << endl;
	}

	
	return 0;
}