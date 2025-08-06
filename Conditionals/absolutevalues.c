#include<stdio.h>
int main (){
     
     int x;
     printf("Enter a values: ");
     scanf("%d", &x);
     if (x>=0) printf("Absolute Values: %d", x);
     if (x<0){
        x=x*(-1);
        printf("Absolute Values: %d", x);
     }

    return 0;
}

#include<stdio.h>
int main (){
     
     int x;
     printf("Enter a values: ");
     scanf("%d", &x);
     if (x<=0) x=x*(-1);
     printf("Absolute Values: %d", x);
     
        // if satatment not comes under printf statment this is use to make over code shot otherwise both 
        // are good and correct
    
    return 0;
}