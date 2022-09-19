#include <stdio.h>

void update(int* p_num)
{
	*p_num = *p_num + 50;
}

void main()
{
	int num = 10;

	update(&num);

	printf("num = %d\n", num);
}