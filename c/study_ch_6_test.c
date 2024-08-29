#include<stdio.h>

int main()
{
    const int ROWS = 7;
    int row;
    char ch , a;
    
    for(row = 1; row < ROWS; row++)
    {
        for(ch = 'F', a = ch; a < ('F'+row); a++)
            {printf("%c",ch);
            ch = ch-1;}
        printf("\n");
        
    }

}