/* pound.c -- 하나의 전달인자를 사용하는 함수를 정의한다   */
#include <stdio.h>
void pound(int n);   // ANSI 프로토타입
int main(void)
{
    int times = 5;   // 정수형 변수 times에 5를 할당한다.
    char ch = '!';   // ASCII 코드값이 33이다 문자형 변수 ch에 ! 를 할당한다.
    float f = 6.0f; // 
    
    pound(times);    // int형 전달인자
    pound(ch);       // pound((int)ch);와 같다
    pound(f);        // pound((int)f);와 같다
    
    return 0;
}

void pound(int n)    // ANSI 스타일의 함수 헤더가
{                    // 하나의 int형 전달인자를
    while (n-- > 0)  // 사용한다고 알려 준다
        printf("#");
    printf("\n");
}