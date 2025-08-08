#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int nsp = 1;
    int nst = n;
    int mid = 2*n-1;

    for(int i=1; i<=mid; i++){
        if (i<=n){
            printf("%d ", i);
        }
        else {
            printf("%d ", mid-i+1);
        }     
    }printf("\n");

    for (int i=1; i<=n; i++){
        
        for(int j=1; j<=mid; j++){
            if (i<=n){
                printf("%d ", j);
            }
            else{
                printf("%d ", mid-j+1);
            }
            
        }
        for(int k=1; k<=nsp; k++){
            printf("  ");
          
        }    
        printf("\n");

    }
    return 0;
}

