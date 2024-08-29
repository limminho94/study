/* rows1.c -- 중첩 루프를 사용한다 */
#include <stdio.h>
#define ROWS  6
#define CHARS 10
int main(void)
{
    int row;
    char ch;
    
    for (row = 0; row < ROWS; row++)              /* line 10 */
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)  /* line 12 */
            printf("%c", ch);
        printf("\n");
    }
    
    return 0;
}