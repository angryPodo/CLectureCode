#include <stdio.h>

int main(){
    int x,y,iresult;
    char op;
    double result; //몫의 정확도를 위해 더블형

    printf("수식을 입력하시오.\n(예: 2 + 5 )\n>>");
    scanf("%d %c %d",&x ,&op ,&y);

    if (op=='+'){ 
        result = x + y;
    }
    else if (op=='-') {
        result = x - y;
    }
    else if (op=='*') {
        result = x * y;
    }
    else if (op=='/') {
        if(y == 0){
            printf("0으로 나눌 수 없습니다.");
            return 1; //오류 발생시 1 return
        }
        result = (double)x / y; //result가 double이지만 계산이 int기 때문에 강제 형변환
    }
    else if (op=='%') {
        iresult = (int)x % (int)y;
        printf("%d %c %d = %d",x ,op ,y ,iresult);
        return 0;
    }
    else {
        printf("지원되지 않는 연산자입니다."); //5개의 연산 이외의 입력시 예외처리
        return 1;
    }
    printf("%d %c %d = %.2lf",x ,op ,y ,result);
    
    return 0;

}