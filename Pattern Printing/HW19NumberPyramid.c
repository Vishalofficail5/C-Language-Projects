#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int nst = 1;

    for(int j=1; j<=n; j++){
        for(int q=1; q<=n-j; q++){
            printf("  ");
        }
        for(int i=1; i<=nst; i++){
            printf("%d ", i);
        }
        nst = nst+2;
        printf("\n");
    }

    return 0;
}   