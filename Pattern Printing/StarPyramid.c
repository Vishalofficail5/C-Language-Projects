#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

// Method >> 1

    // int nst = 1;

    // for(int i=1; i<=n; i++){
    //     for(int k=1; k<=n-i; k++){
    //         printf("  ");
    //     }for(int j=1; j<=nst; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    //     nst = nst+2;

    // }

// Method >> 2

    int nst = 1;
    int nsp = n-1;
    
    for(int i=1; i<=n; i++){
        for(int k=1; k<=nsp; k++){
            printf("  ");
        }
        nsp = nsp-1;
        for(int j=1; j<=nst; j++){
            printf("* ");
        }
        nst = nst+2;
        printf("\n");
        

    }
    
    return 0;
}