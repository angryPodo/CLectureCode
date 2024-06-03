#include <stdio.h>

// swap 함수의 선언 - 포인터를 인자로 받음
void swap(int *x, int *y);

int main()
{
  // 변수 a와 b를 선언하고 초기화
  int a = 100, b = 200;
  // 현재 a와 b의 값을 출력
  printf("a = %d, b = %d\n", a, b);

  // swap 함수 호출 - a와 b의 주소를 전달 (참조에 의한 호출, call by reference)
  swap(&a, &b);

  // swap 함수 호출 후 a와 b의 값을 출력 (값이 변경됨)
  printf("a = %d, b = %d\n", a, b);
  return 0;
}

// swap 함수 정의 - 포인터를 통해 변수의 값을 교환
void swap(int *x, int *y)
{
  int temp;

  // *x는 x가 가리키는 변수의 값, *y는 y가 가리키는 변수의 값
  // temp에 x가 가리키는 변수의 값을 저장
  temp = *x;
  // x가 가리키는 변수의 값을 y가 가리키는 변수의 값으로 변경
  *x = *y;
  // y가 가리키는 변수의 값을 temp로 변경 (원래 x가 가리키던 값)
  *y = temp;
}