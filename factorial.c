#include<stdio.h>
int factorial(int x);

int main(){
    int a = 5;
    printf("The value of factorial %d is %d", a, factorial(a));

    return 0;
}

int factorial(int x){
   printf("calling factorial(%d)\n", x);
   if(x<2){
    return 1;
   }
else{
    return x * factorial(x-1);
}

}