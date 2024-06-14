#include <stdio.h>

int main()
{
  int i = 3000;
  int *p = NULL;

  p = &i; // p의 값은 i의 주소

  printf("i = %d\n", i);
  printf("&i = %p\n\n", &i);
  // p = 주소값, *p = 주소가 가리키는 값
  printf("p = %p\n", p);
  printf("*p = %d", *p);
}