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
  struct student s1;

  s1.num = 60201995;
  strcpy(s1.name, "김아무개");
  s1.grade = 4.3;

  printf("%d\n%s\n%0.2f", s1.num, s1.name, s1.grade);
}