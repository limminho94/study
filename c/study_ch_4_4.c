/* pizza.c -- 피자 집에서 쓰는 용어로 상수를 정의한다 */
#include <stdio.h>
#define PI 3.14159  // define 지시자 문자 상수는 '' 작은 따옴표 / 문자열 상수에는 ""큰 따옴표 사용
int main(void)
{
    float area, circum, radius;     // float 데이터타입으로 변수 선언
    
    printf("피자의 반지름이 얼마냐?\n");    // "문장"출력
    scanf("%f", &radius);                 // 입력값을 변수 radius의 주소값 안 공간에 할당한다.
    area = PI * radius * radius;          // define PI 값인 3.14159 x (변수 radius의 입력값 x 2) 
    circum = 2.0 * PI *radius;            // 2.0 x PI x 변수 radius 값을 circum에 할당한다.
    printf("피자의 기본 매개변수는 다음과 같다:\n");    // "문장" 출력
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);  
    return 0;
}