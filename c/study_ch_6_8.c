// trouble.c -- = 의 잘못된 사용
// 무한 루프를 일으킨다.
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;
    
    printf("합을 구할 정수를 하나 입력하시오 ");
    printf("(끝내려면 q): ");
    status = scanf("%ld", &num); // 입력값이 정수나 실수라면 1, 문자라면 0을 리턴하여 status에 할당한다.
    while (status = 1)  // = 대입연산자 == 관계연산자
    {
        sum = sum + num;
        printf("다음 정수를 입력하시오 (끝내려면 q): ");
        status = scanf("%ld", &num);
    }
    printf("입력된 정수들의 합은 %ld입니다.\n", sum);
    
    return 0;
}