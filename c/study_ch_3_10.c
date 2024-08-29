/* escape.c -- 이스케이프 문자를 사용한다 */
#include <stdio.h>
int main(void)
{
    float salary;   //salary라는 변수를 데이터타입 float으로 선언한다.

    printf("\a원하는 월급 액수를 입력하시오:"); // 1 \a 는 경보음을 울린다.
    printf(" $_______\b\b\b\b\b\b\b"); // 2 \b는 커서를 왼쪽으로 7칸 옮긴다
    scanf("%f", &salary);   // & 주소연산자라고 하며 입력받는 데이터를 주소값안에 있는 공간에 저장한다.
    printf("\n\t월 $%.2f이면 연봉으로 $%.2f입니다.", salary, salary * 12.0); //3 
    printf("\r우와!\n");    // \n은 줄바꿈 \t는 커서를 그 라인에 있는 다음 탭 위치로 옮겨준다.
                            // \r은 커서를 현재 라인의 시작 위치로 옮긴다.

    return 0;
}