// scores_in.c -- 배열 처리에 루프를 사용한다
#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;
    
    printf("%d개의 골프 스코어를 입력하시오:\n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf("%d", &score[index]);  // 10개의 골프 스코어를 읽는다
    printf("읽은 스코어들은 다음과 같다:\n");
    for (index = 0; index < SIZE; index++)
        printf("%5d", score[index]); // 입력을 검증한다
    printf("\n");
    for (index = 0; index < SIZE; index++)
        sum += score[index];         // 모두 더한다
    average = (float) sum / SIZE;    // 평균을 구한다
    printf("스코어의 합 = %d, 평균 = %.2f\n", sum, average);
    printf("핸디캡이 %.0f이다.\n", average - PAR);
    
    return 0;
}