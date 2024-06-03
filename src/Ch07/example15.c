#include <stdio.h>

int main(){
    int seedMoney = 1000000;
    int year = 0;
    int  futureMoney = seedMoney;
    while (1) {
        year++;
        // 매년 30%의 이자를 더해줌
        futureMoney *= 1.3; //또는 futureMoney = 1.3
        
        if (futureMoney > 10 * seedMoney) {
            break;
        }
    }
    /*
    while (futureMoney < 10 * seedMoney) { //while에 조건을 넣어도 됨, Ture 경우에만 반복이기 때문에
        year++;
        futureMoney *= 1.3; // 매년 30%의 이자를 더해줌     
    }
    */

    printf("%d년입니다.", year);

    return 0;
}
