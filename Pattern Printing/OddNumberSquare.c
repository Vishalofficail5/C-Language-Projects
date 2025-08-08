#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of 'N': ");
    scanf("%d", &n);

// >>>>> Method - 1 

        for(int i=1; i<=n; i++){
            int a = 1;
            for(int j=1; j<=n; j++){
                    printf("%d ",a);  
                    a = a + 2;
            }printf("\n");
        }

// >>>>> Method - 2
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                    printf("%d ",2*j-1);  
            }printf("\n");
        }

    return 0;
}