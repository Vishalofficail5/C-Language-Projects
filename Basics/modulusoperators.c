
//                    DONT RUN CODE LIKE THIS YOU HAVE TO  COMMENT OUT 4 CODES FRIST THAN RUN 
//                                         USE KEY Ctrl+/

#include<stdio.h>
int main (){

int x = 55;
int y = 2;
int z = x%y;             // % is use for taking the reminder  
printf ("%d", z);        // answer is 1

    return 0;
}

#include<stdio.h>
int main (){

int a = 55;
int b = 252655;        // If 'b' is greater than a than the answer while be 'a' 
int z = a%b;              
printf ("%d", z);      // answer is 55

    return 0;
}

#include<stdio.h>
int main (){

int a = 55;
int b = -2;        // If a & b is wirtn as a%(-b) than it will be consider as a%b and answer will be same 
int z = a%b;              
printf ("%d", z);      // answer is 1

    return 0;
}

#include<stdio.h>
int main (){

int a = -55;
int b = 2;   // If a & b is wirtn as (-a)%b than it will be consider as -a%b and answer will be come with - sign. 
int z = a%b;              
printf ("%d", z);      // answer is -1

    return 0;
}

#include<stdio.h>
int main (){

int a = -55;
int b = -2;        // If a & b is wirtn as (-a)%(-b) than it will be consider as -a%b and answer  will be come with - sign. 
int z = a%b;              
printf ("%d", z);      // answer is -1

    return 0;
}