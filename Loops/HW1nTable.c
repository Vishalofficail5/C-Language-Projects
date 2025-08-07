#include<stdio.h>
int main (){

    int n;
    printf ("Enter The Value Of n: ");
    scanf ("%d", &n);

    for (int i=n; i<=n*10; i=i+n){
        printf ("%d \n", i);
    }
        
    return 0;
}