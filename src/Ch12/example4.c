#include <stdio.h>

struct student
{
  int num;
  char name[20];
  double grade;
};

int main()
{
  struct student s = {1, "홍길동", 4.3};
  struct student *p;

  p = &s;

  printf("학번=%d 이름=%s 학점=%f \n", s.num, s.name, s.grade);
  printf("학번=%d 이름=%s 학점=%f \n", (*p).num, (*p).name, (*p).grade);
  printf("학번=%d 이름=%s 학점=%f \n", p->num, p->name, p->grade);
}