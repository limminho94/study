/* praise1.c -- 몇 가지 유형의 문자열들을 사용한다 */
#include <stdio.h>
#define PRAISE "You are an extraordinary being." // PRAISE라는 명단상수에 뒤에 영어문장을 할당한다. 
int main(void)
{
    char name[40];      // name이라는 배열에 40바이트( \nul 포함) 를 선언한다.
    
    printf("실례지만 성함이 어떻게 되시는지?\n");   // 
    scanf("%s", name);
    printf("반갑습니다, %s 씨. %s\n", name, PRAISE);
    
    return 0;
}