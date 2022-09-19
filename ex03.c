/*
	1 - 100 : 37
	37보다 큰수입니다
	기회는 총 6번 남았습니다

	38 - 100 : 72
	72보다 작은수입니다
	기회는 총 5번 남았습니다.

	38 - 71 : 60
	72보다 작은수입니다
	기회는 총 4번 남았습니다.

	38 - 59 : 43
	축하합니다! 정답입니다.

	또는

	38 - 59 : 39
	39보다 큰수입니다
	기회는 총 0번 남았습니다
	아쉽습니다. 기회를 다 소진하셨습니다
	정답은 [43]입니다.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	srand((unsigned)time(NULL));
	int random = rand()%100+1;
	printf("%d\n", random);
}