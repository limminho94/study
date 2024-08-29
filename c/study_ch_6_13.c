// postage.c -- 제1종 우편요금
#include <stdio.h>
int main(void)
{
    const int FIRST_OZ = 46; // 2013년 기준
    const int NEXT_OZ = 20;  // 2013년 기준
    int ounces, cost;
    
    printf(" 온스   요금\n");
    for (ounces=1, cost=FIRST_OZ; ounces <= 16; ounces++,
         cost += NEXT_OZ)
        printf("%5d   $%4.2f\n", ounces, cost/100.0);
    
    return 0;
}