#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "请您输入分数：" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	if (score > 600)
	{
		cout << "一本" << endl;
		if (score > 650)
		{
			cout << "北大" << endl;
		}
		else
		{
			cout << "杭电" << endl;
		}
	}
	else if(score>500)
	{
		cout << "二本" << endl;
	}
	else if (score > 400)
	{
		cout << "三本" << endl;
	}
	else
	{
		cout << "专科" << endl;
	}
}