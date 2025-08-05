#include<stdio.h>
int main ()
{
 float x = 5;              //float is use for decimal valuse and we have to  use (%f in printf)
 float y = 2;
 //printf ("%d %d", x,y); // If we want to  make a gap b/w 2 valuse in same line  use ("%d %d", the values)
 printf ("%f\n", x+y);  //7.000000
 printf ("%f\n", x-y);  //3.000000
 printf ("%f\n", x*y);  //10.000000
 printf ("%f\n", x/y); //2.500000        
    return 0;
}

/*we can use this format to take +,-,* values in integers and for divide we can use 'float' after 'int' in above code 
we can do with  float as well as but we get deciaml valuse 'like 7.000000' etc. because in c language the 6 decimal 
tak  values latha hai*/

#include<stdio.h>
int main ()
{
   int x = 5;
   int y = 2;
   printf ("%d\n", x+y); //7
   printf ("%d\n", x-y); //3
   printf ("%d\n", x*y); //10
   
   float z = 5;
   float c = 2;
   printf ("%f\n", z/c); //2.500000 
    return 0;
}