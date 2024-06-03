#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
    srand((unsigned)time(NULL)); // 현재 시간을 이용하여 시드 설정
    int price[SIZE] = {0};       // 가격을 저장할 배열
    int min;                     // 최솟값을 저장할 변수

    // 랜덤한 가격 생성
    for (int i = 0; i < SIZE; i++)
    {
        price[i] = (rand() % 100) + 1; // 1부터 100 사이의 난수
    }

    // 배열 요소를 출력
    printf("---------------------------------------\n");
    printf("1 2 3 4 5 6 7 8 9 10\n");
    printf("---------------------------------------\n");

    for (int j = 0; j < SIZE; j++)
    {
        printf("%-3d", price[j]); // 배열의 각 요소를 출력
    }
    printf("\n\n");

    // 최솟값 찾기
    min = price[0]; // 일단 첫 번째 요소를 최솟값으로 설정
    for (int j = 1; j < SIZE; j++)
    {
        if (min > price[j]) // 현재 최솟값보다 작은 값이 나오면
        {
            min = price[j]; // 최솟값을 갱신
        }
    }
    printf("최솟값은 %d 입니다.", min); // 최솟값 출력
}
