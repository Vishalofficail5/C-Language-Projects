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

      if (a>=b && a>=c)
        printf("%d is Greatest \n ",a);

      else if (b>=c && b>=a)
        printf("%d is Greatest \n ",b);

     else
        printf("%d is Greatest \n ",c);


    return 0;
}       