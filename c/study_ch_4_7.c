/* width.c -- 필드 너비 */
#include <stdio.h>
#define PAGES 959   // 명단상수 PAGES에 959를 할당한다.
int main(void)
{
    printf("*%d*\n", PAGES);    // 정수형 출력 
    printf("*%2d*\n", PAGES);   // 필드가 2칸이지만 출력은 다됨
    printf("*%10d*\n", PAGES);  // 필드가 10칸
    printf("*%-10d*\n", PAGES); // - 가 붙으면 왼쪽부터 출력
    
    return 0;
}