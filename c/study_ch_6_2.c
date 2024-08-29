// when.c -- 루프는 언제 끝나는가
#include <stdio.h>
int main(void)
{
    int n = 5;
    
    while (n < 7)                    // line 7
    {
        printf("n = %d\n", n);
        n++;                         // line 10
        printf("이제 n = %d\n", n);   // line 11
    }
    printf("루프가 끝났다.\n");
    
    return 0;
}