#include<stdio.h>
int main (){

int x;
printf("Enter a Number: ");
scanf("%d", &x);
// if (x%2==0) printf("Even Number");     
// else printf("Odd Number");

    (x%2==0)? printf("Even Number") : printf("Odd Number"); // this is the cool way to  use if else bus..

    return 0;
}  