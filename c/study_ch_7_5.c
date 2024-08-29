// divisors.c -- 중첩된 if문들이 어떤 수의 약수들을 출력한다
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    unsigned long num;          // 검사를 위해 주어지는 수
    unsigned long div;          // 잠정적인 약수
    bool isPrime;               // 소수 플래그
    
    printf("검사할 정수를 하나 입력하시오");
    printf("끝내려면 q\n");
    while (scanf("%lu", &num) == 1) //입력받는 값을 num의 주소값 안에 할당하고 정수나 소수라면 1 리턴
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++) //초기화; 조건식; 증감식
        {
            if (num % div == 0) 
            {
                if ((div * div) != num)
                    printf("%lu,%lu:둘 다 %lu의 약수다.\n", num, div, num / div);
                else
                    printf("%lu: %lu의 약수다.\n", num, div);
                isPrime= false; // 소수가 아니다
            }
        }
        if (isPrime)
            printf("%lu: 소수다.\n", num);
        printf("검사할 또 다른 정수를 하나 입력하시오");
        printf("끝내려면 q\n");
    }
    printf("안녕!\n");
    
    return 0;
}