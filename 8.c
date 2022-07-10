// Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>

int main(){
    char a;
    printf("Print the character");
    scanf("%c", &a);

    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'  ){
        printf("Character %c is a Vowel", a);
    }
    else{
        printf("Character %c is a Consonent", a);
    }
    return 0;
}