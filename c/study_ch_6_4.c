/* while2.c -- 세미콜론에 주의하라 */
#include <stdio.h>
int main(void)
{
    int n = 0;
    
    while (n++ < 3);           /* line 7 */
    printf("n은 %d\n", n);  /* line 8 */
    printf("프로그램이 한 일은 이게 전부다.\n");
    
    return 0;
}