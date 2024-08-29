//* two_func.c -- a program using two functions in one file */
#include <stdio.h>
void butler(void);      // 함수의 헤더부분을 메인함수위에 적어야함 아니면 함수정의를 메인함수위에 할 것. /* ANSI/ISO C function prototyping */
int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    
    return 0;
}

void butler(void)       /* start of function definition */
{
    printf("You rang, sir?\n");
}