// Write a C program to input month number and print number of days in that month.
// Using Switch
#include<stdio.h>
// Function to print number of Days
void printNumberOfDays(int* arr, int* a)
{
    // Print the number of days for Nth
    // month using *(arr+(*N - 1))
    printf("%d Days.", *(arr + (*a - 1)));
}
int main(){
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int a;
    printf("input number of days : ");
    scanf("%d", &a);
    printNumberOfDays(arr, &a);

    return 0;
}