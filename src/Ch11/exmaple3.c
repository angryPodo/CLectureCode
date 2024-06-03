#include <stdio.h>

int main()
{
  int x = 10, y = 20;
  int *p;

  p = &x;                  // p의 주소는 x의 주소
  printf("p = %p\n", p);   // p는 포인터로 주소를 가지는 변수
  printf("*p = %d\n", *p); //*p는 포인터의 주소가 가리키는 값

  p = &y;
  printf("p = %p\n", p);   // p는 포인터로 주소를 가지는 변수
  printf("*p = %d\n", *p); //*p는 포인터의 주소가 가리키는 값

  return 0;
}