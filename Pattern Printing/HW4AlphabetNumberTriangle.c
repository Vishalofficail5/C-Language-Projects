#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    for(int j=1; j<=n; j++){
        if(j%2==1){
            for(int i=1; i<=j; i++){
            printf("%d ", i);
        }
        
        }else {
           for(int i=1; i<=j; i++){
                char c = (char)i;
            printf("%c ", i+64);
           }
        }printf("\n");
    }
    
    return 0;
}