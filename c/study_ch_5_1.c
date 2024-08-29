/* shoes1.c -- 사이즈 단위를 인치 단위로 변환한다 */
#include <stdio.h>
#define ADJUST 7.31              // 기호 상수의 한 종류
int main(void)
{
    const double SCALE = 0.333;  // 기호 상수의 다른 종류
    double shoe, foot;          // 데이터타입 double인 변수 shoe,foot을 선언한다.
    
    shoe = 9.0;                 // 변수 shoe에 9.0을 할당한다.
    foot = SCALE * shoe + ADJUST;   // foot에 (0.333 * 9.0) + 7.31 값을 할당한다.
    printf("신발 사이즈(남자용) 발길이\n");
    printf("%10.1f %15.2f 인치\n", shoe, foot); // shoe에 할당된 값을 10칸의 필드가 생기고 소수점 밑 1자리까지 출력
                                                // foot에 할당된 값을 15칸의 필드가 생기고 소수점 밑 2자리까지 출력
    return 0;
}