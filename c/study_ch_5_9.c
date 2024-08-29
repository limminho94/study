// min_sec.c -- 초 수로 주어지는 시간을 분과 초로 변환한다
#include <stdio.h>
#define SEC_PER_MIN 60            // 1분은 60초
int main(void)
{
    int sec, min, left; // 정수형 변수 sec, min, left 선언
    
    printf("초 수로 주어지는 시간을 분과 초로 변환합니다!\n");
    printf("초 수를 입력하시오 (<=0이면 끝):\n");
    scanf("%d", &sec);            // 초 수를 읽는다
    while (sec > 0)     // sec 값이 0보다 크다면 {}반복실행
    {
        min = sec / SEC_PER_MIN;  // 나머지를 버린 분 수(몫값)
        left = sec % SEC_PER_MIN; // 나머지 초 수(나머지값)
        printf("%d 초는 %d 분, %d 초입니다.\n", sec, min, left);
        printf("다음 초 수를 입력하시오 (<=0이면 끝):\n");
        scanf("%d", &sec);
    }
    printf("끝!\n");
    
    return 0;
}