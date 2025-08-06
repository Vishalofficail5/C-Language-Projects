#include<stdio.h>
int main (){

    float x;
    printf("Enter a Real Number: ");
    scanf("%f", &x);
    int a = (int)x;   // Type Casting
    float f = (float)a;
    if (x-f==0)
    printf ("Yes, It is a Integer\n");
    if (x-f>0)
    printf ("Number is Not a Integer");
    
    return 0;
}