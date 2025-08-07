#include<stdio.h>
int main (){

    int v;
    printf ("Enter the Number: ");
    scanf ("%d", &v);

    int product = 1;
    while (v>0)
    {
       int ld = v%10;
       v = v/10;
       product = product*ld;
    }
    printf("Product of given Number is %d", product);


    return 0;
}