#include<stdio.h>
int main(){
 
        int x;
        printf("Enter a Number:");
        scanf("%d",&x);
        printf("%d", x/2);  // you think we can use float at place of int but in question give we have to use integer 


 return 0;
}

//                             FOR THIS WE USE TYPE CASTING *VERY IMPORTANT* 

#include<stdio.h>
int main(){

        int x;
        printf("Enter the Number:");
        scanf("%d", &x);
//      Type Casting 
        float F = (float)x;  // If we need to convert integre to Decimal number than  that we use TYPE CASTING
        printf("%f", F/2);

    return 0;
}