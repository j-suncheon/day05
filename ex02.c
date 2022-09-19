#include <stdio.h>

/*
	첫번째 정수 : 12
	두번째 정수 : 6
	12, 6 중 가장 큰 수 : 12
*/

int get_number()
{
	int num;
	printf("Input number : ");
	scanf("%d", &num);

	return num;
}

int prn_max(int num,int num2)
{
	int max = num > num2 ? num : num2;
}

void main()
{
	int num = get_number();
	int num2 = get_number();

	int max = prn_max(num, num2);
	printf("%d", max);
}