// truth.c -- 어떤 값들이 참인가?
#include <stdio.h>
int main(void)
{
    int n = 3;
    
    while (n)   // n = 3
        printf("%d: 참\n", n--); // n-- 실행
    printf("%d: 거짓\n", n);
    
    n = -3;
    while (n)
        printf("%2d: 참\n", n++); // n++ 실행
    printf("%2d: 거짓\n", n);
    
    return 0;
}