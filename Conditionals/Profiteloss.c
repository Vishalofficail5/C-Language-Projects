#include<stdio.h>
int main (){

     int cp;
     printf("Enter Cost Price: ");
     scanf("%d", &cp);
     int sp;
     printf("Enter Selling Price: ");
     scanf("%d", &sp);
     if(cp==sp)
     printf("NO PROFIT NO LOSS");
     if (cp > sp)
     printf ("LOSS: %d", cp - sp);
     if (cp < sp)
     printf("PROFIT: %d", sp - cp);

    return 0;
}

// TRY THIS CODE WITH % TYPE
