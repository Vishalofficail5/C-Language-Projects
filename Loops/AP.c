#include<stdio.h>
int main (){

    // METHOD >>1

    int n;
    printf ("Enter Number of terms: ");
    scanf ("%d", &n);

    for (int i=1; i<=2*n-1; i=i+2){
        printf ("%d ", i);
    }
    

    // METHOD >> 2

    int n;
    printf ("Enter Number of terms: ");  // This method without maths
    scanf ("%d", &n);
     
    int a = 1;

    for (int i=1; i<=n; i++){
        printf ("%d ", a);
        a = a+2;
    
    }
    
    return 0;
}