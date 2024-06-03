#include <stdio.h>

int main(void)
{
    int x, y, r;

    printf("두 개의 정수를 입력하시오(큰수, 작은수): "); 
    scanf("%d %d", &x, &y);

    while (y != 0) //유클리드 알고리즘
    {
        r = x % y;
        x = y;
        y = r; 
    }
    printf("최대 공약수는 %d입니다.\n", x); 
    return 0;
}