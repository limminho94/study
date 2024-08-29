/* for_cube.c -- for 루프를 사용하여 세제곱 표를 만든다 */
#include <stdio.h>
int main(void)
{
    int num;
    
    printf("    n   n의 세제곱\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %5d\n", num, num*num*num);
    
    return 0;
}