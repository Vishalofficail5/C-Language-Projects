#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    int nsp = 1;
    int nst = n;

    for(int x=1; x<=n*2+1; x++){
        printf("* ");
    }
    printf("\n");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nst; j++){
            printf("* ");
        }
        for(int k=1; k<=nsp; k++){
            printf("  ");
        }
        for(int o=1; o<=nst; o++){
            printf("* ");
        }
        nsp+=2;
        nst--;
        printf("\n");

    }

    return 0;
}