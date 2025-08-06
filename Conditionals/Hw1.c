#include<stdio.h>
int main (){

    int x;
    printf("Enter a Positive Integer:");
    scanf ("%d", &x);
    if (x%5==0) printf("Yes divisible by 5");
    if (x%5!=0) printf("Not divisible by 5");

    return 0;
}