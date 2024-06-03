#include <stdio.h>
#define SIZE 16

// 이진 탐색 함수의 프로토타입 선언
int binarySearch(int array[], int size, int key);

int main() {
    int key;
    // 탐색할 배열
    int grade[SIZE] = { 2,6,11,13,18,20,22,27,29,30,34,38,41,42,45,47 };

    // 사용자로부터 탐색할 값을 입력
    printf("탐색할 값을 입력하시오: ");
    scanf("%d", &key);

    // 이진 탐색 결과 출력
    printf("탐색 결과 = %d", binarySearch(grade, SIZE, key));
    return 0;
}

// 이진 탐색 함수
int binarySearch(int array[], int size, int key) {
    int middle;
    int low = 0;
    int high = size - 1;

    // low와 high를 각각 배열의 처음과 끝으로 설정
    while (low <= high) {
        printf("[%d %d]\n", low, high);
        middle = (low + high) / 2;

        // 탐색 성공
        if (key == array[middle]) {
            return middle;
        }
        //중간 값의 오른쪽 반 배열에서 탐색 진행
        else if (key > array[middle]) {
            low = middle + 1;
        }
        //중간 값의 왼쪽 반 배열에서 탐색 진행
        else {
            high = middle - 1;
        }
    }
    // 탐색 실패
    return -1;
}
