#include <stdio.h>

int main(){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 19 - i * 2; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}