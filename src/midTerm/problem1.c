#include <stdio.h>

int main(){
    int rows = 10;//행의 수

    for(int i = 0; i < rows; i++)// 10줄 출력
    {
        for(int j = 0; j < 9 - i; j++)//공백은 9,8,7..처럼 1씩 감소함
        {   
            printf(" ");//공백 출력
        }
        for(int k = 0; k < 1 + 2 * i; k++)//별의 개수는 1+2i
        {
            printf("*");//별문자 출력
        }
        printf("\n");  //행이 끝난후 줄바꿈  
    }
}