// Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>

int main(){
    int angle1, angle2, angle3;
    int triangle;
    printf("enter the 1st angle of the triangle : \n");
    scanf("%d", &angle1);
      printf("enter the 2nt angle of the triangle : \n");
    scanf("%d", &angle2);
      printf("enter the 3rd angle of the triangle : \n");
    scanf("%d", &angle3);
    if((angle1 + angle2 + angle3) == 180){
    printf("the triangle is valid");
    }
    else{
        printf("the triangle is not valid");
    }


    return 0;
}