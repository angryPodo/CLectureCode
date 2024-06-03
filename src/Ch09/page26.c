#include <stdio.h>

// 함수 프로토타입 선언
void sub();

int main(){

    // sub 함수를 세 번 호출하여 실행
    for(int i = 0; i < 3; i++)
    {
        printf("%d번째 호출 : ",i+1);
        sub();
    }
    return 0;

}

// sub 함수 정의
void sub(){

    // 정적과 자동 변수 선언 및 초기화
    static int scount = 0; // 정적 변수는 값이 유지됨
    int acount = 0; // 자동 변수는 함수 호출마다 초기화됨

    // 변수 값 출력
    printf("scount = %d\t", scount); // 정적 변수 값 출력
    printf("acount = %d\n", acount); // 자동 변수 값 출력

    // 변수 증가
    scount++; // 정적 변수 증가
    acount++; // 자동 변수 증가
}
