#include<stdio.h>
int main (){

// M1

for(int i=19; i<=190; i=i+19){       // In This Code runnig 10 times to  print 19 table.
         printf ("%d ", i);
                
//     }

// M2

for(int i=1; i<=190; i=i+1){        // In This Code runnig 190 times to  print 19 table.
         if (i%19==0)
         printf ("%d ", i); 
                
    }
        
    return 0;
}