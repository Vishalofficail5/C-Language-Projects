#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int nsp = n-1;

    for(int i=1; i<=n; i++){
        for (int j=1; j<=nsp; j++){
            printf("  ");
        }
        nsp = nsp-1;
        for(int k=1; k<=i; k++){
           char c =(char)k;
           printf("%c ",k+64);
        }
        int a = i-1;
        for(int q=1; q<=i-1; q++){
            char c = (char)a;
            printf("%c ",a+64);
            a=a-1;
        }
        printf("\n");
    } 
    
    return 0;
}