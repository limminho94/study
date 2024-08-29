/* while1.c -- 중괄호를 빼먹지 마라       */
/* 잘못된 코딩이 무한 루프를 만든다 */
#include <stdio.h>
int main(void)
{
    int n = 0;
    
    while (n < 3)   
        printf("n is %d\n", n);     // while문에 중괄호가 없어서 다음 세미콜론까지만 실행
    n++;                            // 여기부터는 실행 x
    printf("프로그램이 한 일은 이게 전부다.\n");
    
    return 0;
}