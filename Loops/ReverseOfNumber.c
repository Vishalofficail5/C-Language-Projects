#include<stdio.h>
int main (){

    int n;
    printf ("Enter the Number: ");
    scanf ("%d", &n);

    int r = 0;
    while (n>0)
    {
        int ld=n%10;
        n=n/10;

        r=r*10;
        r=r+ld;

    }
    printf("Reverse of given number is : %d", r);

    return 0;
}