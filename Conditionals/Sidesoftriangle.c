#include<stdio.h>
int main (){

    int a;
    printf("Enter First Side: ");
    scanf("%d", &a);

    int b;
    printf("Enter Second Side: ");
    scanf("%d", &b);

    int c;
    printf("Enter thrid Side: ");
    scanf("%d", &c);

    if (a+b>c && b+c>a && c+a>b)
    printf("Valid Triangle ");
    else
    printf("Invalid Triangle ");


    return 0;
}