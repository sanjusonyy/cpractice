// Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>

int main(){
    int a, negative, positive, zero;
    printf("Print a number");
    scanf("%d", &a);

    if(a>0){
        a = positive;
        printf("The entered number is Positive");
    }
    else if(a<0){
        a = negative;
        printf("The entered number is Negative");

    }
    else{
        a = zero;
        printf("The entered number is zero");

    }

    return 0;
}