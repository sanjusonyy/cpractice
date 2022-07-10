// Write a C program to input any character and check whether it is 
// alphabet, digit or special character?
#include<stdio.h>

int main(){
    char ch;
    
    printf("Enter the character %c\n",ch);
    scanf("%c", &ch);

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
    printf("The character %c is alphabet\n", ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("The character %c is Numerical\n", ch);

    }
    else{
        printf("The character %c is special character\n", ch);
    }
    return 0;
}