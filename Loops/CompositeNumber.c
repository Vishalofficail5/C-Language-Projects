#include<stdio.h>
int main (){

    int n;
    printf ("Enter the number: ");
    scanf ("%d", &n);

    for (int i=2; i<=n/2; i++){
        if(n%i==0)
        printf ("%d is composite number \n", n);
        break;

    }
    return 0;
}   