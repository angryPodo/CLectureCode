#include <stdio.h>

struct student
{
  int num;
  char name[10];
  double grade;
};

int main()
{
  struct student s;
  int *p;
  p = &s;
  printf("학번을 입력하세요: ");
  scanf("%d", &s.num);

  printf("Insert name : ");
  scanf("%s", s.name);

  printf("Insert grade(float) :");
  scanf("%lf", &s.grade);

  printf("Num : %d\n", p->.num);
  printf("\n");
  printf("\n");
}
