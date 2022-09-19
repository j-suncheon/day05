#include <stdio.h>

/*
   함수() : 문장들(;)의 집합               <- 불리는함수 : 피호출자 함수 // 호출자/피호출자
        : 함수명(); <- 함수 실행 = 호출
        : 함수끼리 서로 독립적
        : 반환형(return 타입) 함수명(매개변수(parameter, argument)){   <- 함수 header
            실행문;                                     <- 함수 body
             ...
         }
        : 호출자 -> 피호출자에게 전달할때 사용 == 파라미터, 정해지면 꼭 파라미터 넘겨줘야한다
        : 피호출자 -> 호출자에게 전달할때 사용 == 리턴값
   * void : 없다
   * 피호출자 함수는 호출자 함수보다 위에 있어야한다. 먼저 선언되어 있어야한다
*/

void prn_star(int cnt)		//피호출자 함수
{
    for (int i = 0; i <cnt; i++)
    {
        printf("*");
    }
    printf("\n");
}

void main(void)		//호출자 함수
{
	prn_star(10);
    printf("Hello\n");
    prn_star(20);
    printf("Hi\n");
    prn_star(5);
    printf("Good-bye\n");
    prn_star(12);
}