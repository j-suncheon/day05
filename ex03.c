/*
	1 - 100 : 37
	37���� ū���Դϴ�
	��ȸ�� �� 6�� ���ҽ��ϴ�

	38 - 100 : 72
	72���� �������Դϴ�
	��ȸ�� �� 5�� ���ҽ��ϴ�.

	38 - 71 : 60
	72���� �������Դϴ�
	��ȸ�� �� 4�� ���ҽ��ϴ�.

	38 - 59 : 43
	�����մϴ�! �����Դϴ�.

	�Ǵ�

	38 - 59 : 39
	39���� ū���Դϴ�
	��ȸ�� �� 0�� ���ҽ��ϴ�
	�ƽ����ϴ�. ��ȸ�� �� �����ϼ̽��ϴ�
	������ [43]�Դϴ�.
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