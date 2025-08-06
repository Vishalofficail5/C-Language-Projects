#include<stdio.h>
int main (){

      int a;
            printf("Enter a Positive Integer: ");
              scanf("%d", &a);

      int b;
            printf("Enter a Positive Integer: ");
              scanf("%d", &b);

      int c;
            printf("Enter a Positive Integer: ");
              scanf("%d", &c);

      if (a>b && a>c)
        printf("a is greater than b and c");

      if (b>c && b>a)
        printf("b is greater than a and c");

      if (c>a && c>b)
        printf("c is greater than a and b");


    return 0;
}   