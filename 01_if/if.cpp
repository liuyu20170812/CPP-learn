#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "�������������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;
	if (score > 600)
	{
		cout << "һ��" << endl;
		if (score > 650)
		{
			cout << "����" << endl;
		}
		else
		{
			cout << "����" << endl;
		}
	}
	else if(score>500)
	{
		cout << "����" << endl;
	}
	else if (score > 400)
	{
		cout << "����" << endl;
	}
	else
	{
		cout << "ר��" << endl;
	}
}