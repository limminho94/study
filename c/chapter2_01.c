// first.c
// 한줄 주석 쓸때
/*
주석을 많이 써야 할 경우
이런식으로
2024.08.05 수정부분
*/

#include <stdio.h>  // standard input/output의 줄임말 입출력을 포함하는 함수 맨 위에 작성해야함.
int main(void)      //int = 리턴되는 값(0)의 자료형을 함수 앞에 명시해준다.          /* a simple program             */
{
    int num;                                                                      /* define a variable called num */    
    num = 1;                                                                      /* assign a value to num        */

    printf("I am a simple ");                                                     /* use the printf() function    */
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n",num);

    return 0;
}