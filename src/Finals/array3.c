#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void display(int array[]);

int main()
{
  srand((unsigned)time(NULL));
  int minimum[SIZE] = {0};
  int min;

  for (int i = 0; i < SIZE; i++)
  {
    minimum[i] = rand() % 100 + 1;
  }

  min = minimum[0];
  for (int i = 1; i < SIZE; i++)
  {
    if (min > minimum[i])
    {
      min = minimum[i];
    }
  }

  display(minimum);
  printf("최솟값은 %d 입니다.", min);
}

void display(int array[])
{
  printf("------------------------------\n");
  for (int i = 0; i < 10; i++)
  {
    printf(" %d", i + 1);
  }
  printf("\n");
  printf("------------------------------\n");
  for (int i = 0; i < 10; i++)
  {
    printf(" %d", array[i]);
  }
  printf("\n");
}