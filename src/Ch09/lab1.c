#include <stdio.h>

// 잔고를 업데이트하는 함수
void save(int);

int main(){
    int inputMoney;

    while (1)
    {
        // 거래 테이블
        printf("입/출금할 금액을 입력하세요.\n");
        printf("금액이 0원이면 종료됩니다: ");
        
        // 정수 값 이외의 입력을 처리
        if (scanf("%d", &inputMoney) != 1) {
            printf("잘못된 입력입니다. 정수 값을 입력하세요.\n");
            while (getchar() != '\n'); // 입력 버퍼 비우기
            continue; // 다음 반복으로 진행
        }
        
        // 입력 버퍼 비우기
        while (getchar() != '\n');

        if(inputMoney == 0){
            break;
        }
        else if (inputMoney >= 0 || 0 >= inputMoney){
            printf("==============================\n"); 
            printf("입금 \t출금\t 잔고\n"); // 문자열 출력
            printf("==============================\n"); 
            save(inputMoney);
            printf("==============================\n"); 
        }
        else{
            printf("잘못된 입력입니다.");
            continue;
        }
    }
    return 0;
}

// 잔고를 업데이트하는 함수
void save(int amount) {
    // 잔고를 저장하는 정적 변수
    static long balance = 0;
    
    // 금액을 출력하고 잔고를 업데이트
    if (amount >= 0)
    { 
        printf("%d \t \t", amount); // 입금액 출력
    }
    else
    {
        printf("\t %d \t",-amount); // 출금액 출력
    }
    balance += amount; // 잔고 업데이트

    // 현재 잔고 출력
    printf("%ld \n", balance); 
}
