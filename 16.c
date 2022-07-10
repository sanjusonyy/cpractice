// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle
#include<stdio.h>

int main(){
     int side1, side2, side3;
      printf("enter the 1st side of the triangle : \n");
    scanf("%d", &side1);
      printf("enter the 2nt side of the triangle : \n");
    scanf("%d", &side2);
      printf("enter the 3rd side of the triangle : \n");
    scanf("%d", &side3);
    if(side1 == side2 == side3)
    {
        printf("Triangle is equilateral\n");
    }
    else if(side1==side2 || side2==side3 || side1 ==side3){
        printf("triangle is isosceles");
    }
    else{
        printf("The triangle is scalane\n");
    }
    return 0;
}