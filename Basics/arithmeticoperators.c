 // Arithmetic Operators
#include<stdio.h>
int main (){
 int x = 5;
 int y = 2;
 //printf ("%d %d", x,y); // If we want to  make a gap b/w 2 valuse in same line  use ("%d %d", the values)
 printf ("%d\n", x+y);  //7
 printf ("%d\n", x-y);  //3
 printf ("%d\n", x*y);  //10
 printf ("%d\n", x/y); //2.5        // issue
 // In computer if we divide 2 integers like 5/2 we get always a integer not a  values like 2.5 or etc. 
    return 0;
}