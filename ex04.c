#include <stdio.h>

void main()
{
	int num = 10;
	printf("%d\n", &num); //num�� �ּ� ���

	int* a = &num;		//a =  num�� �ּ� 0x30

	printf("%d\n", a);	//a=num�� �ּ� ���
	printf("%d\n", *a);	//*&num ���
}