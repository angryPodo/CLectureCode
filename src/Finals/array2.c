#include <stdio.h>
#define SIZE 10

void displaySeat(int seat[], int size);
void reservedSeat(int seat[], int seatNum);

int main()
{
  char answer;            // Y or N
  int seats[SIZE] = {0};  // 예약석
  int seatNum1, seatNum2; // 좌석 번호

  while (1)
  {
    printf("좌석을 예약하시겠습니까?(y or n): ");
    scanf(" %c", &answer);

    // y일 때
    if (answer == 'y')
    {
      displaySeat(seats, SIZE);
      printf("\n");
      printf("몇 번째 좌석을 예약하시겠습니까? (예: 3 5): ");
      scanf("%d %d", &seatNum1, &seatNum2);
      while (getchar() != '\n')
      {
      }

      // 예약처리
      if ((seatNum1 < 1 || seatNum1 > 10 || seatNum2 < 1 || seatNum2 > 10) || (seatNum1 == seatNum2))
      {
        printf("잘못된 좌석 입력입니다.\n");
        continue;
      }
      reservedSeat(seats, seatNum1);
      reservedSeat(seats, seatNum2);
    }
    // n일 때
    else if (answer == 'n')
    {
      break;
    }
    else
    {
      printf("잘못된 입력입니다.\n");
      continue;
    }
  }

  return 0;
}

void displaySeat(int seat[], int size)
{
  printf("-------------------------------\n");
  for (int i = 0; i < size; i++)
  {
    printf(" %d", (i + 1));
  }
  printf("\n");

  printf("-------------------------------\n");
  for (int i = 0; i < size; i++)
  {
    printf(" %d", seat[i]);
  }
}

void reservedSeat(int seat[], int seatNum)
{
  if (seat[seatNum - 1] == 0)
  {
    seat[seatNum - 1] = 1;
    printf("%d번 좌석 예약되었습니다.\n", seatNum);
  }
  else
  {
    printf("%d번 좌석 이미 예약되었습니다.\n", seatNum);
  }
}