#include <stdio.h>

int main(){
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    switch (num) {
        case 0:
            printf("없음");
            break;
        case 1:
            printf("하나");
            break;
        case 2:
            printf("둘");
            break;
        
        default:
            printf("많음");
            break;
    }

}