#include<stdio.h>
int main (){
  int x = 10; // this means "x" ki value 10 nahi hai "x" ek box hai jisme 10 values(numbers) rakha hua hai
  printf("%d\n", x);
  x = 20;                       // yeha par "x" ki value 20 ho gayi hai
  printf("%d\n", x);
  x = x+100;                   // yeha par "x" ki value 20+100 = 120 ho gayi hai (not like x=x+100 = 100)
  printf("%d\n", x);
  x = x - 50;                 // yeha par "x" ki value 120-50 = 70 ho gayi hai
    printf("%d\n", x);
    x = x * 5;                // yeha par "x" ki value 70*5 = 350 ho gayi hai
    printf("%d\n", x);
    x = x/2;                 // yeha par "x" ki value 350/2 = 175 ho gayi hai
    printf("%d\n", x);
    return 0;
}