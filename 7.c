// Write a C program to check whether a character is alphabet or not.
#include<stdio.h>

int main(){
    char a;
    printf("Enter the character");
    scanf("%c", &a);
    if(a>='A' && a<='Z' || a>='a' && a<='z'){
    printf("The character %c is an alphabet", a);
    }
    else{
        printf("The Character %c is not an alphabet", a);
    }
    return 0;
}