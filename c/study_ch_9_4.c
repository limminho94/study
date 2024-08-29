/* misuse.c -- 부정확하게 함수를 사용한다 */
#include <stdio.h>
int imax();      /* ANSI C 이전 형식의 함수 선언 */

int main(void)
{
    printf("(%d,%d)에서 큰 것은 %d\n", 3, 5, imax(3)); // 전달인자가 하나 없다.
    printf("(%d,%d)에서 큰 것은 %d\n", 3, 5, imax(3.0, 5.0)); // 정수 대신 부동소수점 사용
    return 0;
}

int imax(n, m)  
int n, m;
{
    return (n > m ? n : m); // n이 m보다 크면 n을 리턴 그렇지 않으면 m을 리턴
}