#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int nst = 1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=nst; j++){
            printf("* ");
        }printf("\n");
        nst = nst+2;
    }
    
    return 0;
}