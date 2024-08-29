/* lesser.c -- 둘 중에서 작은 것을 구한다 */
#include <stdio.h>
int imin(int, int); //imin함수 헤더 선언

int main(void)
{
    int evil1, evil2;   //evil1, evil2 정수형으로 선언.
    
    printf("두 정수를 입력하시오 (끝내려면 q):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2) //입력값이 정수라면 1 evil1,evil2 2개니까 2
    {
        printf("(%d,%d)에서 작은 것은 %d\n", evil1, evil2, imin(evil1,evil2));
        printf("두 정수를 입력하시오(끝내려면 q):\n");
    }
    printf("종료.\n");
    
    return 0;
}

int imin(int n,int m) // imin함수 실행 매개변수 n, m 선언 정수형으로.
{
    int min;    // min 정수형으로 선언
    
    if (n < m)  // n이 m 보다 작다면
        min = n;    // n을 min에 할당
    else        // 그렇지않으면
        min = m;    // m을 min에 할당
    
    return min; // min 값을 리턴
}