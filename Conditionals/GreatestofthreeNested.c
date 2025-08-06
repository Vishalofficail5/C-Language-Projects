#include<stdio.h>
int main (){

    int a;
    printf ("Enter First Number: ");
    scanf ("%d", &a);

    int b;
    printf ("Enter Second Number: ");
    scanf ("%d", &b);

    int c;
    printf ("Enter Thrid Number: ");
    scanf ("%d", &c);

  if (a>b){
    if (a>c)
    printf ("%d Greatest", a);
    else // c>a>b
    printf ("%d Greatest", c);

  }

  else { // b>a
    if (b>c)
    printf ("%d Greatest", b);
    else // c>b>a
    printf ("%d Greatest", c);
} 
    
  
    return 0;
}   