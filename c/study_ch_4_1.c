// talkback.c -- 수다스럽지만, 정보를 주는 프로그램
#include <stdio.h>
#include <string.h>     // strlen() 프로토타입을 사용하기 위해
#define DENSITY 62.4    // 신체밀도(입방피트당 파운드 수) define끝에는 세미콜론을 쓰지 않는다.
int main(void)
{
    float weight, volume;   // 데이터타입 float으로 변수 weight, volume을 선언한다.
    int size, letters;      // 데이터타입 int로 변수 size, letters를 선언한다.
    char name[40];  // name은 영문자로 40개를 넣을 수 있는 배열이다

    printf("하이! 이름이 뭐예요?\n");   // 문장 출력하고 줄바꿈
    scanf("%s 씨, 몸무게는 몇 파운드나 나가요?\n", name);   // %s 문자열 입력
    scanf("%f", &weight);       // 입력받는 값을 변수 weight에 저장한다.
    size = sizeof name;         // sizeof 메모리의 크기를 바이트로 변환
    letters = strlen(name);     // strlen 함수는 문자열의 길이를 알려준다.
    volume = weight / DENSITY;  // 변수 weight 값 나누기 DENSITY 값을 변수 volume에 할당한다.
    printf("옳거니, %s 씨의 몸은 %2.2f입방피트를 차지합니다.\n", name, volume); // %2.2f 소수점2자리까지 출력
    printf("그리고 이름이 %d글자니까,\n", letters); 
    printf("저장하려면 %d바이트가 필요합니다.\n",size);

    return 0;
}