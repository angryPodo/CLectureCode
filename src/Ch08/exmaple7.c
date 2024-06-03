#include <stdio.h>

long fact(int n);//define do calculate fact
long comb(int n, int c);//define do calculate comb
int getInteger();//define input int

int main(){
    int a,b;
    a = getInteger();
    b = getInteger();
    printf("C(%d, %d) = %ld \n", a, b, comb(a, b));
    return 0;

}

long fact(int n){
    long result = 1; //everything start from 1

    for(int i = 1; i<=n; i++){
        result *= i; // result = result * i
    }
    return result; //return type = int
}
/*
int fact(int n) {
    // base case
    if (n == 0) {
        return 1;
    }
    // recursive
    else {
        return n * factorial(n - 1);
    }
}
*/

long comb(int n, int r){
    //comb = n! / (n-r)! * r!
    return fact(n) / (fact(r) * fact(n-r));
}

int getInteger(){
    int a;
    printf("정수를 입력하세요: ");
    scanf("%d", &a);
    return a;
}