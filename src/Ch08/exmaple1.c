#include <stdio.h>

void printStar(); // print "*" 30 times

int main(){

    printStar();
    printf("Hello world.\n");
    printStar();

    return 0;

}

void printStar(){

    for (int i = 0; i < 30; i++)
    {
        printf("*");
    }
    printf("\n"); // print \n after print star

}