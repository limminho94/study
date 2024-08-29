// cypher2.c -- 알파벳 문자가 아닌 것들을 유지하고, 입력을 변경한다
#include <stdio.h>
#include <ctype.h>            // isalpha() 함수를 위해
int main(void)                
{
    char ch;    // ch를 선언한다. 문자형으로
    
    while ((ch = getchar()) != '\n') //입력받는 값이 \n가 아니라면
    {
        if (isalpha(ch))      // 문자이면
            putchar(ch + 1);  // 다음 문자를 출력한다
        else                  // 그렇지 않으면
            putchar(ch);      // 변경하지 않고 그대로 출력한다
    }
    putchar(ch);              // 개행을 출력한다
    
    return 0;
}