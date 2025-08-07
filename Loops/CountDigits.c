#include<stdio.h>
int main (){

    int n;
    printf ("Enter a Number: ");
    scanf ("%d", &n);

    int count=0;
    while (n>0)
    {
        n = n/10;    // Incremeant
        count++;     //  work
    }
    printf("Count of Digits is %d", count);


    return 0;
}

// Try this code after Some time>>>>>