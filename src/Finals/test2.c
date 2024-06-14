#include <stdio.h>
#include <string.h>
struct student
{
  int num;
  char name[20];
  double grade;
};

int main()
{
  struct student s;
  struct student *p;

  p = &s;

  scanf("%d", &(*p).num);
  scanf("%s", s.name);
  scanf("%lf", &s.grade);

  printf("학번: %d\n", (*p).num);
  printf("이름: %s\n", p->name);
  printf("학점: %f\n", s.grade);
}
