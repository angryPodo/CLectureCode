#include <stdio.h>
#define SIZE 10
int main()
{
  int array[10] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
  int min, temp;

  for (int i = 0; i < SIZE; i++)
  {
    min = i;
    for (int j = i + 1; j < SIZE; j++)
    {
      if (array[min] > array[j])
      {
        min = j;
      }
    }
    temp = array[i];
    array[i] = array[min];
    array[min] = temp;

    printf("%d ", array[i]);
  }
}