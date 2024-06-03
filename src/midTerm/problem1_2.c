#include <stdio.h>

int main(){
    int row = 11;

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < 21/2 ; j++)
        {
            printf("*");
        }
        for (int k = 0; k < 1 + 2 * i; k++)
        {
            printf(" ");
        }
        for (int l = i; l < 21/2; l++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}