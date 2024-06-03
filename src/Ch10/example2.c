#include <stdio.h>
#define STUDENTS 5 // 학생 수를 상수로 정의

int main(){
    int scores[5] = {0}; // 학생들의 성적을 저장하는 배열
    int sum = 0; // 성적의 총합을 저장할 변수

    // 각 학생의 성적 입력 받기
    for (int i = 0; i < STUDENTS; i++)
    {
        printf("%d번째 학생의 성적을 입력하세요: ", i + 1); // 학생의 번호를 출력
        scanf("%d" , &scores[i]); // 성적을 입력받아 배열에 저장
    }

    // 모든 학생의 성적을 더하기
    for (int j = 0; j < STUDENTS; j++)
    {
        sum += scores[j]; // 각 학생의 성적을 총합에 더함
    }
    
    // 성적 평균 계산하여 출력
    printf("성적 평균 = %d" , (sum/STUDENTS)); // 평균 계산 후 출력

}
