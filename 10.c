// Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>

int main(){
    char ch;
    printf("Print any alphabet %c", ch);
    scanf("%c", &ch);

    if(ch>='a' && ch<='z'){
        printf("Alphabet %c you have entered is Lowercase", ch);
    }
    else if(ch>='A' && ch<='Z'){
        printf("Alphabet %c you have entered is Uppercase", ch);

    }
    return 0;
}