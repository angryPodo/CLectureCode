#include <stdio.h>

// swap 함수의 선언
void swap(int x, int y);

int main()
{
  // 변수 a와 b를 선언하고 초기화
  int a = 100, b = 200;
  // 현재 a와 b의 값을 출력
  printf("a = %d b = %d\n", a, b);

  // swap 함수 호출 - a와 b의 값을 복사해서 x와 y에 전달 (값에 의한 호출, call by value)
  swap(a, b);

  // swap 함수 호출 후에도 a와 b의 값은 변하지 않음
  printf("a = %d b = %d\n", a, b);
  return 0;
}

// swap 함수 정의 - 인자 x와 y의 값을 교환
void swap(int x, int y)
{
  int temp;
  // 초기 x와 y의 값을 출력
  printf("x = %d y = %d\n", x, y);

  // x와 y의 값을 교환
  temp = x;
  x = y;
  y = temp;

  // 교환 후 x와 y의 값을 출력
  printf("x = %d y = %d\n", x, y);
}