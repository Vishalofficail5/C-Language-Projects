#include<stdio.h>
int main (){

    int n;
    printf ("Enter the number: ");
    scanf ("%d", &n);

    int y = n;
    int r = 0;
    while (n>0)
    {
        int ld = n%10;
        n = n/10;
        r = r*10;
        r= r+ld;
    }   
    int sum = y+r;
     
    printf ("Sum of given number is: %d", sum);

    return 0;
}