/* lethead2.c */
#include <stdio.h>
#include <string.h>            /* strlen()을 사용하기 위해 */
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num); // show_n_char함수 헤더 선언

int main(void)
{
    int spaces; //변수 spaces 선언 정수형으로.
    
    show_n_char('*', WIDTH);   /* 기호 상수를 전달인자로 사용한다 */
    putchar('\n');
    show_n_char(SPACE, 12);    /* 기호 상수를 전달인자로 사용한다 */
    printf("%s\n", NAME);
    spaces = (WIDTH - strlen(ADDRESS)) / 2;
                                /* 몇 개의 스페이스가 필요한지    */
                                /* 프로그램이 계산하게 한다     */
    show_n_char(SPACE, spaces);/* 변수를 전달인자로 사용한다   */
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
                                /* 표현식을 전달인자로 사용한다   */
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    putchar('\n');
    
    return 0;
}

/* show_n_char() definition */
void show_n_char(char ch, int num)
{
    int count;
    
    for (count = 1; count <= num; count++)
        putchar(ch);
}