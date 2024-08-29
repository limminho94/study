// cypher1.c -- 스페이스는 유지하고, 입력을 변경한다
#include <stdio.h>
#define SPACE ' '             // 작은따옴표-스페이스-작은따옴표 
int main(void)
{
    char ch;    // 변수 ch를 선언한다. 문자형으로
    
    ch = getchar();           // 문자 하나를 읽는다         
    while (ch != '\n')        // 라인의 끝이 아닌 동안    
    {
        if (ch == SPACE)      // 스페이스는 그대로 둔다         
            putchar(ch);      // 변경하지 않는다      
        else
            putchar(ch + 1);  // 다른 문자들은 변경한다  
        ch = getchar();       // 다음 문자를 얻는다        
    }
    //putchar(ch);              // 개행을 출력한다        
    
    return 0;
}