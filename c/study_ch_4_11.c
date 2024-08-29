/* intconv.c -- 잘못 짝지어진 정수형 변환 지정자 */
#include <stdio.h>
#define PAGES 336   // PAGES라는 명단상수에 336을 할당한다.
#define WORDS 65618 // WORDS라는 명단상수에 65618을 할당한다.
int main(void)
{
    short num = PAGES;      // 명단상수 PAGES의 할당값인 336을 데이터타입이 short인 변수 num에 할당한다.
    short mnum = -PAGES;    // 명단상수 PAGES의 할당값인 336에 -가 있으므로 -366을 변수 mnum에 할당한다.
    
    printf("short형, unsigned short형 num: %hd %hu\n", num, num);   
    printf("short형, unsigned short형 -num: %hd %hu\n", mnum, mnum);    // -65618은 범위를 벗어남
    printf("int형, char형 num: %d %c\n", num, num); // int형은 2바이트 char형은 1바이트
    printf("int형, short형, char형 WORDS: %d %hd %c\n", WORDS, WORDS, WORDS);  
    return 0;
}