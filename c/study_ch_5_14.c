/* convert.c -- 자동 데이터형 변환 */
#include <stdio.h>
int main(void)
{
    char ch;    // 문자형 변수 ch 선언
    int i;      // 정수형 변수 i 선언
    float fl;   // 실수형 변수 fl 선언
    
    fl = i = ch = 'C';                                  /* line 9  */
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* line 10 */   // 아스키코드 C 십진수로 67이므로 i는 67 
    ch = ch + 1;                                        /* line 11 */   // 67 + 1 = 68 아스키코드로 D
    i = fl + 2 * ch;                                    /* line 12 */   // 67.00 + (2 * 68)
    fl = 2.0 * ch + i;                                  /* line 13 */   // (2.0 * 68) + 203
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* line 14 */
    ch = 1107;                                          /* line 15 */   // 1107 이진법으로 바꾼 후 1바이트
    printf("이제 ch = %c\n", ch);                        /* line 16 */
    ch = 80.89;                                         /* line 17 */   
    printf("이제 ch = %c\n", ch);                        /* line 18 */
    
    return 0;
}