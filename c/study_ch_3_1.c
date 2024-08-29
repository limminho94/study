#include <stdio.h> 
int main(void) 
{
    int i = 2147483647;     // 변수 i 초기화
    unsigned int j = 4294967295; // 변수 j 초기화 / unsigned는 음수를 제외한다

    printf("%d %d %d\n", i, i+1, i+2);  // i값 출력
    printf("%u %u %u\n", j, j+1, j+2);  // j값 출력

    return 0;
}