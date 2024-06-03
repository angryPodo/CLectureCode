#include <stdio.h>

int main()
{
  int i = 10;
  int *p; // 포인터 변수 i 선언

  p = &i; // p의 주소를 i의 주소로 변경
  printf("i = %d\n", i);

  *p = 20; // p가 가리키는 값 = *p 에 20 대입
  printf("i = %d\n", i);
  return 0;
}