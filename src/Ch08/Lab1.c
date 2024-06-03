#include <stdio.h>
double transTempF(double tempC ); //transform c to f
double transTempC(double tempF ); //transform f to c
void calculateTemp(); //main menu for calculating temp
void printMenu(); //print default menu

int main(){

    calculateTemp();
    return 0;

}

double transTempF(double tempC){
    return 9.0 / 5.0 * tempC + 32; //return C to F temp
}
double transTempC(double tempF){
    return (tempF - 32.0) * 5.0 / 9.0; //return F to c temp
}
void printMenu(){
    //print menu for user
    printf("==========================\n"); 
    printf(" 'c' 섭씨온도에서 화씨온도로 변환\n"); 
    printf(" 'f' 화씨온도에서 섭씨온도로 변환\n"); 
    printf(" 'q' 종료\n"); 
    printf("==========================\n");
    printf("메뉴에서 선택하세요: ");

}
void calculateTemp(){
    while (1)
    {
        char choice;
        double temp;

        printMenu();// print menu
        scanf("%c" , &choice);//input menu char
        while(getchar() != '\n'); // delete '/n'

        printf("선택된 메뉴 : %c\n",choice);//test print for menu

        if (choice == 'q')
        {
            printf("종료합니다.");
            break;
        }
        else if (choice == 'f')
        {
            printf("화씨 온도: ");
            scanf("%lf",&temp);
            getchar();
            printf("섭씨온도: %lf \n", transTempC(temp));
        }
        else if (choice == 'c')
        {
            printf("섭씨 온도: ");
            scanf("%lf",&temp);
            getchar();
            printf("화씨온도: %lf \n", transTempF(temp));
        }
        else 
        {
            printf("잘못된 입력입니다.\n");    
        }
        
    }
}