#include <stdio.h>

/*
	0 - 100점사이의 성적 : 85
	85점의 학점은 B입니다.

	0 - 100점사이의 성적 : 1000
	0 - 100점사이로만 입력하세요

	0 - 100점사이의 성적 : 65
	65점의 학점은 D입니다.
*/

int input()
{
	int score;

	for (int i = 0; i < 1; i++)
	{
		printf("0 - 100점 사이의 성적 : ");
		scanf("%d", &score);

		if (score < 0 || score>100)
		{
			printf("0 - 100 사이로만 입력하세요\n");
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
	printf("%d점의 학점은 %c입니다.", score, grade);
}

void main()
{

	int score = input();

	char grade = get_grade(score);

	prn(score, grade);

}