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

//��ʼ��ѧ��
void Student(vector<Person>&v)
{
	for (int i = 0; i < 5; i++)
	{
		string nameseed = "ABCDE";
		string name = "ѧ��";
		name += nameseed[i];

		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}

//��ֲ��õ�ƽ����
void setScore(vector<Person>&v)
{
	
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int>Score;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;  //һ��60~100�������
			Score.push_back(score);
		}

		////����
		//for (deque<int>::iterator dit = Score.begin(); dit != Score.end(); dit++)
		//{
		//	cout << *dit ;
		//}
		//cout << endl;

		sort(Score.begin(), Score.end());

		Score.pop_back();
		Score.pop_front();

		//����ƽ����
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
	//�������������
	srand((unsigned int)time(NULL));

	//����ѧ������
	vector<Person> student;

	//�������м���ѧ��
	Student(student);

	//��ѧ����ֲ��õ�ƽ����
	setScore(student);

	//���ѧ���͵÷�
	for (vector<Person>::iterator it = student.begin(); it != student.end(); it++)
	{
		cout << "������" << it->ysr_name << "������ " << it->ysr_score << endl;
	}

	
	return 0;
}