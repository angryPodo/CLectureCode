#include <stdio.h>

int main(){
    int num1, num2;
    while(1){
        printf("첫번째 정수를 입력하시오: ");
        scanf("%d",&num1);
        if (num1 == 0)
        {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        printf("두번쨰 정수를 입력하시오: ");
        scanf("%d",&num2);
        if(num1 < num2)
        {
            printf("두 수 사이의 값은\n");
            for(int i = num1 + 1; i < num2; i++){
                if(i == num2 - 1 ){
                    printf("%d입니다.\n",i);
                }
                else{
                    printf("%d\n",i);
                }
            }
        }
        else
        {
            printf("첫번째 정수가 두번째 정수보다 클 수 없습니다.\n");
        }
    }
}