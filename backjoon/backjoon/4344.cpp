#include <iostream>
using namespace std;

bool InputCase(int* people, int* score);

int main()
{
	int num = 0;
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		int people;
		int *score;
		InputCase(&people, score);
		cout << people << endl;
		for (int j = 0; j < people; j++)
		{
			cout << score[j];
		}
	}


	return 0;
}

bool InputCase(int* people, int* score)
{
	try 
	{
		cin >> *people;
		if ((*people < 1) || (*people > 1000))
			throw new exception("각 케이스의 사람수는 1~1000명 입니다!");

		score = new int[*people];
		for (int j = 0; j < *people; j++)
		{
			cin >> score[j];
			if ((score[j] < 0) || (score[j] > 100))
				throw new exception("각 학생은 0~100 사이의 점수를 가집니다!");
		}
	}
	catch (exception) 
	{
		return false;
	}
	return true;
}

//https://www.acmicpc.net/problem/4344