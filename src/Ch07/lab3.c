#include <stdio.h>

int main(){
    int guess;
    int answer = 30; //원하는 답을 입력
    int count = 0;

    do //dowhile로 code부분을 적어도 한번 실행
    {
       printf("정답인 숫자를 입력해보세요(1~100): ");
       scanf("%d" , &guess);
       if (guess > answer) //입력한 숫자가 정답보다 높을때
       {
        printf("입력한 숫자가 높습니다.\n");
       }
       if (guess < answer) //입력한 숫자가 정답보다 낮을때
       {
        printf("입력한 숫자가 낮습니다.\n");
       }
       count++; //try가 끝난 후 1씩 증가
    } while (guess != answer);

    printf("축하합니다, 정답입니다\n시도횟수 : %d",count);

    return 0;

}