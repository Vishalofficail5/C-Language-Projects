#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int midRC = n/2+1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==midRC || j==midRC)
                printf("* ");
            else printf("# ");
        }printf("\n");
    }
    return 0;
}
