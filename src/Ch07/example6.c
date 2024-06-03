#include <stdio.h>

int main(){
    int sum = 0;
    int num = 0;
    
    
    do //do-while은 code부분을 적어도 한번은 무조건 실행함.
    {
       printf("정수를 입력하시오: ");
       scanf("%d",&num);
       sum += num;
    } while (num != 0); // 0입력시 false로 반복문 종료.

    printf("숫자들의 합 : %d", sum);
    
    return 0;

}