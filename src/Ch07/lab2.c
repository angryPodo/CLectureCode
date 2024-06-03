#include <stdio.h>

int main(){

    int inputYear , halfYear = 0;
    double initialAmount = 100.0;
    double currentAmount = initialAmount;

    printf("반감기를 입력하시오(년): ");
    scanf("%d",&inputYear);

    while (currentAmount > initialAmount * 0.1)
    {
        halfYear += inputYear; //반감기 만큼의 연도
        currentAmount *= 0.5; //x년 뒤 1/2 연산을 곱으로 시행
        printf("%d년 후에 남은 양 = %lf\n",halfYear,currentAmount);

    }
    printf("1/10 이하로 되기까지 걸린 시간 = %d년", halfYear);

    return 0;
    
}