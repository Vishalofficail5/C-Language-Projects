#include<stdio.h>
int main (){

int x;
printf("Enter a Number: ");
scanf("%d", &x);
if (x%2==0) printf("Even Number");     // In this code over code checking 2 times we can use else
if (x%2!=0) printf("Odd Number");

    return 0;
} 

// in computer (==) this sign is called a  equlity sign  not only (=) this is called assignment operater 
// != this is called not equal to  only this is (!) called not


#include<stdio.h>
int main (){

int x;
printf("Enter a Number: ");
scanf("%d", &x);
if (x%2==0) printf("Even Number");     
else printf("Odd Number");

    return 0;
} 