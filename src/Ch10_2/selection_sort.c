#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10  // 배열 크기 정의

int main() {
    srand((unsigned)time(NULL));  // 난수 시드 설정
    int array[SIZE];  // 정렬할 배열
    int minimum;  // 최소값의 인덱스

    // 배열에 랜덤한 값 입력
    for (int i = 0; i < SIZE; i++) {
        array[i] = (rand() % 10) + 1;  // 1부터 10 사이의 난수 생성
        printf("%d ", array[i]);  // 생성된 값 출력
    }
    printf("\n");

    // 선택 정렬 시작
    for (int i = 0; i < SIZE; i++) {
        minimum = i;  // 현재 인덱스를 최소값으로 설정
        // 다음 인덱스부터 최소값을 찾기 위해 비교
        for (int j = (i + 1); j < SIZE; j++) {
            if (array[j] < array[minimum]) {
                minimum = j;  // 새로운 최소값 인덱스 저장
            }
        }
        // 최소값을 현재 위치와 교환
        int temp = array[i];
        array[i] = array[minimum];
        array[minimum] = temp;
    }

    // 정렬된 배열 출력
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
