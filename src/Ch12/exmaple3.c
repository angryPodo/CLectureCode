#include <stdio.h>
#define SIZE 3

struct student
{
  int number;
  char name[20];
  double grade;
};

int main()
{
  struct student list[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    printf("학번을 입력하시오: ");
    scanf("%d", &list[i].number);
    printf("이름을 입력하시오: ");
    scanf("%s", list[i].name);
    printf("학점을 입력하시오: ");
    scanf("%lf", &list[i].grade);
  }

  for (int i = 0; i < SIZE; i++)
  {
    printf("학번 : %d\n이름 : %s\n학점 : %f\n", list[i].number, list[i].name, list[i].grade);
  }
}