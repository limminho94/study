/* t_and_f.c -- C에서의 true 값과 false 값 */
#include <stdio.h>
int main(void)
{
    int true_val, false_val;
    
    true_val = (10 > 2);    // 참인 관계의 값
    false_val = (10 == 2);  // 거짓인 관계의 값
    printf("true = %d; false = %d \n", true_val, false_val);
    
    return 0;
}