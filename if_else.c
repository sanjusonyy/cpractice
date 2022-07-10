#include<stdio.h>

int main(){
    int age;
    int vip = 0;
    vip = 1;
    printf("Enter the age\n");
    scanf("%d", &age);

    if(age>=70 && age>=18 || vip==1){
    printf("you are above 70, you canot drive\n");
    }
    else{
        printf("You can drive");

    }
    return 0;
}