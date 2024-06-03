#include <stdio.h>
#define ROW 3   // 학생 수
#define COLUMN 5  // 과목 수

int main() {
    double average[ROW] = { 0 };  // 학생별 평균 점수를 저장할 배열
    int grade[ROW][COLUMN] = 
    { 
        {87, 98, 80, 76, 3},  // 첫 번째 학생의 성적과 벌점
        {99, 89, 90, 90, 0},  // 두 번째 학생의 성적과 벌점
        {65, 68, 50, 49, 0}   // 세 번째 학생의 성적과 벌점
    };

    // 각 학생의 최종 성적 계산
    for (int i = 0; i < ROW; i++) {
        average[i] = grade[i][0] * 0.3 + grade[i][1] * 0.4 + grade[i][2] * 0.2 + grade[i][3] * 0.1 - grade[i][4];
        // 학생 번호와 최종 성적 출력
        printf("학생 %d번의 최종 성적 = %0.3lf\n", i + 1, average[i]);
    }

    return 0;
}
