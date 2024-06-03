#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TRY 6 // 주사위의 면 수를 상수로 정의

int main(){

    srand(time(NULL)); // 현재 시간을 이용하여 시드 설정
    int count[TRY] = { 0 }; // 각 주사위 면의 빈도수를 저장할 배열 초기화
    
    // 주사위를 1000번 던져서 빈도수 측정
    for(int i = 0; i < 1000; i++)
    {
        ++count[(rand() % 6)]; // 해당하는 배열 요소에 빈도수 증가
    }

    // 결과 출력
    printf("====================\n");
    printf("숫자 \t 빈도\n");
    printf("====================\n"); // 헤더 출력

    for (int j = 0; j < TRY; j++)
    {
        printf("%d \t %d\n", j + 1, count[j]); // 주사위 숫자와 해당하는 빈도수 출력
    }
    
}
