#include <stdio.h>

int A; // 전역 변수 A
int B; // 전역 변수 B
int add(); // add func 선언

int main(){

    int answer; // 결과 저장
    printf("정수를 입력하세요: ");
    scanf("%d",&A);
     
    printf("정수를 입력하세요: ");
    scanf("%d",&B);
    
    answer = add(); // add 함수 호출, answer에 저장
    printf("%d + %d = %d\n", A, B, answer); // 결과 출력

    return 0;
}

//add 함수
int add()
{
    return A + B; // A+B return

}
