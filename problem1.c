#include <stdio.h>

/*
	0 - 100�������� ���� : 85
	85���� ������ B�Դϴ�.

	0 - 100�������� ���� : 1000
	0 - 100�����̷θ� �Է��ϼ���

	0 - 100�������� ���� : 65
	65���� ������ D�Դϴ�.
*/

int input()
{
	int score;

	for (int i = 0; i < 1; i++)
	{
		printf("0 - 100�� ������ ���� : ");
		scanf("%d", &score);

		if (score < 0 || score>100)
		{
			printf("0 - 100 ���̷θ� �Է��ϼ���\n");
			i--;
		}
	}

	return score;
}

char get_grade(int score)
{
	char grade;
	for (int i = 0; i < 1; i++)
	{
		switch (score / 10)
		{
		case 9: case 10:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
		case 6:
			grade = 'D';
			break;
		default:
			grade = 'F';
			break;
		}
	}
	return grade;
}

void prn(int score, char grade)
{
	printf("%d���� ������ %c�Դϴ�.", score, grade);
}

void main()
{

	int score = input();

	char grade = get_grade(score);

	prn(score, grade);

}