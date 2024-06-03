#include <stdio.h>

int main(){
    int bacteria_count = 0;
    int hour = 0;

    printf("Enter the initial bacteria: ");
    scanf("%d" , &bacteria_count);
    while (hour<7)
    {
        hour += 1;
        bacteria_count *= 4;
    }
    printf("%d의 세균 배양됨.",bacteria_count);
}