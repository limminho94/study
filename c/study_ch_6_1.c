/* summing.c -- 대화식으로 입력한 정수들의 합을 구한다 */
#include <stdio.h>  // 입출력이 포함된 파일
int main(void)  
{
    long num;   // 변수 num을 선언한다.
    long sum = 0L;      /* sum을 0으로 초기화한다   */
    int status; // 변수 status를 선언한다.
    
    printf("합을 구할 정수를 하나 입력하시오 ");
    printf("(끝내려면 q): ");
    status = scanf("%ld", &num);    // 입력받는 값을 num의 주소값 안에 할당하고 그 값을 status에 할당한다.
    while (status == 1) /* ==는 "같다"는 뜻이다   */
    {
        sum = sum + num;    
        printf("다음 정수를 입력하시오 (끝내려면 q): ");
        status = scanf("%ld", &num);
    }
    printf("입력된 정수들의 합은 %ld입니다.\n", sum);

    return 0;
}