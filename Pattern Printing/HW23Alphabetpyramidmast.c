#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int nst = n;
    int nsp = 1; 

    for(int i=1; i<=n*2+1; i++){
        char c = (char)i;
        printf("%c ", i+64);
    }printf("\n");

    for(int i=1; i<=n; i++){
        int a = 1;
        for(int j=1; j<=nst; j++){
            char c = (char)a;
            printf("%c ", a+64);
            a++;   
        }
        for(int k=1; k<=nsp; k++){
            printf("  ");
            a++;
        }
        for(int p=1; p<=nst; p++){
            char c = (char)a;
            printf("%c ", a+64);
            a++;   
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}

