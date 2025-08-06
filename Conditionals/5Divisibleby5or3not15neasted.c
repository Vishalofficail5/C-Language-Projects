#include<stdio.h>
int main (){

      int x;
      printf("Enter a Number: ");
      scanf("%d", &x);

      if (x%15!=0){
        if (x%3!=0){
          if (x%5==0)
            printf ("Condition Valid");
            else
            printf ("Condition Invalid");     
        }
        else  // x%3=0
        printf("Condition Valid");   
      }
      else  // x%15=0
      printf ("Conditoin Invalid");
      
    return 0;
}