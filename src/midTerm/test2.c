#include <stdio.h> 

int main(void)
{
    int row = 10;

    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < (row-1)-i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < 1+2*i; j++)
        {
            printf("*");
        }
        printf("\n"); 
    }
    for (int i = 0; i < 10; i++)
    {
        for (int o = 0; o < i; o++)
        {
            printf(" ");
        }
        for(int l = 19; l > 2*i; l-- )
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    
}