/* stringf.c -- 문자열 포맷 */
#include <stdio.h>
#define BLURB "Authentic imitation!"
int main(void)
{
    printf("[%2s]\n", BLURB);       // 필드가 2이지만 확장하여 출력함
    printf("[%24s]\n", BLURB);      // 필드가 24라서 칸이 남음
    printf("[%24.5s]\n", BLURB);    // .5 문자열 5개만 출력하라는 뜻
    printf("[%-24.5s]\n", BLURB);   // - 가 붙으면 왼쪽으로 정렬
    return 0;
}