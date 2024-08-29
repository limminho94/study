/* platinum.c  -- your weight in platinum */
#include <stdio.h>
int main(void)
{
    float weight;   // 몸무게를 담을 변수를 선언 /* user weight             */
    float value;    // 플레티넘의 가치 수치를 담은 변수를 선언 /* platinum equivalent     */
    
    // 사용자 안내문
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    
    // 사용자에게 몸무게 입력 받기 /* get input from the user                     */
    scanf("%f", &weight); // %f = float의 약자 ex) %f  1 = 1.0

    // 입력받은 몸무게를 기준으로 플레티넘 만큼의 가치 계산 수식 /* assume platinum is $1700 per ounce          */
    // value라는 변수에 결과를 할당합니다. /* 14.5833 converts pounds avd. to ounces troy */
    value = 1700.0 * weight * 14.5833;
    
    // 결과물 출력
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    
    return 0;
}