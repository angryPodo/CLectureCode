#include <stdio.h>

int main(){
    int num;
    long fact = 1;//큰 정수값을 대비해 long형 선언
    //long도 24이상은 오버플로우 발생

    printf("정수를 입력하시요: ");
    scanf("%d",&num);

    for(int i = 1; i <= num ; i++){
        //1부터 num이하까지 반복
        fact *=i;
    }
    printf("%d!은 %ld입니다.",num,fact);

    return 0;
}