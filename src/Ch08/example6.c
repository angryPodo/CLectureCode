#include <stdio.h>

long fact(int n);//long size define do calculate fact

int main(){

    int n;

    printf("팩토리얼 n을 입력하세요: ");
    scanf("%d", &n);
    printf("%d!의 값은 %ld입니다. \n", n, fact(n)); 

    return 0;

}
long fact(int n){
    long result = 1; //everything start from 1

    for(int i = 1; i<=n; i++){
        result *= i; // result = result * i
    }
    return result; //return type is int
}