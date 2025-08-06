#include<stdio.h>
int main (){

    int a;
        printf("ENTER THE NUMBER: ");
    scanf("%d", &a);

    int b;
         printf("ENTER THE NUMBER: ");
    scanf("%d", &b);

    char c;
        printf ("ENTER THE OPERATER (+,-,*,/): ");
    scanf(" %c", &c); 

// DOING WITH IF ELSE (M1)

    if (c=='+') 
        printf ("%d",a+b);
    else if (c=='-') 
        printf ("%d",a-b);
    else if (c=='*') 
        printf ("%d",a*b);
    else if (c=='/') 
        printf ("%d",a/b);
    else 
        printf ("INVALID OPERATER");

    // DOING WITH SWITCH STATEMENT 

    switch(c){

    case '+' :
        printf ("%d",a+b);
        break;
    case '-' :
        printf ("%d",a-b);
        break;
    case '*' :
        printf ("%d",a*b);
        break;
     case '/' :
        printf ("%d",a/b);
        break;
        default :
        printf ("INVALID OPERATER");

    }

    return 0;   
}
// Notes the space in 15 line in b/w " and %c this is important beacuse it not working without space. 