/* badcount.c -- 잘못된 전달인자 사용의 예 */
#include <stdio.h>
int main(void)
{
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("%d\n", n); // 전달인자가 너무 많다
    printf("%d\n", m); // 전달인자가 너무 적다
    printf("%f %f\n", f, g);    //데이터형이 일치하지 않는다

    return 0;
}