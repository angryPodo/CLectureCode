#include <stdio.h>
#define SEAT_SIZE 10 // 좌석의 개수를 상수로 정의

int main(){
    int reservedSeat[SEAT_SIZE] = {0}; // 좌석 예약 여부를 나타내는 배열
    char answer; // 사용자의 대답을 저장할 변수
    int seatNumber; // 예약할 좌석 번호를 저장할 변수

    // 예약 과정 반복
    while (1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는 n): ");
        scanf(" %c", &answer); // 사용자로부터 대답 입력 받음

        if (answer == 'y' || answer == 'Y')
        {
            // 현재 좌석 상태 출력
            printf("-------------------------------\n1 2 3 4 5 6 7 8 9 10\n-------------------------------\n");

            for (int i = 0; i < SEAT_SIZE; i++)
            {
                printf("%d ",reservedSeat[i]); // 좌석 예약 상태 출력
            }
            
            printf("\n몇 번째 좌석을 예약 하시겠습니까?: ");
            scanf("%d", &seatNumber); // 예약할 좌석 번호 입력 받음
            
            // 입력한 좌석 번호의 유효성 검사
            if (seatNumber <= 0 || seatNumber > SEAT_SIZE)
            {
                printf("1~10의 숫자를 입력하세요.\n");
                while (getchar() != '\n'); // 입력 버퍼 비우기
                continue; // 반복문 처음부터 다시 시작
            }

            // 좌석 예약 처리
            if(reservedSeat[seatNumber - 1] == 0) // 해당 좌석이 예약되지 않았을 경우
            {
                reservedSeat[seatNumber - 1] = 1; // 좌석을 예약 처리
                printf("예약 되었습니다.\n");
                while(getchar() != '\n'); // 입력 버퍼 비우기
            }
            else // 이미 예약된 좌석인 경우
            {
                printf("이미 예약된 좌석 입니다.\n");
                while(getchar() != '\n'); // 입력 버퍼 비우기
                continue; // 반복문 처음부터 다시 시작
            }

        }
        else if (answer == 'n' || answer == 'N' )
        {
            printf("종료합니다.");
            break; // 프로그램 종료
        }
        else // 잘못된 입력인 경우
        {
            printf("잘못된 입력입니다.\n");
            while(getchar() != '\n'); // 입력 버퍼 비우기
            continue; // 반복문 처음부터 다시 시작
        }
    }
}
