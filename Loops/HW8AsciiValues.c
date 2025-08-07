#include<stdio.h>
int main (){

    int i=65;
    while (i<=90)
    { 
        char c = (char)i;   // >>>> TypeCasting
        printf ("%c = %d\n",c,i);
        i++;  
    }
    return 0;
}