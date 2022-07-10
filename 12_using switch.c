// Write a C program to input month number and print number of days in that month.
// Using Switch
#include<stdio.h>
void printnumberofdays(int a){
switch (a){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("31 Days");
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("30 Days");
    break;
    case 2:
    printf("28/29 Days");
    break;

}

}
int main(){
    int a ;
    printf("input number of days : ");
    scanf("%d", &a);

    printnumberofdays(a);

    
    return 0;
}