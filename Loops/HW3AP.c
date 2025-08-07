#include<stdio.h>
int main (){

// METHOD >>> 1


    int n;
    printf("Enter the Terms: ");
    scanf ("%d", &n);

    for(int i=4; i<=3*n+1; i=i+3){
        printf("%d ", i);
    }


// METHOD >>> 2

    int n;
    printf("Enter the Terms: ");
    scanf ("%d", &n);

    int a = 4;

    for(int i=1; i<=n; i++){
        printf("%d ", a);
        a = a +3;
    }


    return 0;
}

