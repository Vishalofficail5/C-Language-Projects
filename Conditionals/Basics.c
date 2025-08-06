#include<stdio.h>
int main (){

int x;
printf("Enter a Number: ");
scanf("%d", &x);
// If statments                             any thing b/w this {} is called as block of codes
if (x>0) {
    printf("Positive Number\n");
    printf("Good");   // If we have to  right more than one line use this barkets {}
}
if (x<0) printf("Nagetive Number");
if (x==0) 
       printf("Number Zero");
    return 0;
}
