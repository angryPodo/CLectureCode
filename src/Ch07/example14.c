#include <stdio.h>

int main(){
    char star = '*';

    for(int i = 1; i<=5; i++){
        for (int j = 1; j <= i; j++)
        {   //i가 1일때 j는 1이므로 1번 출력
            //i가 2일때 j는 1,2이므로 2번출력
            printf("%c",star);
        }
        printf("\n");
        
    }
}