// cmpflt.c -- 부동소수점 수의 비교
#include <math.h>
#include <stdio.h>
int main(void)
{
    const double ANSWER = 3.14159;  //  변수 ANSWER에 3.14159를 할당한다. 상수값으로 변하지않음
    double response;    // 변수 response를 선언한다.
    
    printf("원주율의 값이 얼마지?\n");
    scanf("%lf", &response);    // 입력값을 response주소값 안 공간?에 할당한다.
    while (fabs(response - ANSWER) > 0.0001)    //fabs() 절대값을 리턴한다.
    {
        printf("다시 말해 봐!\n");
        scanf("%lf", &response);
    }
    printf("충분히 가깝다!\n");
    
    return 0;
}