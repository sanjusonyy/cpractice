// Write a C program to input all sides of a triangle and check whether triangle is valid or not.
#include<stdio.h>

int main(){
    int side1, side2, side3;
      printf("enter the 1st side of the triangle : \n");
    scanf("%d", &side1);
      printf("enter the 2nt side of the triangle : \n");
    scanf("%d", &side2);
      printf("enter the 3rd side of the triangle : \n");
    scanf("%d", &side3);
    if((side1 + side2) > side3){
        if((side2 + side3) > side1)
        {
     if((side1 + side3) > side2)
     {
        
        printf("Triangle is Valid");
    }
    else{
        printf("Triangle is not valid");
    }
        }
       else{
        printf("Triangle is not valid");
    } 
        }
       else{
        printf("Triangle is not valid");
    } 

    return 0;
}