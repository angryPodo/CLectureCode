#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char menu;
    int count = 5;

    while (1)
    { 
        srand(time(NULL));
        printf("경품 추첨을 위해 문자를 입력하시오: ");
        scanf(" %c", &menu); // 개행 문자를 소비하기 위해 공백 추가

        if (menu == 's')
        {
            printf("5개의 숫자가 생성됩니다\n");
            for (int i = 0; i < count; i++)
            {
                int num = (rand() % 16 + 1) * 3;
                printf("%d\n",num);
            }
            
        }
        else if (menu == 'q')
        {
            printf("프로그램을 종료합니다.");
            break;
        }
        else
        {
            printf("잘못된 입력입니다.\n");
            continue;
        }
    }
}
