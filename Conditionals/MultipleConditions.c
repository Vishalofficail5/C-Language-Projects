#include<stdio.h>
int main (){

     int x;
     printf("Enter a Number:");
     scanf("%d", &x);

     if(x>99 && x<1000)                //  && stand for logical And in  coding
          printf("Yes Three Digit Number");
     else
          printf("Not a Three Digit Number");

    return 0;
}