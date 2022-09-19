#include <stdio.h>

void main()
{
	int num = 10;
	printf("%d\n", &num); //num의 주소 출력

	int* a = &num;		//a =  num의 주소 0x30

	printf("%d\n", a);	//a=num의 주소 출력
	printf("%d\n", *a);	//*&num 출력
}