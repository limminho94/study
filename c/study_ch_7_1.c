// colddays.c -- 영하로 내려간 날들의 백분율을 구한다
#include <stdio.h>
int main(void)
{
    const int FREEZING = 0; //변수 FREEZING에 0을 할당한다.
    float temperature;      //변수 temperature 선언
    int cold_days = 0;      //변수 cold_days에 0을 할당한다.
    int all_days = 0;       //변수 all_days에 0을 할당한다.
    
    printf("최저 기온들의 목록을 입력하시오.\n");   //문장 출력
    printf("섭씨 단위를 사용하시오(입력을 끝내려면 q).\n"); //문장 출력
    while (scanf("%f", &temperature) == 1)  //scanf 입력값이 정수,실수면 1 그외 0 리턴 
    {
        all_days++;            //all_days후위 증가연산
        if (temperature < FREEZING) // temperature이 FREEZING보다 작으면
            cold_days++;            // cold_days에 +1 증가 
    }
    if (all_days != 0)  //all_days가 0이 아니라면
        printf("전체 %d일 중에 영하의 날씨는 %.1f%%였습니다.\n", all_days, 100.0 * (float) cold_days / all_days);
    if (all_days == 0) //all_days가 0이라면
        printf("입력된 데이터가 없습니다!\n");
    
    return 0;
}