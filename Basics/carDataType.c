#include<stdio.h>
int main (){

 char x = '$';
 printf("%d", x); // implicit tpye casting 

 return 0;
}

 /*answer coming 32 but we are printing $ sign and it no show error why ? we use %c for char why we getting 32 
in this because charaters has a values because we have < 150 charaters that why we ha saprate values for 
charaters and this is the resones we getting 32 as a answer and this values name called "ASCII values" 
jo hames integer hi hogi koi  decimal  values nahi hoti ha charaters ki or ye charater ki values hames 
integer me hi  store hoti ha */

/* all key  persent in the keyboard capital or small have there own ASCII values we can use above code to 
take the values but we also now the math method we remember the 3 important values 'a'=97 , 'A'=65 , '0'=48 ,
let assume we want z values we can use fromula {z=a+25 = 122} like this any thing comes under('') is called
charaters only single not like aa or 10  this  is not a charater*/
   

#include<stdio.h>
int main (){

 char x = '$';
 printf("%c", x);
    
    return 0;
}


#include<stdio.h>
int main (){
//                               in this code we finding ascii values of charater 
 char ch = '!';
 int ascii = (float)ch ;       //explicit type casting
 printf("%d", ascii);
    
    return 0;
}

// in this code we are finding charater with  the ascii  values

#include<stdio.h>
int main (){

    int x = 118;
    printf("%c", x);   // implicit type casting
     char ch = (char)x ;
     printf("%c", ch);     // explicit type casting
    
    return 0;
}