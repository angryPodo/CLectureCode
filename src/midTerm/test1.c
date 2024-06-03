#include <stdio.h>

int main(){
    float BMI,weight,height; // BMI,체중,신장
    
    printf("몸무게를 kg단위로 입력하시오: ");//체중 문구
    scanf("%f" , &weight);//체중 입력
    printf("키를 미터단위로 입력하시오: ");//키 문구
    scanf("%f", &height);// 키 입력

    BMI = weight/(height*height);//BMI계산

    printf("당신의 BMI는 %.4f입니다.", BMI);//소수점 4자리 출력

}