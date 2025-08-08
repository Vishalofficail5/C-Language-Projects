#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    for(int j=1; j<=n; j++){
        for(int i=1; i<=n+1-j; i++){

            char c = (char)j;
            printf("%c ", j+64);

        }printf("\n");
    }

    return 0;
}