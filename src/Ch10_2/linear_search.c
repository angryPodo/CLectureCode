#include <stdio.h>
#define SIZE 10  // 배열 크기 정의

int main() {
    int searchKey;  // 사용자가 입력할 탐색할 값
    int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };  // 탐색할 배열

    // 사용자로부터 탐색할 값을 입력
    printf("탐색할 값을 입력하세요: ");
    scanf("%d", &searchKey);

    // 배열에서 탐색할 값을 찾기 위해 순차 탐색
    for (int i = 0; i < SIZE; i++) {
        if (list[i] == searchKey) {
            // 탐색 성공 시 인덱스 출력
            printf("탐색 성공 인덱스 = %d\n", i);
        }
    }

    // 탐색 종료 메시지 출력
    printf("탐색 종료.");
    return 0;
}
