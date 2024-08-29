// sweetie1.c -- 카운팅 루프
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count = 1;                     // 초기화
    
    while (count <= NUMBER)            // 검사
    {
        printf("Be my Valentine!\n");  // 실행
        count++;                       // 카운터 갱신
    }
    
    return 0;
}