// Write a C program to check whether a number is divisible by 5 and 11 or not.
#include<stdio.h>

int main(){
    int a;
    printf("enter the number");
    scanf("%d", &a);
    if(a%5==0 || a%11==0){
        // if(a%11==0){
            printf("The number %d is divisible by 5 & 11", a);
    }
    // else if(a%11==0){
    //         printf("The number %d is divisible by 11", a);

    // }
    else{
            printf("The number %d is not divisible by 5 & 11", a);
        }
    return 0;
}