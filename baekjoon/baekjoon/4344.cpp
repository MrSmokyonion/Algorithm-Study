#include <iostream>
using namespace std;

bool InputCase(int* people, int* score);

int main()
{
	int num = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		int people = 0;
		int *score = nullptr;
		InputCase(&people, score);
		printf("%d\n", people);
		for (int j = 0; j < people; j++)
		{
			cout << score[j];
			printf("%d", score[j]);
		}
	}


	return 0;
}

bool InputCase(int* people, int* score)
{
	try 
	{
		scanf("%d", people);
		if ((*people < 1) || (*people > 1000))
			throw new exception("�� ���̽��� ������� 1~1000�� �Դϴ�!");

		score = new int[*people];
		for (int j = 0; j < *people; j++)
		{
			scanf("%d", score + j);
			if ((score[j] < 0) || (score[j] > 100))
				throw new exception("�� �л��� 0~100 ������ ������ �����ϴ�!");
		}
	}
	catch (exception) 
	{
		return false;
	}
	return true;
}

//https://www.acmicpc.net/problem/4344