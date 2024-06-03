#include <stdio.h>
#include <math.h> //수학 연산 헤더파일

int main(){

    double dis,a,b,c;

    printf("계수 a,b,c를 차례대로 입력하시오 :\n");
    scanf("%lf %lf %lfs",&a ,&b ,&c);


    if ( a == 0 ){
        printf("방정식의 근은 %lf 입니다", ((-c) / b));
    }
    else {

        dis = b*b - (4.0*a*c); //해 존재 판별

        if( dis >= 0){
            // sqrt()는 인수의 제곱근
            printf("방정식의 근은 %lf 입니다.\n", (-b + sqrt(dis))/(2*a));
            printf("방정식의 근은 %lf 입니다.", (-b - sqrt(dis))/(2*a));
        }
        else{
            printf("실근은 존재하지 않습니다.");
        }
    }
    return 0;
}