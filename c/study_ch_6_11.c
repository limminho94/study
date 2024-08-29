// sweetie2.c -- for를 사용하는 카운팅 루프
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count;
    
    for (count = 1; count <= NUMBER; count++)
        // 초기화 , 조건, 증감
        printf("달콤한 나의 발렌타인!\n");
    
    return 0;
}