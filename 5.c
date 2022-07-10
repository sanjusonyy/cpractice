// Write a C program to check whether a number is even or odd.
#include<stdio.h>

int main(){
    int a;
    printf("Enter the number");
    scanf("%d", &a);
    if(a%2==0){
        printf("The number %d is even", a);
    }
    else{
        printf("The number %d is odd", a);
    }
    return 0;
}