#include<stdio.h>
int main (){

// M1

    for(int i=1; i<=100; i++){
         if (i%2!=0)
         printf ("%d ", i);
          
    }

// M2

for(int i=1; i<=100; i=i+2){
         printf ("%d ", i);
                
    }
        
    return 0;
}