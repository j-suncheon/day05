#include <stdio.h>

int get_number()
{
	int a;
	printf("Input number : ");
	scanf("%d", &a);
	return a;
}

void get_min_max(int num, int num2, int* p_min, int* p_max )
{
	if (num>num2)
	{
		*p_min = num2;
		*p_max = num;
	}
	else
	{
		*p_min = num;
		*p_max = num2;
	}
}

void pri(int min, int max)
{
	printf("min : %d\nmax : %d", min, max);
}

void main()
{
	int num, num2;
	int min, max;

	num = get_number();
	num2 = get_number();

	get_min_max(num, num2, &min, &max);

	pri(min, max);
}