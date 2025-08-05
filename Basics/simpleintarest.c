#include<stdio.h>
int main (){

int p = 1521;  
int r = 5;
int t = 2;
int si = p*r*t/100; // answer = 152
   printf ("%d", si);
    return 0;
}

/*answer is 152.1 but in output its shows 152 because of 'int' it is good to  use 'int' in values like(1000 or etc.)
but values like 1521 good to use 'float' so answer comes in decaimal also.*/

#include<stdio.h>
int main (){

float p = 1521;  
float r = 5;
float t = 2;
float si = p*r*t/100;  // answer = 152.100006
   printf ("%f", si);
    return 0;
}