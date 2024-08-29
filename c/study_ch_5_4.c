/* squares.c -- 처음 20까지의 제곱표를 만든다 */
#include <stdio.h>
int main(void)
{
    int num = 1;    // 변수 num에 1을 할당한다.
    
    while (num < 21)    // num 값이 21보다 작으면 {}반복
    {
        printf("%4d %6d\n", num, num * num);    // 4칸의 필드 / 6칸의 필드
        num = num + 1;  // num+1값을 num에 할당한다.
    }
    
    return 0;
}