#include<stdio.h>
int main (){

    int n;
    printf ("Enter a Number: ");
    scanf ("%d", &n);

    int sum=0;
    while (n>0)
    {
       int ld = n%10;
        n /= 10;   // n = n/10
        sum += ld; // sum = sum + ld
    
    }
    printf("Count of Digits is %d", sum);

    return 0;
}

// Try this code after Some time>>>>>