#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){  // >> For Spaces
            printf("  ");
        }for(int v=1; v<=i; v++){
            printf("* ");
    }printf("\n");
    
    }

    return 0;
}