#include<stdio.h>
int main (){

    int n;
    printf("Enter the value of n: ");
    scanf ("%d", &n);
// Method >> 1 (Not good method)
    int Hf=1;
    for(int i=1; i<=n-1; i++) {
        if (n%i==0) Hf=i;
        
    }
     printf ("Highest Factor is: %d", Hf);

// Method >>2

       int Hf=1;
    for(int i=n/2; i>=1; i--) {
        if (n%i==0){
          Hf=i;  
          break;
        }   
    }
     printf ("Highest Factor is: %d", Hf);

    return 0;
}