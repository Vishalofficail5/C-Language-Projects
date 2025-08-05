#include<stdio.h>
int main(){
int x = 5;
printf("%d\n", x);    // x ki value = 5
x = 55;               // x ki value = 55
printf("%d\n", x);
x++;                  // x++ is a shotcut to  +1 in the above value of x (x+1)     // x ki value = 56
printf("%d\n", x);
x = x*9;              // x ki value = 504
printf("%d\n", x);
x--;                  //x ki value = 503
printf("%d\n", x);   
    return 0;
}

// x++ = post increment (this mean frist do the work then increment the value.)  
// ++x = pre increment  (this mean frist increment the value then do the work. )
// x-- = post decrement  --x = pre decrement (same as go for minas)

#include<stdio.h>
int main () {
int x = 5;
printf ("%d\n", x);  // 5
printf ("%d\n", x++); // 5  (read line no. 16)
printf ("%d\n", x);   //6 
    return 0;
}

#include<stdio.h>
int main () {
int x = 5;
printf ("%d\n", x);  // 5
printf ("%d\n", ++x); // 6  (read line no. 17)
printf ("%d\n", x);   //6 
    return 0;
}