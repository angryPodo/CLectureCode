#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

int main()
{
  srand((unsigned)time(NULL));
  int dice[SIZE] = {0};

  for (int i = 0; i < 1000; i++)
  {
    int a = (rand() % 6);
    ++dice[a];
  }
  printf("====================\n숫자\t빈도\n====================\n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d\t%d\n", i + 1, dice[i]);
  }
}