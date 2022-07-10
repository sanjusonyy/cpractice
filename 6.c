// Write a C program to check whether a year is leap year or not.
#include<stdio.h>

int main(){
    int year;
    printf("Print year");
    scanf("%d", &year);
    if(year%4==0){
        printf("year %d is leap year", year);
    }
    else{
        printf("The year %d is not a leap year", year);
    }
    return 0;
}